/********************************************************************************
** Form generated from reading UI file 'microphonearraywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MICROPHONEARRAYWINDOW_H
#define UI_MICROPHONEARRAYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MicrophoneArrayWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QToolBox *toolBox;
    QWidget *toolBoxPageCommunication;
    QGroupBox *groupBoxEthernet;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayoutEthernet;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPortEthernet;
    QLineEdit *editPortEthernet;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonConnectEthernet;
    QPushButton *pushButtonDisconnectEthernet;
    QGroupBox *groupBoxSerial;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayoutSerial;
    QHBoxLayout *horizontalLayout_11;
    QLabel *labelSerial;
    QComboBox *comboBoxSerial;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *PushButtonConnectSerial;
    QPushButton *pushButtonDisconnectSerial;
    QGroupBox *groupBox_Usb;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_Usb;
    QHBoxLayout *horizontalLayout_Usb;
    QLabel *labelUsb;
    QComboBox *comboBoxUsb;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *portPushButtonConfirm_5;
    QPushButton *portPushButtonConfirm_6;
    QWidget *toolBoxPageGeneral;
    QGroupBox *groupBoxBoardStatus;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayoutBoardStatus;
    QLineEdit *lineEditFwVer;
    QLineEdit *lineEditHwVer;
    QLabel *labelHwVer;
    QLabel *labelFwVer;
    QLabel *labelIpAddr;
    QLineEdit *lineEditIpAddr;
    QGroupBox *groupBoxChannelEn;
    QCheckBox *checkboxChannel1En;
    QCheckBox *checkboxChannel2En;
    QCheckBox *checkboxChannel3En;
    QCheckBox *checkboxChannel4En;
    QGroupBox *groupBoxChannelDisp;
    QCheckBox *checkboxChannel1Disp;
    QCheckBox *checkboxChannel2Disp;
    QCheckBox *checkboxChannel3Disp;
    QCheckBox *checkboxChannel4Disp;
    QGroupBox *groupBoxTimeSync;
    QPushButton *pushButtonSync;
    QLabel *labelCurrTime;
    QWidget *toolBoxPageAquisition;
    QGroupBox *groupBoxAquisition;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayoutAquisition;
    QLabel *labelSamplingFreq;
    QComboBox *comboBoxSamplingFreq;
    QLabel *labelDownsamplingRate;
    QComboBox *comboBoxDownSampling;
    QCheckBox *checkBoxBurstAquiMode;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelAquisitionTime;
    QLineEdit *lineEditAquisitionTime;
    QLabel *labelAquisitionTimeUnit;
    QDial *dialAquisitionTime;
    QCheckBox *checkBoxSDCardEn;
    QCheckBox *checkBoxTransmitViaComm;
    QGroupBox *groupBoxAquisitionFile;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelDirPath;
    QPushButton *pushButtonSelectFilePath;
    QGroupBox *groupBoxAquisitionControl;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonStartAqui;
    QPushButton *pushButtonStopAqui;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MicrophoneArrayWindow)
    {
        if (MicrophoneArrayWindow->objectName().isEmpty())
            MicrophoneArrayWindow->setObjectName("MicrophoneArrayWindow");
        MicrophoneArrayWindow->resize(800, 600);
        centralwidget = new QWidget(MicrophoneArrayWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        toolBox = new QToolBox(centralwidget);
        toolBox->setObjectName("toolBox");
        toolBox->setMaximumSize(QSize(200, 16777215));
        toolBox->setStyleSheet(QString::fromUtf8(""));
        toolBoxPageCommunication = new QWidget();
        toolBoxPageCommunication->setObjectName("toolBoxPageCommunication");
        toolBoxPageCommunication->setGeometry(QRect(0, 0, 200, 440));
        groupBoxEthernet = new QGroupBox(toolBoxPageCommunication);
        groupBoxEthernet->setObjectName("groupBoxEthernet");
        groupBoxEthernet->setEnabled(false);
        groupBoxEthernet->setGeometry(QRect(10, 0, 181, 101));
        layoutWidget = new QWidget(groupBoxEthernet);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 17, 174, 71));
        verticalLayoutEthernet = new QVBoxLayout(layoutWidget);
        verticalLayoutEthernet->setObjectName("verticalLayoutEthernet");
        verticalLayoutEthernet->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelPortEthernet = new QLabel(layoutWidget);
        labelPortEthernet->setObjectName("labelPortEthernet");

        horizontalLayout_2->addWidget(labelPortEthernet);

        editPortEthernet = new QLineEdit(layoutWidget);
        editPortEthernet->setObjectName("editPortEthernet");

        horizontalLayout_2->addWidget(editPortEthernet);


        verticalLayoutEthernet->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButtonConnectEthernet = new QPushButton(layoutWidget);
        pushButtonConnectEthernet->setObjectName("pushButtonConnectEthernet");

        horizontalLayout_3->addWidget(pushButtonConnectEthernet);

        pushButtonDisconnectEthernet = new QPushButton(layoutWidget);
        pushButtonDisconnectEthernet->setObjectName("pushButtonDisconnectEthernet");

        horizontalLayout_3->addWidget(pushButtonDisconnectEthernet);


        verticalLayoutEthernet->addLayout(horizontalLayout_3);

        groupBoxSerial = new QGroupBox(toolBoxPageCommunication);
        groupBoxSerial->setObjectName("groupBoxSerial");
        groupBoxSerial->setEnabled(false);
        groupBoxSerial->setGeometry(QRect(10, 110, 181, 101));
        layoutWidget_4 = new QWidget(groupBoxSerial);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(10, 17, 174, 71));
        verticalLayoutSerial = new QVBoxLayout(layoutWidget_4);
        verticalLayoutSerial->setObjectName("verticalLayoutSerial");
        verticalLayoutSerial->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        labelSerial = new QLabel(layoutWidget_4);
        labelSerial->setObjectName("labelSerial");

        horizontalLayout_11->addWidget(labelSerial);

        comboBoxSerial = new QComboBox(layoutWidget_4);
        comboBoxSerial->setObjectName("comboBoxSerial");

        horizontalLayout_11->addWidget(comboBoxSerial);

        horizontalLayout_11->setStretch(1, 1);

        verticalLayoutSerial->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        PushButtonConnectSerial = new QPushButton(layoutWidget_4);
        PushButtonConnectSerial->setObjectName("PushButtonConnectSerial");

        horizontalLayout_12->addWidget(PushButtonConnectSerial);

        pushButtonDisconnectSerial = new QPushButton(layoutWidget_4);
        pushButtonDisconnectSerial->setObjectName("pushButtonDisconnectSerial");

        horizontalLayout_12->addWidget(pushButtonDisconnectSerial);


        verticalLayoutSerial->addLayout(horizontalLayout_12);

        groupBox_Usb = new QGroupBox(toolBoxPageCommunication);
        groupBox_Usb->setObjectName("groupBox_Usb");
        groupBox_Usb->setEnabled(false);
        groupBox_Usb->setGeometry(QRect(10, 220, 181, 101));
        layoutWidget_6 = new QWidget(groupBox_Usb);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(10, 17, 174, 71));
        verticalLayout_Usb = new QVBoxLayout(layoutWidget_6);
        verticalLayout_Usb->setObjectName("verticalLayout_Usb");
        verticalLayout_Usb->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_Usb = new QHBoxLayout();
        horizontalLayout_Usb->setObjectName("horizontalLayout_Usb");
        labelUsb = new QLabel(layoutWidget_6);
        labelUsb->setObjectName("labelUsb");

        horizontalLayout_Usb->addWidget(labelUsb);

        comboBoxUsb = new QComboBox(layoutWidget_6);
        comboBoxUsb->setObjectName("comboBoxUsb");

        horizontalLayout_Usb->addWidget(comboBoxUsb);

        horizontalLayout_Usb->setStretch(1, 1);

        verticalLayout_Usb->addLayout(horizontalLayout_Usb);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        portPushButtonConfirm_5 = new QPushButton(layoutWidget_6);
        portPushButtonConfirm_5->setObjectName("portPushButtonConfirm_5");

        horizontalLayout_16->addWidget(portPushButtonConfirm_5);

        portPushButtonConfirm_6 = new QPushButton(layoutWidget_6);
        portPushButtonConfirm_6->setObjectName("portPushButtonConfirm_6");

        horizontalLayout_16->addWidget(portPushButtonConfirm_6);


        verticalLayout_Usb->addLayout(horizontalLayout_16);

        toolBox->addItem(toolBoxPageCommunication, QString::fromUtf8("Communication Settings"));
        toolBoxPageGeneral = new QWidget();
        toolBoxPageGeneral->setObjectName("toolBoxPageGeneral");
        toolBoxPageGeneral->setGeometry(QRect(0, 0, 200, 440));
        groupBoxBoardStatus = new QGroupBox(toolBoxPageGeneral);
        groupBoxBoardStatus->setObjectName("groupBoxBoardStatus");
        groupBoxBoardStatus->setEnabled(false);
        groupBoxBoardStatus->setGeometry(QRect(10, 300, 171, 111));
        gridLayoutWidget = new QWidget(groupBoxBoardStatus);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 20, 160, 84));
        gridLayoutBoardStatus = new QGridLayout(gridLayoutWidget);
        gridLayoutBoardStatus->setObjectName("gridLayoutBoardStatus");
        gridLayoutBoardStatus->setHorizontalSpacing(6);
        gridLayoutBoardStatus->setVerticalSpacing(0);
        gridLayoutBoardStatus->setContentsMargins(0, 0, 0, 0);
        lineEditFwVer = new QLineEdit(gridLayoutWidget);
        lineEditFwVer->setObjectName("lineEditFwVer");
        lineEditFwVer->setReadOnly(true);

        gridLayoutBoardStatus->addWidget(lineEditFwVer, 1, 3, 1, 1);

        lineEditHwVer = new QLineEdit(gridLayoutWidget);
        lineEditHwVer->setObjectName("lineEditHwVer");
        lineEditHwVer->setEnabled(false);
        lineEditHwVer->setReadOnly(true);

        gridLayoutBoardStatus->addWidget(lineEditHwVer, 3, 3, 1, 1);

        labelHwVer = new QLabel(gridLayoutWidget);
        labelHwVer->setObjectName("labelHwVer");

        gridLayoutBoardStatus->addWidget(labelHwVer, 3, 0, 1, 1);

        labelFwVer = new QLabel(gridLayoutWidget);
        labelFwVer->setObjectName("labelFwVer");

        gridLayoutBoardStatus->addWidget(labelFwVer, 1, 0, 1, 1);

        labelIpAddr = new QLabel(gridLayoutWidget);
        labelIpAddr->setObjectName("labelIpAddr");

        gridLayoutBoardStatus->addWidget(labelIpAddr, 4, 0, 1, 1);

        lineEditIpAddr = new QLineEdit(gridLayoutWidget);
        lineEditIpAddr->setObjectName("lineEditIpAddr");
        lineEditIpAddr->setReadOnly(true);

        gridLayoutBoardStatus->addWidget(lineEditIpAddr, 4, 3, 1, 1);

        groupBoxChannelEn = new QGroupBox(toolBoxPageGeneral);
        groupBoxChannelEn->setObjectName("groupBoxChannelEn");
        groupBoxChannelEn->setEnabled(false);
        groupBoxChannelEn->setGeometry(QRect(10, 0, 171, 101));
        groupBoxChannelEn->setLayoutDirection(Qt::LeftToRight);
        groupBoxChannelEn->setAutoFillBackground(false);
        groupBoxChannelEn->setFlat(false);
        groupBoxChannelEn->setCheckable(false);
        checkboxChannel1En = new QCheckBox(groupBoxChannelEn);
        checkboxChannel1En->setObjectName("checkboxChannel1En");
        checkboxChannel1En->setGeometry(QRect(10, 20, 86, 20));
        checkboxChannel2En = new QCheckBox(groupBoxChannelEn);
        checkboxChannel2En->setObjectName("checkboxChannel2En");
        checkboxChannel2En->setGeometry(QRect(10, 40, 86, 20));
        checkboxChannel3En = new QCheckBox(groupBoxChannelEn);
        checkboxChannel3En->setObjectName("checkboxChannel3En");
        checkboxChannel3En->setGeometry(QRect(10, 60, 86, 20));
        checkboxChannel4En = new QCheckBox(groupBoxChannelEn);
        checkboxChannel4En->setObjectName("checkboxChannel4En");
        checkboxChannel4En->setGeometry(QRect(10, 80, 86, 20));
        groupBoxChannelDisp = new QGroupBox(toolBoxPageGeneral);
        groupBoxChannelDisp->setObjectName("groupBoxChannelDisp");
        groupBoxChannelDisp->setEnabled(false);
        groupBoxChannelDisp->setGeometry(QRect(10, 110, 171, 101));
        groupBoxChannelDisp->setLayoutDirection(Qt::LeftToRight);
        groupBoxChannelDisp->setAutoFillBackground(false);
        groupBoxChannelDisp->setFlat(false);
        groupBoxChannelDisp->setCheckable(false);
        checkboxChannel1Disp = new QCheckBox(groupBoxChannelDisp);
        checkboxChannel1Disp->setObjectName("checkboxChannel1Disp");
        checkboxChannel1Disp->setEnabled(false);
        checkboxChannel1Disp->setGeometry(QRect(10, 20, 86, 20));
        checkboxChannel2Disp = new QCheckBox(groupBoxChannelDisp);
        checkboxChannel2Disp->setObjectName("checkboxChannel2Disp");
        checkboxChannel2Disp->setEnabled(false);
        checkboxChannel2Disp->setGeometry(QRect(10, 40, 86, 20));
        checkboxChannel3Disp = new QCheckBox(groupBoxChannelDisp);
        checkboxChannel3Disp->setObjectName("checkboxChannel3Disp");
        checkboxChannel3Disp->setEnabled(false);
        checkboxChannel3Disp->setGeometry(QRect(10, 60, 86, 20));
        checkboxChannel4Disp = new QCheckBox(groupBoxChannelDisp);
        checkboxChannel4Disp->setObjectName("checkboxChannel4Disp");
        checkboxChannel4Disp->setEnabled(false);
        checkboxChannel4Disp->setGeometry(QRect(10, 80, 86, 20));
        groupBoxTimeSync = new QGroupBox(toolBoxPageGeneral);
        groupBoxTimeSync->setObjectName("groupBoxTimeSync");
        groupBoxTimeSync->setEnabled(false);
        groupBoxTimeSync->setGeometry(QRect(10, 220, 171, 71));
        pushButtonSync = new QPushButton(groupBoxTimeSync);
        pushButtonSync->setObjectName("pushButtonSync");
        pushButtonSync->setEnabled(false);
        pushButtonSync->setGeometry(QRect(40, 40, 75, 24));
        labelCurrTime = new QLabel(groupBoxTimeSync);
        labelCurrTime->setObjectName("labelCurrTime");
        labelCurrTime->setGeometry(QRect(10, 20, 49, 16));
        toolBox->addItem(toolBoxPageGeneral, QString::fromUtf8("General Settings"));
        toolBoxPageAquisition = new QWidget();
        toolBoxPageAquisition->setObjectName("toolBoxPageAquisition");
        toolBoxPageAquisition->setGeometry(QRect(0, 0, 200, 440));
        groupBoxAquisition = new QGroupBox(toolBoxPageAquisition);
        groupBoxAquisition->setObjectName("groupBoxAquisition");
        groupBoxAquisition->setEnabled(false);
        groupBoxAquisition->setGeometry(QRect(10, 0, 171, 301));
        layoutWidget1 = new QWidget(groupBoxAquisition);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 20, 193, 306));
        verticalLayoutAquisition = new QVBoxLayout(layoutWidget1);
        verticalLayoutAquisition->setObjectName("verticalLayoutAquisition");
        verticalLayoutAquisition->setContentsMargins(0, 0, 0, 0);
        labelSamplingFreq = new QLabel(layoutWidget1);
        labelSamplingFreq->setObjectName("labelSamplingFreq");

        verticalLayoutAquisition->addWidget(labelSamplingFreq);

        comboBoxSamplingFreq = new QComboBox(layoutWidget1);
        comboBoxSamplingFreq->setObjectName("comboBoxSamplingFreq");

        verticalLayoutAquisition->addWidget(comboBoxSamplingFreq);

        labelDownsamplingRate = new QLabel(layoutWidget1);
        labelDownsamplingRate->setObjectName("labelDownsamplingRate");

        verticalLayoutAquisition->addWidget(labelDownsamplingRate);

        comboBoxDownSampling = new QComboBox(layoutWidget1);
        comboBoxDownSampling->setObjectName("comboBoxDownSampling");

        verticalLayoutAquisition->addWidget(comboBoxDownSampling);

        checkBoxBurstAquiMode = new QCheckBox(layoutWidget1);
        checkBoxBurstAquiMode->setObjectName("checkBoxBurstAquiMode");

        verticalLayoutAquisition->addWidget(checkBoxBurstAquiMode);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        labelAquisitionTime = new QLabel(layoutWidget1);
        labelAquisitionTime->setObjectName("labelAquisitionTime");

        horizontalLayout_5->addWidget(labelAquisitionTime);

        lineEditAquisitionTime = new QLineEdit(layoutWidget1);
        lineEditAquisitionTime->setObjectName("lineEditAquisitionTime");

        horizontalLayout_5->addWidget(lineEditAquisitionTime);

        labelAquisitionTimeUnit = new QLabel(layoutWidget1);
        labelAquisitionTimeUnit->setObjectName("labelAquisitionTimeUnit");

        horizontalLayout_5->addWidget(labelAquisitionTimeUnit);


        verticalLayoutAquisition->addLayout(horizontalLayout_5);

        dialAquisitionTime = new QDial(layoutWidget1);
        dialAquisitionTime->setObjectName("dialAquisitionTime");
        dialAquisitionTime->setMinimum(10);
        dialAquisitionTime->setMaximum(300);
        dialAquisitionTime->setSingleStep(10);
        dialAquisitionTime->setValue(10);
        dialAquisitionTime->setSliderPosition(10);
        dialAquisitionTime->setOrientation(Qt::Horizontal);
        dialAquisitionTime->setInvertedAppearance(false);
        dialAquisitionTime->setInvertedControls(false);
        dialAquisitionTime->setWrapping(false);
        dialAquisitionTime->setNotchesVisible(false);

        verticalLayoutAquisition->addWidget(dialAquisitionTime);

        checkBoxSDCardEn = new QCheckBox(layoutWidget1);
        checkBoxSDCardEn->setObjectName("checkBoxSDCardEn");

        verticalLayoutAquisition->addWidget(checkBoxSDCardEn);

        checkBoxTransmitViaComm = new QCheckBox(layoutWidget1);
        checkBoxTransmitViaComm->setObjectName("checkBoxTransmitViaComm");

        verticalLayoutAquisition->addWidget(checkBoxTransmitViaComm);

        groupBoxAquisitionFile = new QGroupBox(toolBoxPageAquisition);
        groupBoxAquisitionFile->setObjectName("groupBoxAquisitionFile");
        groupBoxAquisitionFile->setEnabled(false);
        groupBoxAquisitionFile->setGeometry(QRect(10, 300, 171, 91));
        verticalLayout_2 = new QVBoxLayout(groupBoxAquisitionFile);
        verticalLayout_2->setObjectName("verticalLayout_2");
        labelDirPath = new QLabel(groupBoxAquisitionFile);
        labelDirPath->setObjectName("labelDirPath");

        verticalLayout_2->addWidget(labelDirPath);

        pushButtonSelectFilePath = new QPushButton(groupBoxAquisitionFile);
        pushButtonSelectFilePath->setObjectName("pushButtonSelectFilePath");

        verticalLayout_2->addWidget(pushButtonSelectFilePath);

        verticalLayout_2->setStretch(0, 1);
        groupBoxAquisitionControl = new QGroupBox(toolBoxPageAquisition);
        groupBoxAquisitionControl->setObjectName("groupBoxAquisitionControl");
        groupBoxAquisitionControl->setEnabled(false);
        groupBoxAquisitionControl->setGeometry(QRect(10, 395, 171, 51));
        layoutWidget2 = new QWidget(groupBoxAquisitionControl);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(0, 20, 171, 28));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButtonStartAqui = new QPushButton(layoutWidget2);
        pushButtonStartAqui->setObjectName("pushButtonStartAqui");

        horizontalLayout_4->addWidget(pushButtonStartAqui);

        pushButtonStopAqui = new QPushButton(layoutWidget2);
        pushButtonStopAqui->setObjectName("pushButtonStopAqui");

        horizontalLayout_4->addWidget(pushButtonStopAqui);

        toolBox->addItem(toolBoxPageAquisition, QString::fromUtf8("Aquisition Settings"));

        horizontalLayout->addWidget(toolBox);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 565, 534));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        graphicsView = new QGraphicsView(scrollAreaWidgetContents);
        graphicsView->setObjectName("graphicsView");

        verticalLayout->addWidget(graphicsView);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);

        MicrophoneArrayWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MicrophoneArrayWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MicrophoneArrayWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MicrophoneArrayWindow);
        statusbar->setObjectName("statusbar");
        MicrophoneArrayWindow->setStatusBar(statusbar);

        retranslateUi(MicrophoneArrayWindow);

        QMetaObject::connectSlotsByName(MicrophoneArrayWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MicrophoneArrayWindow)
    {
        MicrophoneArrayWindow->setWindowTitle(QCoreApplication::translate("MicrophoneArrayWindow", "MicrophoneArray", nullptr));
        groupBoxEthernet->setTitle(QCoreApplication::translate("MicrophoneArrayWindow", "Ethernet", nullptr));
        labelPortEthernet->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Port:", nullptr));
        pushButtonConnectEthernet->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Connect", nullptr));
        pushButtonDisconnectEthernet->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Disconnect", nullptr));
        groupBoxSerial->setTitle(QCoreApplication::translate("MicrophoneArrayWindow", "Serial Port", nullptr));
        labelSerial->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Serial Port:", nullptr));
        PushButtonConnectSerial->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Connect", nullptr));
        pushButtonDisconnectSerial->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Disconnect", nullptr));
        groupBox_Usb->setTitle(QCoreApplication::translate("MicrophoneArrayWindow", "USB", nullptr));
        labelUsb->setText(QCoreApplication::translate("MicrophoneArrayWindow", "USB:", nullptr));
        portPushButtonConfirm_5->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Connect", nullptr));
        portPushButtonConfirm_6->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Disconnect", nullptr));
        toolBox->setItemText(toolBox->indexOf(toolBoxPageCommunication), QCoreApplication::translate("MicrophoneArrayWindow", "Communication Settings", nullptr));
        groupBoxBoardStatus->setTitle(QCoreApplication::translate("MicrophoneArrayWindow", "Microphone Board Status", nullptr));
        labelHwVer->setText(QCoreApplication::translate("MicrophoneArrayWindow", "HW ver:", nullptr));
        labelFwVer->setText(QCoreApplication::translate("MicrophoneArrayWindow", "FW ver:", nullptr));
        labelIpAddr->setText(QCoreApplication::translate("MicrophoneArrayWindow", "IP: ", nullptr));
        groupBoxChannelEn->setTitle(QCoreApplication::translate("MicrophoneArrayWindow", "Channel Enable", nullptr));
        checkboxChannel1En->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Channel 1", nullptr));
        checkboxChannel2En->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Channel 2", nullptr));
        checkboxChannel3En->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Channel 3", nullptr));
        checkboxChannel4En->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Channel 4", nullptr));
        groupBoxChannelDisp->setTitle(QCoreApplication::translate("MicrophoneArrayWindow", "Channel Display", nullptr));
        checkboxChannel1Disp->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Channel 1", nullptr));
        checkboxChannel2Disp->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Channel 2", nullptr));
        checkboxChannel3Disp->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Channel 3", nullptr));
        checkboxChannel4Disp->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Channel 4", nullptr));
        groupBoxTimeSync->setTitle(QCoreApplication::translate("MicrophoneArrayWindow", "Time Setting", nullptr));
        pushButtonSync->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Syncronize", nullptr));
        labelCurrTime->setText(QCoreApplication::translate("MicrophoneArrayWindow", "TimeInfo", nullptr));
        toolBox->setItemText(toolBox->indexOf(toolBoxPageGeneral), QCoreApplication::translate("MicrophoneArrayWindow", "General Settings", nullptr));
        groupBoxAquisition->setTitle(QCoreApplication::translate("MicrophoneArrayWindow", "Aquisition", nullptr));
        labelSamplingFreq->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Sampling Frequency", nullptr));
        labelDownsamplingRate->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Downsampling rate", nullptr));
        checkBoxBurstAquiMode->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Burst Mode", nullptr));
        labelAquisitionTime->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Time:", nullptr));
        labelAquisitionTimeUnit->setText(QCoreApplication::translate("MicrophoneArrayWindow", "s", nullptr));
        checkBoxSDCardEn->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Enable SD card", nullptr));
        checkBoxTransmitViaComm->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Transmit data via \n"
"communication interface", nullptr));
        groupBoxAquisitionFile->setTitle(QCoreApplication::translate("MicrophoneArrayWindow", "Aquisition File", nullptr));
        labelDirPath->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Filepath", nullptr));
        pushButtonSelectFilePath->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Select File ...", nullptr));
        groupBoxAquisitionControl->setTitle(QCoreApplication::translate("MicrophoneArrayWindow", "Aquisition Control", nullptr));
        pushButtonStartAqui->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Start", nullptr));
        pushButtonStopAqui->setText(QCoreApplication::translate("MicrophoneArrayWindow", "Stop", nullptr));
        toolBox->setItemText(toolBox->indexOf(toolBoxPageAquisition), QCoreApplication::translate("MicrophoneArrayWindow", "Aquisition Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MicrophoneArrayWindow: public Ui_MicrophoneArrayWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MICROPHONEARRAYWINDOW_H
