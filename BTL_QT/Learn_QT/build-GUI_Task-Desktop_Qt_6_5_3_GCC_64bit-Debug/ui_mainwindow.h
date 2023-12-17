/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *Mainbody;
    QHBoxLayout *horizontalLayout_3;
    QWidget *leftMenuSubContainer;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QToolButton *menu;
    QPushButton *processesBtn;
    QPushButton *performanceBtn;
    QPushButton *apphistoryBtn;
    QPushButton *startupusersBtn;
    QPushButton *usersBtn;
    QPushButton *detailsBtn;
    QPushButton *servicesBtn;
    QPushButton *settingBtn;
    QWidget *centralMenu;
    QHBoxLayout *horizontalLayout_7;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QToolButton *toolButton;
    QWidget *mainBodyContainer;
    QHBoxLayout *horizontalLayout_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1154, 649);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralwidget{ background-color: rgb(192, 191, 188);}	\n"
"\n"
"#leftMenuSubContainer{\n"
"	background-color: #1f232a;\n"
"}\n"
"QPushButton{\n"
"	text-align: left;\n"
"	padding: 5px 6px;\n"
"}\n"
"#frame{\n"
"	background-color: #16191d;\n"
"	border-radius: 10px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Mainbody = new QWidget(centralwidget);
        Mainbody->setObjectName("Mainbody");
        sizePolicy1.setHeightForWidth(Mainbody->sizePolicy().hasHeightForWidth());
        Mainbody->setSizePolicy(sizePolicy1);
        Mainbody->setMinimumSize(QSize(1154, 0));
        Mainbody->setStyleSheet(QString::fromUtf8("background-color: rgb(119, 118, 123);\n"
"background-color: rgb(239, 239, 239);\n"
"background-color: rgb(154, 153, 150);"));
        horizontalLayout_3 = new QHBoxLayout(Mainbody);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        leftMenuSubContainer = new QWidget(Mainbody);
        leftMenuSubContainer->setObjectName("leftMenuSubContainer");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(leftMenuSubContainer->sizePolicy().hasHeightForWidth());
        leftMenuSubContainer->setSizePolicy(sizePolicy2);
        horizontalLayout_2 = new QHBoxLayout(leftMenuSubContainer);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        groupBox_3 = new QGroupBox(leftMenuSubContainer);
        groupBox_3->setObjectName("groupBox_3");
        sizePolicy2.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy2);
        groupBox_3->setMinimumSize(QSize(1, 0));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: #1f232a;\n"
"background-color: rgb(222, 221, 218);"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(25, 10, 30, 25);
        menu = new QToolButton(groupBox_3);
        menu->setObjectName("menu");
        menu->setMinimumSize(QSize(50, 20));
        menu->setMaximumSize(QSize(50, 50));
        menu->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../icon/menu.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menu->setIcon(icon);
        menu->setIconSize(QSize(24, 24));
        menu->setAutoRepeatDelay(300);

        verticalLayout->addWidget(menu);

        processesBtn = new QPushButton(groupBox_3);
        processesBtn->setObjectName("processesBtn");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../icon/grid.svg"), QSize(), QIcon::Normal, QIcon::Off);
        processesBtn->setIcon(icon1);
        processesBtn->setIconSize(QSize(24, 24));
        processesBtn->setAutoRepeat(false);
        processesBtn->setAutoExclusive(false);

        verticalLayout->addWidget(processesBtn);

        performanceBtn = new QPushButton(groupBox_3);
        performanceBtn->setObjectName("performanceBtn");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../icon/zap.svg"), QSize(), QIcon::Normal, QIcon::Off);
        performanceBtn->setIcon(icon2);
        performanceBtn->setIconSize(QSize(24, 24));

        verticalLayout->addWidget(performanceBtn);

        apphistoryBtn = new QPushButton(groupBox_3);
        apphistoryBtn->setObjectName("apphistoryBtn");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../icon/pie-chart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        apphistoryBtn->setIcon(icon3);
        apphistoryBtn->setIconSize(QSize(24, 24));

        verticalLayout->addWidget(apphistoryBtn);

        startupusersBtn = new QPushButton(groupBox_3);
        startupusersBtn->setObjectName("startupusersBtn");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../icon/power.svg"), QSize(), QIcon::Normal, QIcon::Off);
        startupusersBtn->setIcon(icon4);
        startupusersBtn->setIconSize(QSize(24, 24));

        verticalLayout->addWidget(startupusersBtn);

        usersBtn = new QPushButton(groupBox_3);
        usersBtn->setObjectName("usersBtn");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../icon/user.svg"), QSize(), QIcon::Normal, QIcon::Off);
        usersBtn->setIcon(icon5);
        usersBtn->setIconSize(QSize(24, 24));

        verticalLayout->addWidget(usersBtn);

        detailsBtn = new QPushButton(groupBox_3);
        detailsBtn->setObjectName("detailsBtn");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../icon/align-justify.svg"), QSize(), QIcon::Normal, QIcon::Off);
        detailsBtn->setIcon(icon6);
        detailsBtn->setIconSize(QSize(24, 24));

        verticalLayout->addWidget(detailsBtn);

        servicesBtn = new QPushButton(groupBox_3);
        servicesBtn->setObjectName("servicesBtn");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../../icon/cpu.svg"), QSize(), QIcon::Normal, QIcon::Off);
        servicesBtn->setIcon(icon7);
        servicesBtn->setIconSize(QSize(24, 24));

        verticalLayout->addWidget(servicesBtn);

        settingBtn = new QPushButton(groupBox_3);
        settingBtn->setObjectName("settingBtn");
        settingBtn->setEnabled(true);
        settingBtn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../../icon/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        settingBtn->setIcon(icon8);
        settingBtn->setIconSize(QSize(24, 24));

        verticalLayout->addWidget(settingBtn);


        horizontalLayout_2->addWidget(groupBox_3, 0, Qt::AlignLeft);


        horizontalLayout_3->addWidget(leftMenuSubContainer, 0, Qt::AlignLeft);

        centralMenu = new QWidget(Mainbody);
        centralMenu->setObjectName("centralMenu");
        sizePolicy2.setHeightForWidth(centralMenu->sizePolicy().hasHeightForWidth());
        centralMenu->setSizePolicy(sizePolicy2);
        centralMenu->setStyleSheet(QString::fromUtf8("background-color: #1f232a;\n"
"background-color: rgb(192, 191, 188);\n"
"QPushButton {\n"
"    border: none;\n"
"};\n"
"background-color: rgb(154, 153, 150);"));
        horizontalLayout_7 = new QHBoxLayout(centralMenu);
        horizontalLayout_7->setSpacing(30);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_7->setContentsMargins(10, 20, 20, -1);
        frame = new QFrame(centralMenu);
        frame->setObjectName("frame");
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setStyleSheet(QString::fromUtf8("background-color: #1f232a;\n"
"background-color: rgb(222, 221, 218);\n"
"background-color: rgb(192, 191, 188);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_4->setContentsMargins(150, 40, 150, 40);
        label = new QLabel(frame);
        label->setObjectName("label");
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(label);


        horizontalLayout_7->addWidget(frame, 0, Qt::AlignRight|Qt::AlignTop);

        frame_3 = new QFrame(centralMenu);
        frame_3->setObjectName("frame_3");
        sizePolicy2.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy2);
        frame_3->setStyleSheet(QString::fromUtf8("background-color: #1f232a;\n"
"background-color: rgb(119, 118, 123);\n"
"border-color: rgb(255, 255, 255);\n"
"QPushButton {\n"
"    border: none;\n"
"};\n"
"QFrame {\n"
"	border: none;\n"
"}\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_3);
        horizontalLayout_8->setSpacing(50);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_8->setContentsMargins(75, 38, 20, 30);
        pushButton_2 = new QPushButton(frame_3);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy3);
        QFont font;
        font.setPointSize(13);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border: none;\n"
"}\n"
""));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../../icon/slash.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon9);

        horizontalLayout_8->addWidget(pushButton_2);

        pushButton_5 = new QPushButton(frame_3);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMaximumSize(QSize(135, 16777215));
        pushButton_5->setFont(font);
        pushButton_5->setLayoutDirection(Qt::LeftToRight);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"}\n"
""));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("../../icon/folder-plus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon10);

        horizontalLayout_8->addWidget(pushButton_5);

        toolButton = new QToolButton(frame_3);
        toolButton->setObjectName("toolButton");
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    border: none;\n"
"}\n"
"\n"
""));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("../../icon/more-horizontal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon11);
        toolButton->setIconSize(QSize(24, 24));

        horizontalLayout_8->addWidget(toolButton);


        horizontalLayout_7->addWidget(frame_3, 0, Qt::AlignRight|Qt::AlignTop);


        horizontalLayout_3->addWidget(centralMenu);

        mainBodyContainer = new QWidget(Mainbody);
        mainBodyContainer->setObjectName("mainBodyContainer");
        mainBodyContainer->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"QWidget{\n"
"    border: none;\n"
"};\n"
"border-color: rgb(255, 255, 255);\n"
""));
        horizontalLayout_5 = new QHBoxLayout(mainBodyContainer);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);

        horizontalLayout_3->addWidget(mainBodyContainer, 0, Qt::AlignTop);


        horizontalLayout->addWidget(Mainbody);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        menu->setToolTip(QCoreApplication::translate("MainWindow", "Menu", nullptr));
#endif // QT_CONFIG(tooltip)
        menu->setText(QString());
#if QT_CONFIG(tooltip)
        processesBtn->setToolTip(QCoreApplication::translate("MainWindow", "Processes", nullptr));
#endif // QT_CONFIG(tooltip)
        processesBtn->setText(QCoreApplication::translate("MainWindow", "Processes", nullptr));
#if QT_CONFIG(tooltip)
        performanceBtn->setToolTip(QCoreApplication::translate("MainWindow", "Performance", nullptr));
#endif // QT_CONFIG(tooltip)
        performanceBtn->setText(QCoreApplication::translate("MainWindow", "Performance", nullptr));
#if QT_CONFIG(tooltip)
        apphistoryBtn->setToolTip(QCoreApplication::translate("MainWindow", "App history", nullptr));
#endif // QT_CONFIG(tooltip)
        apphistoryBtn->setText(QCoreApplication::translate("MainWindow", "App history", nullptr));
#if QT_CONFIG(tooltip)
        startupusersBtn->setToolTip(QCoreApplication::translate("MainWindow", "Startup apps", nullptr));
#endif // QT_CONFIG(tooltip)
        startupusersBtn->setText(QCoreApplication::translate("MainWindow", "Startup apps", nullptr));
#if QT_CONFIG(tooltip)
        usersBtn->setToolTip(QCoreApplication::translate("MainWindow", "Users", nullptr));
#endif // QT_CONFIG(tooltip)
        usersBtn->setText(QCoreApplication::translate("MainWindow", "Users", nullptr));
#if QT_CONFIG(tooltip)
        detailsBtn->setToolTip(QCoreApplication::translate("MainWindow", "Details", nullptr));
#endif // QT_CONFIG(tooltip)
        detailsBtn->setText(QCoreApplication::translate("MainWindow", "Details", nullptr));
#if QT_CONFIG(tooltip)
        servicesBtn->setToolTip(QCoreApplication::translate("MainWindow", "Services", nullptr));
#endif // QT_CONFIG(tooltip)
        servicesBtn->setText(QCoreApplication::translate("MainWindow", "Services", nullptr));
#if QT_CONFIG(tooltip)
        settingBtn->setToolTip(QCoreApplication::translate("MainWindow", "Settings", nullptr));
#endif // QT_CONFIG(tooltip)
        settingBtn->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">PROCESSES</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_2->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton_2->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "End task", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_5->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton_5->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-style:italic;\"><br/></span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Run new task", nullptr));
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
