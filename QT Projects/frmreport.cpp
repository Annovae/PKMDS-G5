#include "frmreport.h"
#include "ui_frmreport.h"
frmReport::frmReport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmReport)
{
    ui->setupUi(this);
    ppkm = new party_pkm();
    pkm = new pokemon_obj();
    sqlite3_open(":memory:", &db);
    getlist();
}
extern void * theSlot;
extern int frmCurBoxNum;
extern bw2savblock_obj * cursavblock;
extern int frmCurSlotNum;
void frmReport::getlist()
{
    vector<std::string> ColumnNames;
    // Add column names here
    ColumnNames.push_back("\"ID\"");
    ColumnNames.push_back("\"Species\"");
    ColumnNames.push_back("\"HP\"");
    ColumnNames.push_back("\"Attack\"");
    ColumnNames.push_back("\"Defense\"");
    ColumnNames.push_back("\"Sp. Attack\"");
    ColumnNames.push_back("\"Sp. Defense\"");
    ColumnNames.push_back("\"Speed\"");
    vector<std::string> ColumnTypes;
    // Add column data types here
    ColumnTypes.push_back("Integer");
    ColumnTypes.push_back("String");
    ColumnTypes.push_back("Integer");
    ColumnTypes.push_back("Integer");
    ColumnTypes.push_back("Integer");
    ColumnTypes.push_back("Integer");
    ColumnTypes.push_back("Integer");
    ColumnTypes.push_back("Integer");
    // Add vectors for column data here
    vector<int> IDValues;
    vector<std::string> SpeciesNames;
    vector<int> HPValues;
    vector<int> AtkValues;
    vector<int> DefValues;
    vector<int> SpAtkValues;
    vector<int> SpDefValues;
    vector<int> SpeedValues;
    //    int box = 0;
    for(int box = 0; box < 24; box++)
    {
        for(int slot = 0; slot < 30; slot++)
        {
            pkm = &(cursavblock->boxes[box].pokemon[slot]);
            if(!((bool)(pkm->isboxdatadecrypted)))
            {
                decryptpkm(pkm);
            }
            if(pkm->species != Species::NOTHING)
            {
                // Add values to vectors here
                IDValues.push_back((int)(pkm->species));
                SpeciesNames.push_back(lookuppkmname(pkm));
                HPValues.push_back(getpkmstat(pkm,Stat_IDs::hp));
                AtkValues.push_back(getpkmstat(pkm,Stat_IDs::attack));
                DefValues.push_back(getpkmstat(pkm,Stat_IDs::defense));
                SpAtkValues.push_back(getpkmstat(pkm,Stat_IDs::spatk));
                SpDefValues.push_back(getpkmstat(pkm,Stat_IDs::spdef));
                SpeedValues.push_back(getpkmstat(pkm,Stat_IDs::speed));
            }
        }
    }
    std::string TableName = "PKM_DATA";
    stringstream ss1;
    ss1 << "create table " << TableName << "(";
    for(int i = 0; i < ColumnNames.size()-1; i++)
    {
        ss1 << ColumnNames[i] << " " << ColumnTypes[i] << ", ";
    }
    ss1 << ColumnNames[ColumnNames.size()-1] << " " << ColumnTypes[ColumnNames.size()-1];
    ss1 << ")";
    sqlite3_prepare_v2(db,ss1.str().c_str(),-1,&stmt,0);
    sqlite3_step(stmt);
    stringstream ss2;
    ss2 << "insert into " << TableName << "(";
    for(int i = 0; i < ColumnNames.size()-1; i++)
    {
        ss2 << ColumnNames[i] + ", ";
    }
    ss2 << ColumnNames[ColumnNames.size()-1];
    ss2 << ") values ";
    for(int p = 0; p < SpeciesNames.size()-1; p++)
    {
        // Get data from vectors here
        ss2 << "(";
        ss2 << IDValues[p] << ", ";
        ss2 << "\"" << SpeciesNames[p] << "\", ";
        ss2 << HPValues[p] << ", ";
        ss2 << AtkValues[p] << ", ";
        ss2 << DefValues[p] << ", ";
        ss2 << SpAtkValues[p] << ", ";
        ss2 << SpDefValues[p] << ", ";
        ss2 << SpeedValues[p];
        ss2 << "),\n";
    }
    int p = (int)(SpeciesNames.size())-1;
    // Get data from vectors here
    ss2 << "(";
    ss2 << IDValues[p] << ", ";
    ss2 << "\"" << SpeciesNames[p] << "\", ";
    ss2 << HPValues[p] << ", ";
    ss2 << AtkValues[p] << ", ";
    ss2 << DefValues[p] << ", ";
    ss2 << SpAtkValues[p] << ", ";
    ss2 << SpDefValues[p] << ", ";
    ss2 << SpeedValues[p];
    ss2 << ");";
    sqlite3_prepare_v2(db,ss2.str().c_str(),-1,&stmt,0);
    sqlite3_step(stmt);
    std::ostringstream query;
    query << "SELECT * FROM " << TableName;
    vector<vector<string> > results;
    if(sqlite3_prepare_v2(db, query.str().c_str(), -1, &stmt, 0) == SQLITE_OK)
    {
        int cols = sqlite3_column_count(stmt);
        int result = 0;
        while(true)
        {
            result = sqlite3_step(stmt);

            if(result == SQLITE_ROW)
            {
                vector<string> values;
                for(int col = 0; col < cols; col++)
                {
                    values.push_back((char*)sqlite3_column_text(stmt, col));
                }
                results.push_back(values);
            }
            else
            {
                break;
            }
        }
        sqlite3_finalize(stmt);
    }
    ui->tblPKM->setColumnCount(8);
    QVector<QString> vect;
    for(int i = 0; i < ColumnNames.size(); i++)
    {
        std::ostringstream o;
        o << ColumnNames[i];
        vect.push_back(QString::fromStdString(o.str()));
    }
    /*
    //    QVector<std::string> vect = QVector<std::string>::fromStdVector(ColumnNames);
    //    ui->tblPKM->setVerticalHeaderLabels();
    //    ui->tblPKM->setVerticalHeaderLabels(QStringList::fromVector(QVector<std::string>::fromStdVector(ColumnNames)));
    */
//    ui->tblPKM->setVerticalHeaderLabels(QStringList::fromVector(vect));
//    ui->tblPKM->setVerticalHeaderLabels({"Test","Test2"});
    ui->tblPKM->setHorizontalHeaderLabels(QStringList::fromVector(vect));
    for(vector<vector<string> >::iterator it = results.begin(); it < results.end(); ++it)
    {
        vector<string> row = *it;
        ui->lstPKM->addItem(QString::fromStdString(row.at(1)));
    }
    /*
    //    for(int box = 0; box < 24; box++)
    //    {
    //        for(int slot = 0; slot < 30; slot++)
    //        {
    //            pkm = &(cursavblock->boxes[box].pokemon[slot]);
    //            if(pkm->species != 0)
    //            {
    //                Types::types srchtype = Types::fire;
    //                if((lookuppkmtype(pkm,1) == (int)srchtype) | (lookuppkmtype(pkm,2) == (int)srchtype))
    //                {
    //                    QString speciesname = QString::fromStdString(lookuppkmname(pkm));
    //                    ui->lstPKM->addItem(speciesname);
    //                }
    //            }
    //        }
    //    }
*/
}
frmReport::~frmReport()
{
    sqlite3_close(db);
    delete ui;
}
