/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "3rdparty/qcustomplot/qcustomplot.h"
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect;
    QAction *actionRead;
    QAction *actionSave;
    QAction *actionSet;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabStabilization;
    QGridLayout *gridLayout;
    QLabel *labelYaw;
    QSpacerItem *verticalSpacer;
    QSpinBox *spinYaw_D;
    QSpinBox *spinYaw_P;
    QLabel *labelP;
    QLabel *labelI;
    QSpinBox *spinYaw_I;
    QLabel *labelD;
    QLabel *labelRoll;
    QLabel *labelPitch;
    QSpinBox *spinRoll_P;
    QSpinBox *spinRoll_I;
    QSpinBox *spinRoll_D;
    QSpinBox *spinPitch_P;
    QSpinBox *spinPitch_I;
    QSpinBox *spinPitch_D;
    QWidget *tabOutputs;
    QGridLayout *gridLayout_2;
    QLabel *labelCommand;
    QLabel *labelYaw_2;
    QComboBox *comboRollDeadTime;
    QComboBox *comboRollCommand;
    QComboBox *comboPitchCommand;
    QComboBox *comboPitchDeadTime;
    QCheckBox *checkPitchRev;
    QSpinBox *spinPitchNumPoles;
    QSpinBox *spinPitchPower;
    QLabel *labelPitch_2;
    QLabel *labelNumPoles;
    QCheckBox *checkRollRev;
    QSpinBox *spinRollNumPoles;
    QCheckBox *checkYawRev;
    QSpinBox *spinRollPower;
    QSpinBox *spinYawPower;
    QComboBox *comboYawCommand;
    QLabel *labelPower;
    QSpinBox *spinYawNumPoles;
    QLabel *labelDeadTime;
    QLabel *labelRoll_2;
    QComboBox *comboYawDeadTime;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *checkPitchTHIEnable;
    QCheckBox *checkRollTHIEnable;
    QCheckBox *checkYawTHIEnable;
    QWidget *tabInputs;
    QGridLayout *gridLayout_3;
    QLabel *labelYaw_3;
    QLabel *labelRoll_3;
    QSpacerItem *verticalSpacer_3;
    QLabel *labelPitch_3;
    QLabel *labelInputMeas;
    QLabel *labelInputMax;
    QLabel *labelInputNeutral;
    QLabel *labelInputMin;
    QLabel *labelInputChannel;
    QLabel *labelInputYaw;
    QSpinBox *spinInputMaxYaw;
    QSpinBox *spinInputMidYaw;
    QSpinBox *spinInputMinYaw;
    QComboBox *comboInputChannelYaw;
    QComboBox *comboInputChannelPitch;
    QSpinBox *spinInputMinPitch;
    QSpinBox *spinInputMidPitch;
    QSpinBox *spinInputMaxPitch;
    QLabel *labelInputPitch;
    QComboBox *comboInputChannelRoll;
    QSpinBox *spinInputMinRoll;
    QSpinBox *spinInputMidRoll;
    QSpinBox *spinInputMaxRoll;
    QLabel *labelInputRoll;
    QWidget *tabModes;
    QGridLayout *gridLayout_4;
    QLabel *labelOffset;
    QSpinBox *spinInputOffsetYaw;
    QSpinBox *spinInputSpeedYaw;
    QSpinBox *spinInputMaxAngleYaw;
    QSpinBox *spinInputMinAngleYaw;
    QSpacerItem *verticalSpacer_4;
    QLabel *labelYaw_4;
    QLabel *labelPitch_4;
    QLabel *labelRoll_4;
    QLabel *labelMaxAngle;
    QLabel *labelMinAngle;
    QLabel *labelMode;
    QComboBox *comboInputModeYaw;
    QLabel *labelSpeed;
    QComboBox *comboInputModeRoll;
    QSpinBox *spinInputMinAngleRoll;
    QSpinBox *spinInputMaxAngleRoll;
    QSpinBox *spinInputSpeedRoll;
    QComboBox *comboInputModePitch;
    QSpinBox *spinInputMinAnglePitch;
    QSpinBox *spinInputMaxAnglePitch;
    QSpinBox *spinInputOffsetRoll;
    QSpinBox *spinInputSpeedPitch;
    QSpinBox *spinInputOffsetPitch;
    QLabel *labelOffsetMeas;
    QLabel *labelOffsetPitch;
    QLabel *labelOffsetRoll;
    QLabel *labelOffsetYaw;
    QWidget *tabSensors;
    QGridLayout *gridLayout_5;
    QGroupBox *groupSensor1;
    QGridLayout *gridLayout_6;
    QComboBox *comboSensor1AxisTOP;
    QComboBox *comboSensor1AxisRIGHT;
    QLabel *labelSensor1AxisTop;
    QLabel *labelSensor1AxisRight;
    QPushButton *pushSensor1AccCalibrate;
    QPushButton *pushSensor1GyroCalibrate;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupCFilter;
    QFormLayout *formLayout;
    QLabel *labelKp;
    QLabel *labelKi;
    QSpinBox *spinCFKp;
    QSpinBox *spinCFKi;
    QWidget *tabData;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkDataX;
    QCheckBox *checkDataY;
    QCheckBox *checkDataZ;
    QComboBox *comboDataSource;
    QCustomPlot *plotData;
    QWidget *tab3D;
    QVBoxLayout *verticalLayout_3;
    GLWidget *widget;
    QWidget *tabSpectrum;
    QVBoxLayout *verticalLayout_4;
    QComboBox *comboSpectrumSource;
    QCustomPlot *plotSpectrum;
    QMenuBar *menuBar;
    QMenu *menuBoard;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(560, 360);
        MainWindow->setMinimumSize(QSize(560, 360));
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        actionConnect->setEnabled(false);
        actionRead = new QAction(MainWindow);
        actionRead->setObjectName(QStringLiteral("actionRead"));
        actionRead->setEnabled(false);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave->setEnabled(false);
        actionSet = new QAction(MainWindow);
        actionSet->setObjectName(QStringLiteral("actionSet"));
        actionSet->setEnabled(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabStabilization = new QWidget();
        tabStabilization->setObjectName(QStringLiteral("tabStabilization"));
        gridLayout = new QGridLayout(tabStabilization);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelYaw = new QLabel(tabStabilization);
        labelYaw->setObjectName(QStringLiteral("labelYaw"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelYaw->sizePolicy().hasHeightForWidth());
        labelYaw->setSizePolicy(sizePolicy);
        labelYaw->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(labelYaw, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(10, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        spinYaw_D = new QSpinBox(tabStabilization);
        spinYaw_D->setObjectName(QStringLiteral("spinYaw_D"));
        spinYaw_D->setAccelerated(true);
        spinYaw_D->setMaximum(255);

        gridLayout->addWidget(spinYaw_D, 4, 3, 1, 1);

        spinYaw_P = new QSpinBox(tabStabilization);
        spinYaw_P->setObjectName(QStringLiteral("spinYaw_P"));
        spinYaw_P->setAccelerated(true);
        spinYaw_P->setMaximum(255);

        gridLayout->addWidget(spinYaw_P, 4, 1, 1, 1);

        labelP = new QLabel(tabStabilization);
        labelP->setObjectName(QStringLiteral("labelP"));
        labelP->setFrameShape(QFrame::NoFrame);
        labelP->setTextFormat(Qt::PlainText);
        labelP->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelP, 0, 1, 1, 1);

        labelI = new QLabel(tabStabilization);
        labelI->setObjectName(QStringLiteral("labelI"));
        labelI->setTextFormat(Qt::PlainText);
        labelI->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelI, 0, 2, 1, 1);

        spinYaw_I = new QSpinBox(tabStabilization);
        spinYaw_I->setObjectName(QStringLiteral("spinYaw_I"));
        spinYaw_I->setAccelerated(true);
        spinYaw_I->setMaximum(255);

        gridLayout->addWidget(spinYaw_I, 4, 2, 1, 1);

        labelD = new QLabel(tabStabilization);
        labelD->setObjectName(QStringLiteral("labelD"));
        labelD->setTextFormat(Qt::PlainText);
        labelD->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelD, 0, 3, 1, 1);

        labelRoll = new QLabel(tabStabilization);
        labelRoll->setObjectName(QStringLiteral("labelRoll"));
        sizePolicy.setHeightForWidth(labelRoll->sizePolicy().hasHeightForWidth());
        labelRoll->setSizePolicy(sizePolicy);
        labelRoll->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(labelRoll, 3, 0, 1, 1);

        labelPitch = new QLabel(tabStabilization);
        labelPitch->setObjectName(QStringLiteral("labelPitch"));
        sizePolicy.setHeightForWidth(labelPitch->sizePolicy().hasHeightForWidth());
        labelPitch->setSizePolicy(sizePolicy);
        labelPitch->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(labelPitch, 2, 0, 1, 1);

        spinRoll_P = new QSpinBox(tabStabilization);
        spinRoll_P->setObjectName(QStringLiteral("spinRoll_P"));
        spinRoll_P->setAccelerated(true);
        spinRoll_P->setMaximum(255);

        gridLayout->addWidget(spinRoll_P, 3, 1, 1, 1);

        spinRoll_I = new QSpinBox(tabStabilization);
        spinRoll_I->setObjectName(QStringLiteral("spinRoll_I"));
        spinRoll_I->setAccelerated(true);
        spinRoll_I->setMaximum(255);

        gridLayout->addWidget(spinRoll_I, 3, 2, 1, 1);

        spinRoll_D = new QSpinBox(tabStabilization);
        spinRoll_D->setObjectName(QStringLiteral("spinRoll_D"));
        spinRoll_D->setAccelerated(true);
        spinRoll_D->setMaximum(255);

        gridLayout->addWidget(spinRoll_D, 3, 3, 1, 1);

        spinPitch_P = new QSpinBox(tabStabilization);
        spinPitch_P->setObjectName(QStringLiteral("spinPitch_P"));
        spinPitch_P->setAccelerated(true);
        spinPitch_P->setMaximum(255);

        gridLayout->addWidget(spinPitch_P, 2, 1, 1, 1);

        spinPitch_I = new QSpinBox(tabStabilization);
        spinPitch_I->setObjectName(QStringLiteral("spinPitch_I"));
        spinPitch_I->setAccelerated(true);
        spinPitch_I->setMaximum(255);

        gridLayout->addWidget(spinPitch_I, 2, 2, 1, 1);

        spinPitch_D = new QSpinBox(tabStabilization);
        spinPitch_D->setObjectName(QStringLiteral("spinPitch_D"));
        spinPitch_D->setAccelerated(true);
        spinPitch_D->setMaximum(255);

        gridLayout->addWidget(spinPitch_D, 2, 3, 1, 1);

        tabWidget->addTab(tabStabilization, QString());
        tabOutputs = new QWidget();
        tabOutputs->setObjectName(QStringLiteral("tabOutputs"));
        gridLayout_2 = new QGridLayout(tabOutputs);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelCommand = new QLabel(tabOutputs);
        labelCommand->setObjectName(QStringLiteral("labelCommand"));
        labelCommand->setTextFormat(Qt::PlainText);
        labelCommand->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelCommand, 1, 6, 1, 1);

        labelYaw_2 = new QLabel(tabOutputs);
        labelYaw_2->setObjectName(QStringLiteral("labelYaw_2"));
        sizePolicy.setHeightForWidth(labelYaw_2->sizePolicy().hasHeightForWidth());
        labelYaw_2->setSizePolicy(sizePolicy);
        labelYaw_2->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelYaw_2, 4, 0, 1, 1);

        comboRollDeadTime = new QComboBox(tabOutputs);
        comboRollDeadTime->setObjectName(QStringLiteral("comboRollDeadTime"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboRollDeadTime->sizePolicy().hasHeightForWidth());
        comboRollDeadTime->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(comboRollDeadTime, 3, 7, 1, 1);

        comboRollCommand = new QComboBox(tabOutputs);
        comboRollCommand->setObjectName(QStringLiteral("comboRollCommand"));
        sizePolicy1.setHeightForWidth(comboRollCommand->sizePolicy().hasHeightForWidth());
        comboRollCommand->setSizePolicy(sizePolicy1);
        comboRollCommand->setMaxVisibleItems(4);
        comboRollCommand->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout_2->addWidget(comboRollCommand, 3, 6, 1, 1);

        comboPitchCommand = new QComboBox(tabOutputs);
        comboPitchCommand->setObjectName(QStringLiteral("comboPitchCommand"));
        sizePolicy1.setHeightForWidth(comboPitchCommand->sizePolicy().hasHeightForWidth());
        comboPitchCommand->setSizePolicy(sizePolicy1);
        comboPitchCommand->setMaxVisibleItems(4);

        gridLayout_2->addWidget(comboPitchCommand, 2, 6, 1, 1);

        comboPitchDeadTime = new QComboBox(tabOutputs);
        comboPitchDeadTime->setObjectName(QStringLiteral("comboPitchDeadTime"));
        sizePolicy1.setHeightForWidth(comboPitchDeadTime->sizePolicy().hasHeightForWidth());
        comboPitchDeadTime->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(comboPitchDeadTime, 2, 7, 1, 1);

        checkPitchRev = new QCheckBox(tabOutputs);
        checkPitchRev->setObjectName(QStringLiteral("checkPitchRev"));
        sizePolicy.setHeightForWidth(checkPitchRev->sizePolicy().hasHeightForWidth());
        checkPitchRev->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(checkPitchRev, 2, 4, 1, 1);

        spinPitchNumPoles = new QSpinBox(tabOutputs);
        spinPitchNumPoles->setObjectName(QStringLiteral("spinPitchNumPoles"));
        spinPitchNumPoles->setAccelerated(false);
        spinPitchNumPoles->setMinimum(12);
        spinPitchNumPoles->setMaximum(48);
        spinPitchNumPoles->setSingleStep(2);
        spinPitchNumPoles->setValue(14);

        gridLayout_2->addWidget(spinPitchNumPoles, 2, 3, 1, 1);

        spinPitchPower = new QSpinBox(tabOutputs);
        spinPitchPower->setObjectName(QStringLiteral("spinPitchPower"));
        spinPitchPower->setAccelerated(true);
        spinPitchPower->setMaximum(100);

        gridLayout_2->addWidget(spinPitchPower, 2, 1, 1, 1);

        labelPitch_2 = new QLabel(tabOutputs);
        labelPitch_2->setObjectName(QStringLiteral("labelPitch_2"));
        sizePolicy.setHeightForWidth(labelPitch_2->sizePolicy().hasHeightForWidth());
        labelPitch_2->setSizePolicy(sizePolicy);
        labelPitch_2->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelPitch_2, 2, 0, 1, 1);

        labelNumPoles = new QLabel(tabOutputs);
        labelNumPoles->setObjectName(QStringLiteral("labelNumPoles"));
        labelNumPoles->setTextFormat(Qt::PlainText);
        labelNumPoles->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelNumPoles, 1, 3, 1, 1);

        checkRollRev = new QCheckBox(tabOutputs);
        checkRollRev->setObjectName(QStringLiteral("checkRollRev"));
        sizePolicy.setHeightForWidth(checkRollRev->sizePolicy().hasHeightForWidth());
        checkRollRev->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(checkRollRev, 3, 4, 1, 1);

        spinRollNumPoles = new QSpinBox(tabOutputs);
        spinRollNumPoles->setObjectName(QStringLiteral("spinRollNumPoles"));
        spinRollNumPoles->setMinimum(12);
        spinRollNumPoles->setMaximum(48);
        spinRollNumPoles->setSingleStep(2);
        spinRollNumPoles->setValue(14);

        gridLayout_2->addWidget(spinRollNumPoles, 3, 3, 1, 1);

        checkYawRev = new QCheckBox(tabOutputs);
        checkYawRev->setObjectName(QStringLiteral("checkYawRev"));
        sizePolicy.setHeightForWidth(checkYawRev->sizePolicy().hasHeightForWidth());
        checkYawRev->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(checkYawRev, 4, 4, 1, 1);

        spinRollPower = new QSpinBox(tabOutputs);
        spinRollPower->setObjectName(QStringLiteral("spinRollPower"));
        spinRollPower->setAccelerated(true);
        spinRollPower->setMaximum(100);

        gridLayout_2->addWidget(spinRollPower, 3, 1, 1, 1);

        spinYawPower = new QSpinBox(tabOutputs);
        spinYawPower->setObjectName(QStringLiteral("spinYawPower"));
        spinYawPower->setAccelerated(true);
        spinYawPower->setMaximum(100);

        gridLayout_2->addWidget(spinYawPower, 4, 1, 1, 1);

        comboYawCommand = new QComboBox(tabOutputs);
        comboYawCommand->setObjectName(QStringLiteral("comboYawCommand"));
        sizePolicy1.setHeightForWidth(comboYawCommand->sizePolicy().hasHeightForWidth());
        comboYawCommand->setSizePolicy(sizePolicy1);
        comboYawCommand->setMaxVisibleItems(4);

        gridLayout_2->addWidget(comboYawCommand, 4, 6, 1, 1);

        labelPower = new QLabel(tabOutputs);
        labelPower->setObjectName(QStringLiteral("labelPower"));
        labelPower->setTextFormat(Qt::PlainText);
        labelPower->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelPower, 1, 1, 1, 1);

        spinYawNumPoles = new QSpinBox(tabOutputs);
        spinYawNumPoles->setObjectName(QStringLiteral("spinYawNumPoles"));
        spinYawNumPoles->setMinimum(12);
        spinYawNumPoles->setMaximum(48);
        spinYawNumPoles->setSingleStep(2);
        spinYawNumPoles->setValue(14);

        gridLayout_2->addWidget(spinYawNumPoles, 4, 3, 1, 1);

        labelDeadTime = new QLabel(tabOutputs);
        labelDeadTime->setObjectName(QStringLiteral("labelDeadTime"));
        labelDeadTime->setTextFormat(Qt::PlainText);
        labelDeadTime->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelDeadTime, 1, 7, 1, 1);

        labelRoll_2 = new QLabel(tabOutputs);
        labelRoll_2->setObjectName(QStringLiteral("labelRoll_2"));
        sizePolicy.setHeightForWidth(labelRoll_2->sizePolicy().hasHeightForWidth());
        labelRoll_2->setSizePolicy(sizePolicy);
        labelRoll_2->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(labelRoll_2, 3, 0, 1, 1);

        comboYawDeadTime = new QComboBox(tabOutputs);
        comboYawDeadTime->setObjectName(QStringLiteral("comboYawDeadTime"));
        sizePolicy1.setHeightForWidth(comboYawDeadTime->sizePolicy().hasHeightForWidth());
        comboYawDeadTime->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(comboYawDeadTime, 4, 7, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 5, 0, 1, 1);

        checkPitchTHIEnable = new QCheckBox(tabOutputs);
        checkPitchTHIEnable->setObjectName(QStringLiteral("checkPitchTHIEnable"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(checkPitchTHIEnable->sizePolicy().hasHeightForWidth());
        checkPitchTHIEnable->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(checkPitchTHIEnable, 2, 5, 1, 1);

        checkRollTHIEnable = new QCheckBox(tabOutputs);
        checkRollTHIEnable->setObjectName(QStringLiteral("checkRollTHIEnable"));
        sizePolicy2.setHeightForWidth(checkRollTHIEnable->sizePolicy().hasHeightForWidth());
        checkRollTHIEnable->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(checkRollTHIEnable, 3, 5, 1, 1);

        checkYawTHIEnable = new QCheckBox(tabOutputs);
        checkYawTHIEnable->setObjectName(QStringLiteral("checkYawTHIEnable"));
        sizePolicy2.setHeightForWidth(checkYawTHIEnable->sizePolicy().hasHeightForWidth());
        checkYawTHIEnable->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(checkYawTHIEnable, 4, 5, 1, 1);

        tabWidget->addTab(tabOutputs, QString());
        tabInputs = new QWidget();
        tabInputs->setObjectName(QStringLiteral("tabInputs"));
        gridLayout_3 = new QGridLayout(tabInputs);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        labelYaw_3 = new QLabel(tabInputs);
        labelYaw_3->setObjectName(QStringLiteral("labelYaw_3"));
        sizePolicy.setHeightForWidth(labelYaw_3->sizePolicy().hasHeightForWidth());
        labelYaw_3->setSizePolicy(sizePolicy);
        labelYaw_3->setTextFormat(Qt::PlainText);

        gridLayout_3->addWidget(labelYaw_3, 4, 0, 1, 1);

        labelRoll_3 = new QLabel(tabInputs);
        labelRoll_3->setObjectName(QStringLiteral("labelRoll_3"));
        sizePolicy.setHeightForWidth(labelRoll_3->sizePolicy().hasHeightForWidth());
        labelRoll_3->setSizePolicy(sizePolicy);
        labelRoll_3->setTextFormat(Qt::PlainText);

        gridLayout_3->addWidget(labelRoll_3, 3, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 5, 0, 1, 1);

        labelPitch_3 = new QLabel(tabInputs);
        labelPitch_3->setObjectName(QStringLiteral("labelPitch_3"));
        sizePolicy.setHeightForWidth(labelPitch_3->sizePolicy().hasHeightForWidth());
        labelPitch_3->setSizePolicy(sizePolicy);
        labelPitch_3->setTextFormat(Qt::PlainText);

        gridLayout_3->addWidget(labelPitch_3, 2, 0, 1, 1);

        labelInputMeas = new QLabel(tabInputs);
        labelInputMeas->setObjectName(QStringLiteral("labelInputMeas"));
        labelInputMeas->setTextFormat(Qt::PlainText);
        labelInputMeas->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelInputMeas, 1, 6, 1, 1);

        labelInputMax = new QLabel(tabInputs);
        labelInputMax->setObjectName(QStringLiteral("labelInputMax"));
        labelInputMax->setTextFormat(Qt::PlainText);
        labelInputMax->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelInputMax, 1, 5, 1, 1);

        labelInputNeutral = new QLabel(tabInputs);
        labelInputNeutral->setObjectName(QStringLiteral("labelInputNeutral"));
        labelInputNeutral->setTextFormat(Qt::PlainText);
        labelInputNeutral->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelInputNeutral, 1, 4, 1, 1);

        labelInputMin = new QLabel(tabInputs);
        labelInputMin->setObjectName(QStringLiteral("labelInputMin"));
        labelInputMin->setTextFormat(Qt::PlainText);
        labelInputMin->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelInputMin, 1, 3, 1, 1);

        labelInputChannel = new QLabel(tabInputs);
        labelInputChannel->setObjectName(QStringLiteral("labelInputChannel"));
        labelInputChannel->setTextFormat(Qt::PlainText);
        labelInputChannel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelInputChannel, 1, 2, 1, 1);

        labelInputYaw = new QLabel(tabInputs);
        labelInputYaw->setObjectName(QStringLiteral("labelInputYaw"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelInputYaw->sizePolicy().hasHeightForWidth());
        labelInputYaw->setSizePolicy(sizePolicy3);
        labelInputYaw->setTextFormat(Qt::PlainText);

        gridLayout_3->addWidget(labelInputYaw, 4, 6, 1, 1);

        spinInputMaxYaw = new QSpinBox(tabInputs);
        spinInputMaxYaw->setObjectName(QStringLiteral("spinInputMaxYaw"));
        spinInputMaxYaw->setAccelerated(true);
        spinInputMaxYaw->setMaximum(4095);

        gridLayout_3->addWidget(spinInputMaxYaw, 4, 5, 1, 1);

        spinInputMidYaw = new QSpinBox(tabInputs);
        spinInputMidYaw->setObjectName(QStringLiteral("spinInputMidYaw"));
        spinInputMidYaw->setAccelerated(true);
        spinInputMidYaw->setMaximum(4095);

        gridLayout_3->addWidget(spinInputMidYaw, 4, 4, 1, 1);

        spinInputMinYaw = new QSpinBox(tabInputs);
        spinInputMinYaw->setObjectName(QStringLiteral("spinInputMinYaw"));
        spinInputMinYaw->setAccelerated(true);
        spinInputMinYaw->setMaximum(4095);

        gridLayout_3->addWidget(spinInputMinYaw, 4, 3, 1, 1);

        comboInputChannelYaw = new QComboBox(tabInputs);
        comboInputChannelYaw->setObjectName(QStringLiteral("comboInputChannelYaw"));
        sizePolicy1.setHeightForWidth(comboInputChannelYaw->sizePolicy().hasHeightForWidth());
        comboInputChannelYaw->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(comboInputChannelYaw, 4, 2, 1, 1);

        comboInputChannelPitch = new QComboBox(tabInputs);
        comboInputChannelPitch->setObjectName(QStringLiteral("comboInputChannelPitch"));
        sizePolicy1.setHeightForWidth(comboInputChannelPitch->sizePolicy().hasHeightForWidth());
        comboInputChannelPitch->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(comboInputChannelPitch, 2, 2, 1, 1);

        spinInputMinPitch = new QSpinBox(tabInputs);
        spinInputMinPitch->setObjectName(QStringLiteral("spinInputMinPitch"));
        spinInputMinPitch->setAccelerated(true);
        spinInputMinPitch->setMaximum(4095);

        gridLayout_3->addWidget(spinInputMinPitch, 2, 3, 1, 1);

        spinInputMidPitch = new QSpinBox(tabInputs);
        spinInputMidPitch->setObjectName(QStringLiteral("spinInputMidPitch"));
        spinInputMidPitch->setAccelerated(true);
        spinInputMidPitch->setMaximum(4095);

        gridLayout_3->addWidget(spinInputMidPitch, 2, 4, 1, 1);

        spinInputMaxPitch = new QSpinBox(tabInputs);
        spinInputMaxPitch->setObjectName(QStringLiteral("spinInputMaxPitch"));
        spinInputMaxPitch->setAccelerated(true);
        spinInputMaxPitch->setMaximum(4095);

        gridLayout_3->addWidget(spinInputMaxPitch, 2, 5, 1, 1);

        labelInputPitch = new QLabel(tabInputs);
        labelInputPitch->setObjectName(QStringLiteral("labelInputPitch"));
        sizePolicy3.setHeightForWidth(labelInputPitch->sizePolicy().hasHeightForWidth());
        labelInputPitch->setSizePolicy(sizePolicy3);
        labelInputPitch->setTextFormat(Qt::PlainText);

        gridLayout_3->addWidget(labelInputPitch, 2, 6, 1, 1);

        comboInputChannelRoll = new QComboBox(tabInputs);
        comboInputChannelRoll->setObjectName(QStringLiteral("comboInputChannelRoll"));
        sizePolicy1.setHeightForWidth(comboInputChannelRoll->sizePolicy().hasHeightForWidth());
        comboInputChannelRoll->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(comboInputChannelRoll, 3, 2, 1, 1);

        spinInputMinRoll = new QSpinBox(tabInputs);
        spinInputMinRoll->setObjectName(QStringLiteral("spinInputMinRoll"));
        spinInputMinRoll->setAccelerated(true);
        spinInputMinRoll->setMaximum(4095);

        gridLayout_3->addWidget(spinInputMinRoll, 3, 3, 1, 1);

        spinInputMidRoll = new QSpinBox(tabInputs);
        spinInputMidRoll->setObjectName(QStringLiteral("spinInputMidRoll"));
        spinInputMidRoll->setAccelerated(true);
        spinInputMidRoll->setMaximum(4095);

        gridLayout_3->addWidget(spinInputMidRoll, 3, 4, 1, 1);

        spinInputMaxRoll = new QSpinBox(tabInputs);
        spinInputMaxRoll->setObjectName(QStringLiteral("spinInputMaxRoll"));
        spinInputMaxRoll->setAccelerated(true);
        spinInputMaxRoll->setMaximum(4095);

        gridLayout_3->addWidget(spinInputMaxRoll, 3, 5, 1, 1);

        labelInputRoll = new QLabel(tabInputs);
        labelInputRoll->setObjectName(QStringLiteral("labelInputRoll"));
        sizePolicy3.setHeightForWidth(labelInputRoll->sizePolicy().hasHeightForWidth());
        labelInputRoll->setSizePolicy(sizePolicy3);
        labelInputRoll->setTextFormat(Qt::PlainText);

        gridLayout_3->addWidget(labelInputRoll, 3, 6, 1, 1);

        tabWidget->addTab(tabInputs, QString());
        tabModes = new QWidget();
        tabModes->setObjectName(QStringLiteral("tabModes"));
        gridLayout_4 = new QGridLayout(tabModes);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        labelOffset = new QLabel(tabModes);
        labelOffset->setObjectName(QStringLiteral("labelOffset"));
        labelOffset->setTextFormat(Qt::PlainText);
        labelOffset->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(labelOffset, 1, 5, 1, 1);

        spinInputOffsetYaw = new QSpinBox(tabModes);
        spinInputOffsetYaw->setObjectName(QStringLiteral("spinInputOffsetYaw"));
        spinInputOffsetYaw->setAccelerated(true);
        spinInputOffsetYaw->setMinimum(-180);
        spinInputOffsetYaw->setMaximum(180);

        gridLayout_4->addWidget(spinInputOffsetYaw, 5, 5, 1, 1);

        spinInputSpeedYaw = new QSpinBox(tabModes);
        spinInputSpeedYaw->setObjectName(QStringLiteral("spinInputSpeedYaw"));
        spinInputSpeedYaw->setAccelerated(true);
        spinInputSpeedYaw->setMaximum(180);

        gridLayout_4->addWidget(spinInputSpeedYaw, 5, 4, 1, 1);

        spinInputMaxAngleYaw = new QSpinBox(tabModes);
        spinInputMaxAngleYaw->setObjectName(QStringLiteral("spinInputMaxAngleYaw"));
        spinInputMaxAngleYaw->setAccelerated(true);
        spinInputMaxAngleYaw->setMinimum(-180);
        spinInputMaxAngleYaw->setMaximum(180);

        gridLayout_4->addWidget(spinInputMaxAngleYaw, 5, 3, 1, 1);

        spinInputMinAngleYaw = new QSpinBox(tabModes);
        spinInputMinAngleYaw->setObjectName(QStringLiteral("spinInputMinAngleYaw"));
        spinInputMinAngleYaw->setAccelerated(true);
        spinInputMinAngleYaw->setMinimum(-180);
        spinInputMinAngleYaw->setMaximum(180);

        gridLayout_4->addWidget(spinInputMinAngleYaw, 5, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 6, 0, 1, 1);

        labelYaw_4 = new QLabel(tabModes);
        labelYaw_4->setObjectName(QStringLiteral("labelYaw_4"));
        sizePolicy.setHeightForWidth(labelYaw_4->sizePolicy().hasHeightForWidth());
        labelYaw_4->setSizePolicy(sizePolicy);
        labelYaw_4->setTextFormat(Qt::PlainText);

        gridLayout_4->addWidget(labelYaw_4, 5, 0, 1, 1);

        labelPitch_4 = new QLabel(tabModes);
        labelPitch_4->setObjectName(QStringLiteral("labelPitch_4"));
        sizePolicy.setHeightForWidth(labelPitch_4->sizePolicy().hasHeightForWidth());
        labelPitch_4->setSizePolicy(sizePolicy);
        labelPitch_4->setTextFormat(Qt::PlainText);

        gridLayout_4->addWidget(labelPitch_4, 2, 0, 1, 1);

        labelRoll_4 = new QLabel(tabModes);
        labelRoll_4->setObjectName(QStringLiteral("labelRoll_4"));
        sizePolicy.setHeightForWidth(labelRoll_4->sizePolicy().hasHeightForWidth());
        labelRoll_4->setSizePolicy(sizePolicy);
        labelRoll_4->setTextFormat(Qt::PlainText);

        gridLayout_4->addWidget(labelRoll_4, 4, 0, 1, 1);

        labelMaxAngle = new QLabel(tabModes);
        labelMaxAngle->setObjectName(QStringLiteral("labelMaxAngle"));
        labelMaxAngle->setTextFormat(Qt::PlainText);
        labelMaxAngle->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(labelMaxAngle, 1, 3, 1, 1);

        labelMinAngle = new QLabel(tabModes);
        labelMinAngle->setObjectName(QStringLiteral("labelMinAngle"));
        labelMinAngle->setTextFormat(Qt::PlainText);
        labelMinAngle->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(labelMinAngle, 1, 2, 1, 1);

        labelMode = new QLabel(tabModes);
        labelMode->setObjectName(QStringLiteral("labelMode"));
        labelMode->setTextFormat(Qt::PlainText);
        labelMode->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(labelMode, 1, 1, 1, 1);

        comboInputModeYaw = new QComboBox(tabModes);
        comboInputModeYaw->setObjectName(QStringLiteral("comboInputModeYaw"));
        sizePolicy1.setHeightForWidth(comboInputModeYaw->sizePolicy().hasHeightForWidth());
        comboInputModeYaw->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(comboInputModeYaw, 5, 1, 1, 1);

        labelSpeed = new QLabel(tabModes);
        labelSpeed->setObjectName(QStringLiteral("labelSpeed"));
        labelSpeed->setTextFormat(Qt::PlainText);
        labelSpeed->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(labelSpeed, 1, 4, 1, 1);

        comboInputModeRoll = new QComboBox(tabModes);
        comboInputModeRoll->setObjectName(QStringLiteral("comboInputModeRoll"));
        sizePolicy1.setHeightForWidth(comboInputModeRoll->sizePolicy().hasHeightForWidth());
        comboInputModeRoll->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(comboInputModeRoll, 4, 1, 1, 1);

        spinInputMinAngleRoll = new QSpinBox(tabModes);
        spinInputMinAngleRoll->setObjectName(QStringLiteral("spinInputMinAngleRoll"));
        spinInputMinAngleRoll->setAccelerated(true);
        spinInputMinAngleRoll->setMinimum(-90);
        spinInputMinAngleRoll->setMaximum(90);

        gridLayout_4->addWidget(spinInputMinAngleRoll, 4, 2, 1, 1);

        spinInputMaxAngleRoll = new QSpinBox(tabModes);
        spinInputMaxAngleRoll->setObjectName(QStringLiteral("spinInputMaxAngleRoll"));
        spinInputMaxAngleRoll->setAccelerated(true);
        spinInputMaxAngleRoll->setMinimum(-90);
        spinInputMaxAngleRoll->setMaximum(90);

        gridLayout_4->addWidget(spinInputMaxAngleRoll, 4, 3, 1, 1);

        spinInputSpeedRoll = new QSpinBox(tabModes);
        spinInputSpeedRoll->setObjectName(QStringLiteral("spinInputSpeedRoll"));
        spinInputSpeedRoll->setAccelerated(true);
        spinInputSpeedRoll->setMaximum(180);

        gridLayout_4->addWidget(spinInputSpeedRoll, 4, 4, 1, 1);

        comboInputModePitch = new QComboBox(tabModes);
        comboInputModePitch->setObjectName(QStringLiteral("comboInputModePitch"));
        sizePolicy1.setHeightForWidth(comboInputModePitch->sizePolicy().hasHeightForWidth());
        comboInputModePitch->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(comboInputModePitch, 2, 1, 1, 1);

        spinInputMinAnglePitch = new QSpinBox(tabModes);
        spinInputMinAnglePitch->setObjectName(QStringLiteral("spinInputMinAnglePitch"));
        spinInputMinAnglePitch->setAccelerated(true);
        spinInputMinAnglePitch->setMinimum(-180);
        spinInputMinAnglePitch->setMaximum(180);

        gridLayout_4->addWidget(spinInputMinAnglePitch, 2, 2, 1, 1);

        spinInputMaxAnglePitch = new QSpinBox(tabModes);
        spinInputMaxAnglePitch->setObjectName(QStringLiteral("spinInputMaxAnglePitch"));
        spinInputMaxAnglePitch->setAccelerated(true);
        spinInputMaxAnglePitch->setMinimum(-180);
        spinInputMaxAnglePitch->setMaximum(180);

        gridLayout_4->addWidget(spinInputMaxAnglePitch, 2, 3, 1, 1);

        spinInputOffsetRoll = new QSpinBox(tabModes);
        spinInputOffsetRoll->setObjectName(QStringLiteral("spinInputOffsetRoll"));
        spinInputOffsetRoll->setAccelerated(true);
        spinInputOffsetRoll->setMinimum(-180);
        spinInputOffsetRoll->setMaximum(180);

        gridLayout_4->addWidget(spinInputOffsetRoll, 4, 5, 1, 1);

        spinInputSpeedPitch = new QSpinBox(tabModes);
        spinInputSpeedPitch->setObjectName(QStringLiteral("spinInputSpeedPitch"));
        spinInputSpeedPitch->setAccelerated(true);
        spinInputSpeedPitch->setMaximum(180);

        gridLayout_4->addWidget(spinInputSpeedPitch, 2, 4, 1, 1);

        spinInputOffsetPitch = new QSpinBox(tabModes);
        spinInputOffsetPitch->setObjectName(QStringLiteral("spinInputOffsetPitch"));
        spinInputOffsetPitch->setAccelerated(true);
        spinInputOffsetPitch->setMinimum(-180);
        spinInputOffsetPitch->setMaximum(180);

        gridLayout_4->addWidget(spinInputOffsetPitch, 2, 5, 1, 1);

        labelOffsetMeas = new QLabel(tabModes);
        labelOffsetMeas->setObjectName(QStringLiteral("labelOffsetMeas"));
        labelOffsetMeas->setTextFormat(Qt::PlainText);

        gridLayout_4->addWidget(labelOffsetMeas, 1, 6, 1, 1);

        labelOffsetPitch = new QLabel(tabModes);
        labelOffsetPitch->setObjectName(QStringLiteral("labelOffsetPitch"));
        labelOffsetPitch->setTextFormat(Qt::PlainText);

        gridLayout_4->addWidget(labelOffsetPitch, 2, 6, 1, 1);

        labelOffsetRoll = new QLabel(tabModes);
        labelOffsetRoll->setObjectName(QStringLiteral("labelOffsetRoll"));
        labelOffsetRoll->setTextFormat(Qt::PlainText);

        gridLayout_4->addWidget(labelOffsetRoll, 4, 6, 1, 1);

        labelOffsetYaw = new QLabel(tabModes);
        labelOffsetYaw->setObjectName(QStringLiteral("labelOffsetYaw"));
        labelOffsetYaw->setTextFormat(Qt::PlainText);

        gridLayout_4->addWidget(labelOffsetYaw, 5, 6, 1, 1);

        tabWidget->addTab(tabModes, QString());
        tabSensors = new QWidget();
        tabSensors->setObjectName(QStringLiteral("tabSensors"));
        gridLayout_5 = new QGridLayout(tabSensors);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        groupSensor1 = new QGroupBox(tabSensors);
        groupSensor1->setObjectName(QStringLiteral("groupSensor1"));
        gridLayout_6 = new QGridLayout(groupSensor1);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        comboSensor1AxisTOP = new QComboBox(groupSensor1);
        comboSensor1AxisTOP->setObjectName(QStringLiteral("comboSensor1AxisTOP"));
        comboSensor1AxisTOP->setEnabled(false);

        gridLayout_6->addWidget(comboSensor1AxisTOP, 0, 1, 1, 1);

        comboSensor1AxisRIGHT = new QComboBox(groupSensor1);
        comboSensor1AxisRIGHT->setObjectName(QStringLiteral("comboSensor1AxisRIGHT"));
        comboSensor1AxisRIGHT->setEnabled(false);

        gridLayout_6->addWidget(comboSensor1AxisRIGHT, 1, 1, 1, 1);

        labelSensor1AxisTop = new QLabel(groupSensor1);
        labelSensor1AxisTop->setObjectName(QStringLiteral("labelSensor1AxisTop"));
        labelSensor1AxisTop->setTextFormat(Qt::PlainText);

        gridLayout_6->addWidget(labelSensor1AxisTop, 0, 0, 1, 1);

        labelSensor1AxisRight = new QLabel(groupSensor1);
        labelSensor1AxisRight->setObjectName(QStringLiteral("labelSensor1AxisRight"));
        labelSensor1AxisRight->setTextFormat(Qt::PlainText);

        gridLayout_6->addWidget(labelSensor1AxisRight, 1, 0, 1, 1);

        pushSensor1AccCalibrate = new QPushButton(groupSensor1);
        pushSensor1AccCalibrate->setObjectName(QStringLiteral("pushSensor1AccCalibrate"));
        pushSensor1AccCalibrate->setEnabled(false);

        gridLayout_6->addWidget(pushSensor1AccCalibrate, 2, 0, 1, 2);

        pushSensor1GyroCalibrate = new QPushButton(groupSensor1);
        pushSensor1GyroCalibrate->setObjectName(QStringLiteral("pushSensor1GyroCalibrate"));
        pushSensor1GyroCalibrate->setEnabled(false);

        gridLayout_6->addWidget(pushSensor1GyroCalibrate, 3, 0, 1, 2);


        gridLayout_5->addWidget(groupSensor1, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_5, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 2, 1, 1);

        groupCFilter = new QGroupBox(tabSensors);
        groupCFilter->setObjectName(QStringLiteral("groupCFilter"));
        formLayout = new QFormLayout(groupCFilter);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        labelKp = new QLabel(groupCFilter);
        labelKp->setObjectName(QStringLiteral("labelKp"));
        labelKp->setTextFormat(Qt::PlainText);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelKp);

        labelKi = new QLabel(groupCFilter);
        labelKi->setObjectName(QStringLiteral("labelKi"));
        labelKi->setTextFormat(Qt::PlainText);

        formLayout->setWidget(1, QFormLayout::LabelRole, labelKi);

        spinCFKp = new QSpinBox(groupCFilter);
        spinCFKp->setObjectName(QStringLiteral("spinCFKp"));
        spinCFKp->setMaximum(9999);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinCFKp);

        spinCFKi = new QSpinBox(groupCFilter);
        spinCFKi->setObjectName(QStringLiteral("spinCFKi"));
        spinCFKi->setMaximum(9999);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinCFKi);


        gridLayout_5->addWidget(groupCFilter, 0, 1, 1, 1);

        tabWidget->addTab(tabSensors, QString());
        tabData = new QWidget();
        tabData->setObjectName(QStringLiteral("tabData"));
        verticalLayout_2 = new QVBoxLayout(tabData);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        checkDataX = new QCheckBox(tabData);
        checkDataX->setObjectName(QStringLiteral("checkDataX"));
        sizePolicy2.setHeightForWidth(checkDataX->sizePolicy().hasHeightForWidth());
        checkDataX->setSizePolicy(sizePolicy2);
        checkDataX->setChecked(true);

        horizontalLayout->addWidget(checkDataX);

        checkDataY = new QCheckBox(tabData);
        checkDataY->setObjectName(QStringLiteral("checkDataY"));
        sizePolicy2.setHeightForWidth(checkDataY->sizePolicy().hasHeightForWidth());
        checkDataY->setSizePolicy(sizePolicy2);
        checkDataY->setChecked(true);

        horizontalLayout->addWidget(checkDataY);

        checkDataZ = new QCheckBox(tabData);
        checkDataZ->setObjectName(QStringLiteral("checkDataZ"));
        sizePolicy2.setHeightForWidth(checkDataZ->sizePolicy().hasHeightForWidth());
        checkDataZ->setSizePolicy(sizePolicy2);
        checkDataZ->setChecked(true);

        horizontalLayout->addWidget(checkDataZ);

        comboDataSource = new QComboBox(tabData);
        comboDataSource->setObjectName(QStringLiteral("comboDataSource"));

        horizontalLayout->addWidget(comboDataSource);


        verticalLayout_2->addLayout(horizontalLayout);

        plotData = new QCustomPlot(tabData);
        plotData->setObjectName(QStringLiteral("plotData"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(plotData->sizePolicy().hasHeightForWidth());
        plotData->setSizePolicy(sizePolicy4);

        verticalLayout_2->addWidget(plotData);

        tabWidget->addTab(tabData, QString());
        tab3D = new QWidget();
        tab3D->setObjectName(QStringLiteral("tab3D"));
        verticalLayout_3 = new QVBoxLayout(tab3D);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget = new GLWidget(tab3D);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout_3->addWidget(widget);

        tabWidget->addTab(tab3D, QString());
        tabSpectrum = new QWidget();
        tabSpectrum->setObjectName(QStringLiteral("tabSpectrum"));
        verticalLayout_4 = new QVBoxLayout(tabSpectrum);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        comboSpectrumSource = new QComboBox(tabSpectrum);
        comboSpectrumSource->setObjectName(QStringLiteral("comboSpectrumSource"));
        comboSpectrumSource->setEnabled(false);

        verticalLayout_4->addWidget(comboSpectrumSource);

        plotSpectrum = new QCustomPlot(tabSpectrum);
        plotSpectrum->setObjectName(QStringLiteral("plotSpectrum"));
        sizePolicy4.setHeightForWidth(plotSpectrum->sizePolicy().hasHeightForWidth());
        plotSpectrum->setSizePolicy(sizePolicy4);

        verticalLayout_4->addWidget(plotSpectrum);

        tabWidget->addTab(tabSpectrum, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 560, 21));
        menuBoard = new QMenu(menuBar);
        menuBoard->setObjectName(QStringLiteral("menuBoard"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setAllowedAreas(Qt::BottomToolBarArea|Qt::TopToolBarArea);
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(spinPitch_P, spinPitch_I);
        QWidget::setTabOrder(spinPitch_I, spinPitch_D);
        QWidget::setTabOrder(spinPitch_D, spinRoll_P);
        QWidget::setTabOrder(spinRoll_P, spinRoll_I);
        QWidget::setTabOrder(spinRoll_I, spinRoll_D);
        QWidget::setTabOrder(spinRoll_D, spinYaw_P);
        QWidget::setTabOrder(spinYaw_P, spinYaw_I);
        QWidget::setTabOrder(spinYaw_I, spinYaw_D);
        QWidget::setTabOrder(spinYaw_D, spinPitchPower);
        QWidget::setTabOrder(spinPitchPower, spinPitchNumPoles);
        QWidget::setTabOrder(spinPitchNumPoles, checkPitchRev);
        QWidget::setTabOrder(checkPitchRev, comboPitchCommand);
        QWidget::setTabOrder(comboPitchCommand, comboPitchDeadTime);
        QWidget::setTabOrder(comboPitchDeadTime, spinRollPower);
        QWidget::setTabOrder(spinRollPower, spinRollNumPoles);
        QWidget::setTabOrder(spinRollNumPoles, checkRollRev);
        QWidget::setTabOrder(checkRollRev, comboRollCommand);
        QWidget::setTabOrder(comboRollCommand, comboRollDeadTime);
        QWidget::setTabOrder(comboRollDeadTime, spinYawPower);
        QWidget::setTabOrder(spinYawPower, spinYawNumPoles);
        QWidget::setTabOrder(spinYawNumPoles, checkYawRev);
        QWidget::setTabOrder(checkYawRev, comboYawCommand);
        QWidget::setTabOrder(comboYawCommand, comboYawDeadTime);
        QWidget::setTabOrder(comboYawDeadTime, comboInputChannelPitch);
        QWidget::setTabOrder(comboInputChannelPitch, spinInputMinPitch);
        QWidget::setTabOrder(spinInputMinPitch, spinInputMidPitch);
        QWidget::setTabOrder(spinInputMidPitch, spinInputMaxPitch);
        QWidget::setTabOrder(spinInputMaxPitch, comboInputChannelRoll);
        QWidget::setTabOrder(comboInputChannelRoll, spinInputMinRoll);
        QWidget::setTabOrder(spinInputMinRoll, spinInputMidRoll);
        QWidget::setTabOrder(spinInputMidRoll, spinInputMaxRoll);
        QWidget::setTabOrder(spinInputMaxRoll, comboInputChannelYaw);
        QWidget::setTabOrder(comboInputChannelYaw, spinInputMinYaw);
        QWidget::setTabOrder(spinInputMinYaw, spinInputMidYaw);
        QWidget::setTabOrder(spinInputMidYaw, spinInputMaxYaw);
        QWidget::setTabOrder(spinInputMaxYaw, comboInputModePitch);
        QWidget::setTabOrder(comboInputModePitch, spinInputMinAnglePitch);
        QWidget::setTabOrder(spinInputMinAnglePitch, spinInputMaxAnglePitch);
        QWidget::setTabOrder(spinInputMaxAnglePitch, spinInputSpeedPitch);
        QWidget::setTabOrder(spinInputSpeedPitch, spinInputOffsetPitch);
        QWidget::setTabOrder(spinInputOffsetPitch, comboInputModeRoll);
        QWidget::setTabOrder(comboInputModeRoll, spinInputMinAngleRoll);
        QWidget::setTabOrder(spinInputMinAngleRoll, spinInputMaxAngleRoll);
        QWidget::setTabOrder(spinInputMaxAngleRoll, spinInputSpeedRoll);
        QWidget::setTabOrder(spinInputSpeedRoll, spinInputOffsetRoll);
        QWidget::setTabOrder(spinInputOffsetRoll, comboInputModeYaw);
        QWidget::setTabOrder(comboInputModeYaw, spinInputMinAngleYaw);
        QWidget::setTabOrder(spinInputMinAngleYaw, spinInputMaxAngleYaw);
        QWidget::setTabOrder(spinInputMaxAngleYaw, spinInputSpeedYaw);
        QWidget::setTabOrder(spinInputSpeedYaw, spinInputOffsetYaw);
        QWidget::setTabOrder(spinInputOffsetYaw, checkDataX);
        QWidget::setTabOrder(checkDataX, checkDataY);
        QWidget::setTabOrder(checkDataY, checkDataZ);
        QWidget::setTabOrder(checkDataZ, comboDataSource);

        menuBar->addAction(menuBoard->menuAction());
        menuBoard->addAction(actionConnect);
        menuBoard->addSeparator();
        menuBoard->addAction(actionRead);
        menuBoard->addAction(actionSet);
        menuBoard->addAction(actionSave);
        mainToolBar->addAction(actionConnect);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRead);
        mainToolBar->addAction(actionSet);
        mainToolBar->addAction(actionSave);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        comboRollDeadTime->setCurrentIndex(5);
        comboRollCommand->setCurrentIndex(3);
        comboPitchCommand->setCurrentIndex(3);
        comboPitchDeadTime->setCurrentIndex(5);
        comboYawCommand->setCurrentIndex(3);
        comboYawDeadTime->setCurrentIndex(5);
        comboInputChannelYaw->setCurrentIndex(5);
        comboInputChannelPitch->setCurrentIndex(5);
        comboInputChannelRoll->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "EvvGC-PLUS Configurator v0.1.3-alpha", 0));
        actionConnect->setText(QApplication::translate("MainWindow", "Connect", 0));
        actionConnect->setShortcut(QApplication::translate("MainWindow", "F1", 0));
        actionRead->setText(QApplication::translate("MainWindow", "Read", 0));
#ifndef QT_NO_TOOLTIP
        actionRead->setToolTip(QApplication::translate("MainWindow", "Read settings currently used by the board", 0));
#endif // QT_NO_TOOLTIP
        actionRead->setShortcut(QApplication::translate("MainWindow", "F2", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "Apply settings + save them to internal EEPROM", 0));
#endif // QT_NO_TOOLTIP
        actionSave->setShortcut(QApplication::translate("MainWindow", "F4", 0));
        actionSet->setText(QApplication::translate("MainWindow", "Set", 0));
#ifndef QT_NO_TOOLTIP
        actionSet->setToolTip(QApplication::translate("MainWindow", "Apply settings", 0));
#endif // QT_NO_TOOLTIP
        actionSet->setShortcut(QApplication::translate("MainWindow", "F3", 0));
        labelYaw->setText(QApplication::translate("MainWindow", "Yaw:", 0));
#ifndef QT_NO_TOOLTIP
        labelP->setToolTip(QApplication::translate("MainWindow", "Proportional (depends on current error)", 0));
#endif // QT_NO_TOOLTIP
        labelP->setText(QApplication::translate("MainWindow", "P", 0));
#ifndef QT_NO_TOOLTIP
        labelI->setToolTip(QApplication::translate("MainWindow", "Integral (accumulation of past errors)", 0));
#endif // QT_NO_TOOLTIP
        labelI->setText(QApplication::translate("MainWindow", "I", 0));
#ifndef QT_NO_TOOLTIP
        labelD->setToolTip(QApplication::translate("MainWindow", "Derivative (prediction of future errors, based on current rate of change)", 0));
#endif // QT_NO_TOOLTIP
        labelD->setText(QApplication::translate("MainWindow", "D", 0));
        labelRoll->setText(QApplication::translate("MainWindow", "Roll:", 0));
        labelPitch->setText(QApplication::translate("MainWindow", "Pitch:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabStabilization), QApplication::translate("MainWindow", "Stabilization", 0));
        labelCommand->setText(QApplication::translate("MainWindow", "Command", 0));
        labelYaw_2->setText(QApplication::translate("MainWindow", "Yaw:", 0));
        comboRollDeadTime->clear();
        comboRollDeadTime->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "750 ns", 0)
         << QApplication::translate("MainWindow", "1000 ns", 0)
         << QApplication::translate("MainWindow", "2000 ns", 0)
         << QApplication::translate("MainWindow", "3000 ns", 0)
         << QApplication::translate("MainWindow", "4000 ns", 0)
         << QApplication::translate("MainWindow", "5000 ns", 0)
        );
#ifndef QT_NO_TOOLTIP
        comboRollDeadTime->setToolTip(QApplication::translate("MainWindow", "Set this as low as possible, but make sure that the power transistors are not overheating!", 0));
#endif // QT_NO_TOOLTIP
        comboRollCommand->clear();
        comboRollCommand->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Pitch", 0)
         << QApplication::translate("MainWindow", "Roll", 0)
         << QApplication::translate("MainWindow", "Yaw", 0)
         << QApplication::translate("MainWindow", "Disabled", 0)
        );
        comboPitchCommand->clear();
        comboPitchCommand->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Pitch", 0)
         << QApplication::translate("MainWindow", "Roll", 0)
         << QApplication::translate("MainWindow", "Yaw", 0)
         << QApplication::translate("MainWindow", "Disabled", 0)
        );
        comboPitchDeadTime->clear();
        comboPitchDeadTime->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "750 ns", 0)
         << QApplication::translate("MainWindow", "1000 ns", 0)
         << QApplication::translate("MainWindow", "2000 ns", 0)
         << QApplication::translate("MainWindow", "3000 ns", 0)
         << QApplication::translate("MainWindow", "4000 ns", 0)
         << QApplication::translate("MainWindow", "5000 ns", 0)
        );
#ifndef QT_NO_TOOLTIP
        comboPitchDeadTime->setToolTip(QApplication::translate("MainWindow", "Set this as low as possible, but make sure that the power transistors are not overheating!", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkPitchRev->setToolTip(QApplication::translate("MainWindow", "Reverse motor direction", 0));
#endif // QT_NO_TOOLTIP
        checkPitchRev->setText(QApplication::translate("MainWindow", "Rev.", 0));
        spinPitchPower->setSuffix(QApplication::translate("MainWindow", "%", 0));
        labelPitch_2->setText(QApplication::translate("MainWindow", "Pitch:", 0));
        labelNumPoles->setText(QApplication::translate("MainWindow", "Poles, N", 0));
#ifndef QT_NO_TOOLTIP
        checkRollRev->setToolTip(QApplication::translate("MainWindow", "Reverse motor direction", 0));
#endif // QT_NO_TOOLTIP
        checkRollRev->setText(QApplication::translate("MainWindow", "Rev.", 0));
#ifndef QT_NO_TOOLTIP
        checkYawRev->setToolTip(QApplication::translate("MainWindow", "Reverse motor direction", 0));
#endif // QT_NO_TOOLTIP
        checkYawRev->setText(QApplication::translate("MainWindow", "Rev.", 0));
        spinRollPower->setSuffix(QApplication::translate("MainWindow", "%", 0));
        spinYawPower->setSuffix(QApplication::translate("MainWindow", "%", 0));
        comboYawCommand->clear();
        comboYawCommand->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Pitch", 0)
         << QApplication::translate("MainWindow", "Roll", 0)
         << QApplication::translate("MainWindow", "Yaw", 0)
         << QApplication::translate("MainWindow", "Disabled", 0)
        );
        labelPower->setText(QApplication::translate("MainWindow", "Power", 0));
        labelDeadTime->setText(QApplication::translate("MainWindow", "Dead Time", 0));
        labelRoll_2->setText(QApplication::translate("MainWindow", "Roll:", 0));
        comboYawDeadTime->clear();
        comboYawDeadTime->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "750 ns", 0)
         << QApplication::translate("MainWindow", "1000 ns", 0)
         << QApplication::translate("MainWindow", "2000 ns", 0)
         << QApplication::translate("MainWindow", "3000 ns", 0)
         << QApplication::translate("MainWindow", "4000 ns", 0)
         << QApplication::translate("MainWindow", "5000 ns", 0)
        );
#ifndef QT_NO_TOOLTIP
        comboYawDeadTime->setToolTip(QApplication::translate("MainWindow", "Set this as low as possible, but make sure that the power transistors are not overheating!", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkPitchTHIEnable->setToolTip(QApplication::translate("MainWindow", "Third Harmonic Injection, incraeses efficiency by ~14%", 0));
#endif // QT_NO_TOOLTIP
        checkPitchTHIEnable->setText(QApplication::translate("MainWindow", "THI", 0));
#ifndef QT_NO_TOOLTIP
        checkRollTHIEnable->setToolTip(QApplication::translate("MainWindow", "Third Harmonic Injection, incraeses efficiency by ~14%", 0));
#endif // QT_NO_TOOLTIP
        checkRollTHIEnable->setText(QApplication::translate("MainWindow", "THI", 0));
#ifndef QT_NO_TOOLTIP
        checkYawTHIEnable->setToolTip(QApplication::translate("MainWindow", "Third Harmonic Injection, incraeses efficiency by ~14%", 0));
#endif // QT_NO_TOOLTIP
        checkYawTHIEnable->setText(QApplication::translate("MainWindow", "THI", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabOutputs), QApplication::translate("MainWindow", "Outputs", 0));
        labelYaw_3->setText(QApplication::translate("MainWindow", "Yaw:", 0));
        labelRoll_3->setText(QApplication::translate("MainWindow", "Roll:", 0));
        labelPitch_3->setText(QApplication::translate("MainWindow", "Pitch:", 0));
        labelInputMeas->setText(QApplication::translate("MainWindow", "Meas.", 0));
        labelInputMax->setText(QApplication::translate("MainWindow", "Max", 0));
        labelInputNeutral->setText(QApplication::translate("MainWindow", "Neutral", 0));
        labelInputMin->setText(QApplication::translate("MainWindow", "Min", 0));
        labelInputChannel->setText(QApplication::translate("MainWindow", "Channel #", 0));
        labelInputYaw->setText(QApplication::translate("MainWindow", "4095", 0));
        comboInputChannelYaw->clear();
        comboInputChannelYaw->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "AUX1 analog", 0)
         << QApplication::translate("MainWindow", "AUX2 analog", 0)
         << QApplication::translate("MainWindow", "AUX3 PWM", 0)
         << QApplication::translate("MainWindow", "AUX4 PWM", 0)
         << QApplication::translate("MainWindow", "AUX5 PWM", 0)
         << QApplication::translate("MainWindow", "Disabled", 0)
        );
        comboInputChannelPitch->clear();
        comboInputChannelPitch->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "AUX1 analog", 0)
         << QApplication::translate("MainWindow", "AUX2 analog", 0)
         << QApplication::translate("MainWindow", "AUX3 PWM", 0)
         << QApplication::translate("MainWindow", "AUX4 PWM", 0)
         << QApplication::translate("MainWindow", "AUX5 PWM", 0)
         << QApplication::translate("MainWindow", "Disabled", 0)
        );
        labelInputPitch->setText(QApplication::translate("MainWindow", "4095", 0));
        comboInputChannelRoll->clear();
        comboInputChannelRoll->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "AUX1 analog", 0)
         << QApplication::translate("MainWindow", "AUX2 analog", 0)
         << QApplication::translate("MainWindow", "AUX3 PWM", 0)
         << QApplication::translate("MainWindow", "AUX4 PWM", 0)
         << QApplication::translate("MainWindow", "AUX5 PWM", 0)
         << QApplication::translate("MainWindow", "Disabled", 0)
        );
        labelInputRoll->setText(QApplication::translate("MainWindow", "4095", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabInputs), QApplication::translate("MainWindow", "Inputs", 0));
        labelOffset->setText(QApplication::translate("MainWindow", "Offset", 0));
        spinInputOffsetYaw->setSuffix(QApplication::translate("MainWindow", "\302\260", 0));
        spinInputSpeedYaw->setSuffix(QApplication::translate("MainWindow", "\302\260/s", 0));
        spinInputMaxAngleYaw->setSuffix(QApplication::translate("MainWindow", "\302\260", 0));
        spinInputMinAngleYaw->setSuffix(QApplication::translate("MainWindow", "\302\260", 0));
        labelYaw_4->setText(QApplication::translate("MainWindow", "Yaw:", 0));
        labelPitch_4->setText(QApplication::translate("MainWindow", "Pitch:", 0));
        labelRoll_4->setText(QApplication::translate("MainWindow", "Roll:", 0));
        labelMaxAngle->setText(QApplication::translate("MainWindow", "Max angle", 0));
        labelMinAngle->setText(QApplication::translate("MainWindow", "Min angle", 0));
        labelMode->setText(QApplication::translate("MainWindow", "Mode", 0));
        comboInputModeYaw->clear();
        comboInputModeYaw->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Angle", 0)
         << QApplication::translate("MainWindow", "Speed", 0)
         << QApplication::translate("MainWindow", "Follow", 0)
         << QApplication::translate("MainWindow", "Mavlink", 0)
        );
        labelSpeed->setText(QApplication::translate("MainWindow", "Speed", 0));
        comboInputModeRoll->clear();
        comboInputModeRoll->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Angle", 0)
         << QApplication::translate("MainWindow", "Speed", 0)
         << QApplication::translate("MainWindow", "Follow", 0)
         << QApplication::translate("MainWindow", "Mavlink", 0)
        );
        spinInputMinAngleRoll->setSuffix(QApplication::translate("MainWindow", "\302\260", 0));
        spinInputMaxAngleRoll->setSuffix(QApplication::translate("MainWindow", "\302\260", 0));
        spinInputSpeedRoll->setSuffix(QApplication::translate("MainWindow", "\302\260/s", 0));
        comboInputModePitch->clear();
        comboInputModePitch->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Angle", 0)
         << QApplication::translate("MainWindow", "Speed", 0)
         << QApplication::translate("MainWindow", "Follow", 0)
         << QApplication::translate("MainWindow", "Mavlink", 0)
        );
        spinInputMinAnglePitch->setSuffix(QApplication::translate("MainWindow", "\302\260", 0));
        spinInputMaxAnglePitch->setSuffix(QApplication::translate("MainWindow", "\302\260", 0));
        spinInputOffsetRoll->setSuffix(QApplication::translate("MainWindow", "\302\260", 0));
        spinInputSpeedPitch->setSuffix(QApplication::translate("MainWindow", "\302\260/s", 0));
        spinInputOffsetPitch->setSuffix(QApplication::translate("MainWindow", "\302\260", 0));
        labelOffsetMeas->setText(QApplication::translate("MainWindow", "Meas.", 0));
        labelOffsetPitch->setText(QApplication::translate("MainWindow", "0\302\260", 0));
        labelOffsetRoll->setText(QApplication::translate("MainWindow", "0\302\260", 0));
        labelOffsetYaw->setText(QApplication::translate("MainWindow", "0\302\260", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabModes), QApplication::translate("MainWindow", "Modes", 0));
        groupSensor1->setTitle(QApplication::translate("MainWindow", "Sensor1 (none):", 0));
        comboSensor1AxisTOP->clear();
        comboSensor1AxisTOP->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "+X", 0)
         << QApplication::translate("MainWindow", "+Y", 0)
         << QApplication::translate("MainWindow", "+Z", 0)
         << QApplication::translate("MainWindow", "-X", 0)
         << QApplication::translate("MainWindow", "-Y", 0)
         << QApplication::translate("MainWindow", "-Z", 0)
        );
        comboSensor1AxisRIGHT->clear();
        comboSensor1AxisRIGHT->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "+X", 0)
         << QApplication::translate("MainWindow", "+Y", 0)
         << QApplication::translate("MainWindow", "+Z", 0)
         << QApplication::translate("MainWindow", "-X", 0)
         << QApplication::translate("MainWindow", "-Y", 0)
         << QApplication::translate("MainWindow", "-Z", 0)
        );
        labelSensor1AxisTop->setText(QApplication::translate("MainWindow", "Axis TOP", 0));
        labelSensor1AxisRight->setText(QApplication::translate("MainWindow", "Axis RIGHT", 0));
        pushSensor1AccCalibrate->setText(QApplication::translate("MainWindow", "Accel Calibrate", 0));
        pushSensor1GyroCalibrate->setText(QApplication::translate("MainWindow", "Gyro Calibrate", 0));
        groupCFilter->setTitle(QApplication::translate("MainWindow", "Complementary Filter:", 0));
        labelKp->setText(QApplication::translate("MainWindow", "Kp:", 0));
        labelKi->setText(QApplication::translate("MainWindow", "Ki:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabSensors), QApplication::translate("MainWindow", "Sensors", 0));
        checkDataX->setText(QApplication::translate("MainWindow", "X ", 0));
        checkDataY->setText(QApplication::translate("MainWindow", "Y", 0));
        checkDataZ->setText(QApplication::translate("MainWindow", "Z", 0));
        comboDataSource->clear();
        comboDataSource->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "IMU1 Attitude", 0)
         << QApplication::translate("MainWindow", "IMU1 Accelerometer", 0)
         << QApplication::translate("MainWindow", "IMU1 Gyroscope", 0)
        );
        tabWidget->setTabText(tabWidget->indexOf(tabData), QApplication::translate("MainWindow", "Data", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab3D), QApplication::translate("MainWindow", "3D View", 0));
        comboSpectrumSource->clear();
        comboSpectrumSource->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Disabled", 0)
         << QApplication::translate("MainWindow", "IMU1 Accelerometer X", 0)
         << QApplication::translate("MainWindow", "IMU1 Accelerometer Y", 0)
         << QApplication::translate("MainWindow", "IMU1 Accelerometer Z", 0)
         << QApplication::translate("MainWindow", "IMU1 Gyroscope X", 0)
         << QApplication::translate("MainWindow", "IMU1 Gyroscope Y", 0)
         << QApplication::translate("MainWindow", "IMU1 Gyroscope Z", 0)
         << QApplication::translate("MainWindow", "IMU1 Attitude X", 0)
         << QApplication::translate("MainWindow", "IMU1 Attitude Y", 0)
         << QApplication::translate("MainWindow", "IMU1 Attitude Z", 0)
        );
        tabWidget->setTabText(tabWidget->indexOf(tabSpectrum), QApplication::translate("MainWindow", "Spectrum", 0));
        menuBoard->setTitle(QApplication::translate("MainWindow", "Board", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
