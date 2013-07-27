/********************************************************************************
** Form generated from reading UI file 'pkmviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PKMVIEWER_H
#define UI_PKMVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pkmviewer
{
public:
    QFrame *frame;
    QComboBox *cbPKMSpecies;
    QPushButton *btnExportPKMFile;
    QComboBox *cbPKMItem;
    QGraphicsView *pbSprite;
    QSpinBox *sbLevel;
    QPushButton *btnSaveChanges;
    QLabel *lblLevel;
    QLabel *lblItem;
    QSpinBox *sbSpecies;
    QGraphicsView *pbShiny;
    QGraphicsView *pbGender;
    QGraphicsView *pbHeldItem;
    QTabWidget *twPages;
    QWidget *tpBasic;
    QProgressBar *pbTNL;
    QLabel *lblToNextLevel;
    QLabel *lblTNL;
    QLabel *lblTypes;
    QGraphicsView *pbType1;
    QGraphicsView *pbType2;
    QLabel *lblEXP;
    QSpinBox *sbEXP;
    QLineEdit *txtNickname;
    QLabel *lblNickname;
    QCheckBox *cbNicknamed;
    QGroupBox *gbOT;
    QLineEdit *txtOTName;
    QLabel *lblOTName;
    QRadioButton *rbOTMale;
    QRadioButton *rbOTFemale;
    QSpinBox *sbTID;
    QSpinBox *sbSID;
    QLabel *lblTID;
    QLabel *lblSID;
    QWidget *tpStats;
    QWidget *tpMoves;
    QWidget *tpMemo;
    QWidget *tpRibbons;
    QWidget *tpMisc;

    void setupUi(QDialog *pkmviewer)
    {
        if (pkmviewer->objectName().isEmpty())
            pkmviewer->setObjectName(QStringLiteral("pkmviewer"));
        pkmviewer->setWindowModality(Qt::NonModal);
        pkmviewer->resize(479, 325);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pkmviewer->sizePolicy().hasHeightForWidth());
        pkmviewer->setSizePolicy(sizePolicy);
        pkmviewer->setSizeGripEnabled(false);
        frame = new QFrame(pkmviewer);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(330, 0, 141, 321));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        cbPKMSpecies = new QComboBox(frame);
        cbPKMSpecies->setObjectName(QStringLiteral("cbPKMSpecies"));
        cbPKMSpecies->setGeometry(QRect(0, 120, 100, 22));
        btnExportPKMFile = new QPushButton(frame);
        btnExportPKMFile->setObjectName(QStringLiteral("btnExportPKMFile"));
        btnExportPKMFile->setGeometry(QRect(70, 260, 60, 50));
        cbPKMItem = new QComboBox(frame);
        cbPKMItem->setObjectName(QStringLiteral("cbPKMItem"));
        cbPKMItem->setGeometry(QRect(30, 230, 100, 22));
        pbSprite = new QGraphicsView(frame);
        pbSprite->setObjectName(QStringLiteral("pbSprite"));
        pbSprite->setGeometry(QRect(0, 10, 100, 100));
        pbSprite->setStyleSheet(QStringLiteral("background: transparent"));
        pbSprite->setFrameShape(QFrame::NoFrame);
        pbSprite->setFrameShadow(QFrame::Plain);
        sbLevel = new QSpinBox(frame);
        sbLevel->setObjectName(QStringLiteral("sbLevel"));
        sbLevel->setGeometry(QRect(70, 180, 42, 22));
        sbLevel->setMinimum(1);
        sbLevel->setMaximum(100);
        btnSaveChanges = new QPushButton(frame);
        btnSaveChanges->setObjectName(QStringLiteral("btnSaveChanges"));
        btnSaveChanges->setGeometry(QRect(0, 260, 60, 50));
        lblLevel = new QLabel(frame);
        lblLevel->setObjectName(QStringLiteral("lblLevel"));
        lblLevel->setGeometry(QRect(30, 180, 31, 20));
        lblItem = new QLabel(frame);
        lblItem->setObjectName(QStringLiteral("lblItem"));
        lblItem->setGeometry(QRect(-1, 210, 130, 20));
        lblItem->setAlignment(Qt::AlignCenter);
        sbSpecies = new QSpinBox(frame);
        sbSpecies->setObjectName(QStringLiteral("sbSpecies"));
        sbSpecies->setGeometry(QRect(100, 120, 40, 22));
        sbSpecies->setMinimum(1);
        sbSpecies->setMaximum(649);
        pbShiny = new QGraphicsView(frame);
        pbShiny->setObjectName(QStringLiteral("pbShiny"));
        pbShiny->setGeometry(QRect(100, 30, 20, 20));
        pbShiny->setStyleSheet(QStringLiteral("background: transparent"));
        pbShiny->setFrameShape(QFrame::NoFrame);
        pbShiny->setFrameShadow(QFrame::Plain);
        pbGender = new QGraphicsView(frame);
        pbGender->setObjectName(QStringLiteral("pbGender"));
        pbGender->setGeometry(QRect(100, 10, 20, 20));
        pbGender->setStyleSheet(QStringLiteral("background: transparent"));
        pbGender->setFrameShape(QFrame::NoFrame);
        pbGender->setFrameShadow(QFrame::Plain);
        pbHeldItem = new QGraphicsView(frame);
        pbHeldItem->setObjectName(QStringLiteral("pbHeldItem"));
        pbHeldItem->setGeometry(QRect(0, 220, 30, 30));
        pbHeldItem->setStyleSheet(QStringLiteral("background: transparent"));
        pbHeldItem->setFrameShape(QFrame::NoFrame);
        pbHeldItem->setFrameShadow(QFrame::Plain);
        twPages = new QTabWidget(pkmviewer);
        twPages->setObjectName(QStringLiteral("twPages"));
        twPages->setGeometry(QRect(10, 0, 310, 311));
        tpBasic = new QWidget();
        tpBasic->setObjectName(QStringLiteral("tpBasic"));
        pbTNL = new QProgressBar(tpBasic);
        pbTNL->setObjectName(QStringLiteral("pbTNL"));
        pbTNL->setGeometry(QRect(0, 250, 300, 23));
        pbTNL->setValue(24);
        lblToNextLevel = new QLabel(tpBasic);
        lblToNextLevel->setObjectName(QStringLiteral("lblToNextLevel"));
        lblToNextLevel->setGeometry(QRect(150, 210, 80, 20));
        lblTNL = new QLabel(tpBasic);
        lblTNL->setObjectName(QStringLiteral("lblTNL"));
        lblTNL->setGeometry(QRect(240, 210, 50, 20));
        lblTNL->setFrameShape(QFrame::NoFrame);
        lblTypes = new QLabel(tpBasic);
        lblTypes->setObjectName(QStringLiteral("lblTypes"));
        lblTypes->setGeometry(QRect(10, 160, 30, 20));
        pbType1 = new QGraphicsView(tpBasic);
        pbType1->setObjectName(QStringLiteral("pbType1"));
        pbType1->setGeometry(QRect(60, 160, 40, 20));
        pbType1->setStyleSheet(QStringLiteral("background: transparent"));
        pbType1->setFrameShape(QFrame::NoFrame);
        pbType1->setFrameShadow(QFrame::Plain);
        pbType2 = new QGraphicsView(tpBasic);
        pbType2->setObjectName(QStringLiteral("pbType2"));
        pbType2->setGeometry(QRect(100, 160, 40, 20));
        pbType2->setStyleSheet(QStringLiteral("background: transparent"));
        pbType2->setFrameShape(QFrame::NoFrame);
        pbType2->setFrameShadow(QFrame::Plain);
        lblEXP = new QLabel(tpBasic);
        lblEXP->setObjectName(QStringLiteral("lblEXP"));
        lblEXP->setGeometry(QRect(10, 210, 30, 20));
        sbEXP = new QSpinBox(tpBasic);
        sbEXP->setObjectName(QStringLiteral("sbEXP"));
        sbEXP->setGeometry(QRect(50, 210, 80, 22));
        sbEXP->setMaximum(1640000);
        sbEXP->setValue(0);
        txtNickname = new QLineEdit(tpBasic);
        txtNickname->setObjectName(QStringLiteral("txtNickname"));
        txtNickname->setGeometry(QRect(70, 10, 120, 20));
        txtNickname->setMaxLength(10);
        lblNickname = new QLabel(tpBasic);
        lblNickname->setObjectName(QStringLiteral("lblNickname"));
        lblNickname->setGeometry(QRect(20, 10, 45, 20));
        cbNicknamed = new QCheckBox(tpBasic);
        cbNicknamed->setObjectName(QStringLiteral("cbNicknamed"));
        cbNicknamed->setGeometry(QRect(200, 10, 80, 18));
        gbOT = new QGroupBox(tpBasic);
        gbOT->setObjectName(QStringLiteral("gbOT"));
        gbOT->setGeometry(QRect(10, 30, 291, 50));
        txtOTName = new QLineEdit(gbOT);
        txtOTName->setObjectName(QStringLiteral("txtOTName"));
        txtOTName->setGeometry(QRect(60, 20, 120, 20));
        txtOTName->setMaxLength(7);
        lblOTName = new QLabel(gbOT);
        lblOTName->setObjectName(QStringLiteral("lblOTName"));
        lblOTName->setGeometry(QRect(10, 20, 44, 20));
        rbOTMale = new QRadioButton(gbOT);
        rbOTMale->setObjectName(QStringLiteral("rbOTMale"));
        rbOTMale->setGeometry(QRect(200, 10, 60, 18));
        rbOTFemale = new QRadioButton(gbOT);
        rbOTFemale->setObjectName(QStringLiteral("rbOTFemale"));
        rbOTFemale->setGeometry(QRect(200, 30, 60, 18));
        sbTID = new QSpinBox(tpBasic);
        sbTID->setObjectName(QStringLiteral("sbTID"));
        sbTID->setGeometry(QRect(80, 90, 60, 22));
        sbTID->setMaximum(65535);
        sbSID = new QSpinBox(tpBasic);
        sbSID->setObjectName(QStringLiteral("sbSID"));
        sbSID->setGeometry(QRect(210, 90, 60, 22));
        sbSID->setMaximum(65535);
        sbSID->setValue(0);
        lblTID = new QLabel(tpBasic);
        lblTID->setObjectName(QStringLiteral("lblTID"));
        lblTID->setGeometry(QRect(20, 90, 60, 20));
        lblSID = new QLabel(tpBasic);
        lblSID->setObjectName(QStringLiteral("lblSID"));
        lblSID->setGeometry(QRect(150, 90, 60, 20));
        twPages->addTab(tpBasic, QString());
        tpStats = new QWidget();
        tpStats->setObjectName(QStringLiteral("tpStats"));
        twPages->addTab(tpStats, QString());
        tpMoves = new QWidget();
        tpMoves->setObjectName(QStringLiteral("tpMoves"));
        twPages->addTab(tpMoves, QString());
        tpMemo = new QWidget();
        tpMemo->setObjectName(QStringLiteral("tpMemo"));
        twPages->addTab(tpMemo, QString());
        tpRibbons = new QWidget();
        tpRibbons->setObjectName(QStringLiteral("tpRibbons"));
        twPages->addTab(tpRibbons, QString());
        tpMisc = new QWidget();
        tpMisc->setObjectName(QStringLiteral("tpMisc"));
        twPages->addTab(tpMisc, QString());
        QWidget::setTabOrder(twPages, pbSprite);
        QWidget::setTabOrder(pbSprite, cbPKMSpecies);
        QWidget::setTabOrder(cbPKMSpecies, sbLevel);
        QWidget::setTabOrder(sbLevel, cbPKMItem);
        QWidget::setTabOrder(cbPKMItem, btnSaveChanges);
        QWidget::setTabOrder(btnSaveChanges, btnExportPKMFile);

        retranslateUi(pkmviewer);

        twPages->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(pkmviewer);
    } // setupUi

    void retranslateUi(QDialog *pkmviewer)
    {
        pkmviewer->setWindowTitle(QApplication::translate("pkmviewer", "Dialog", 0));
        btnExportPKMFile->setText(QApplication::translate("pkmviewer", "Export\n"
"PKM File", 0));
        btnSaveChanges->setText(QApplication::translate("pkmviewer", "Save\n"
"Changes", 0));
        lblLevel->setText(QApplication::translate("pkmviewer", "Level", 0));
        lblItem->setText(QApplication::translate("pkmviewer", "Held Item", 0));
        pbTNL->setFormat(QApplication::translate("pkmviewer", "%p%", 0));
        lblToNextLevel->setText(QApplication::translate("pkmviewer", "To Next Level:", 0));
        lblTNL->setText(QString());
        lblTypes->setText(QApplication::translate("pkmviewer", "Type", 0));
        lblEXP->setText(QApplication::translate("pkmviewer", "EXP:", 0));
        lblNickname->setText(QApplication::translate("pkmviewer", "Nickname", 0));
        cbNicknamed->setText(QApplication::translate("pkmviewer", "Nicknamed", 0));
        gbOT->setTitle(QApplication::translate("pkmviewer", "OT", 0));
        lblOTName->setText(QApplication::translate("pkmviewer", "OT Name", 0));
        rbOTMale->setText(QApplication::translate("pkmviewer", "Male", 0));
        rbOTFemale->setText(QApplication::translate("pkmviewer", "Female", 0));
        lblTID->setText(QApplication::translate("pkmviewer", "Trainer ID", 0));
        lblSID->setText(QApplication::translate("pkmviewer", "Trainer SID", 0));
        twPages->setTabText(twPages->indexOf(tpBasic), QApplication::translate("pkmviewer", "Basic", 0));
        twPages->setTabText(twPages->indexOf(tpStats), QApplication::translate("pkmviewer", "Stats", 0));
        twPages->setTabText(twPages->indexOf(tpMoves), QApplication::translate("pkmviewer", "Moves", 0));
        twPages->setTabText(twPages->indexOf(tpMemo), QApplication::translate("pkmviewer", "Memo", 0));
        twPages->setTabText(twPages->indexOf(tpRibbons), QApplication::translate("pkmviewer", "Ribbons", 0));
        twPages->setTabText(twPages->indexOf(tpMisc), QApplication::translate("pkmviewer", "Misc", 0));
    } // retranslateUi

};

namespace Ui {
    class pkmviewer: public Ui_pkmviewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PKMVIEWER_H
