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
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
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
    QWidget *mainBodyContainer;
    QWidget *leftMenuSubContainer;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QPushButton *performanceBtn;
    QPushButton *apphistoryBtn;
    QPushButton *startupusersBtn;
    QPushButton *usersBtn;
    QPushButton *detailsBtn;
    QPushButton *servicesBtn;
    QPushButton *settingBtn;
    QPushButton *processesBtn;
    QToolButton *menu;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QToolButton *toolButton;
    QGroupBox *groupBox;
    QLabel *label_3;
    QMenuBar *menubar;
    QMenu *menuTask_Manager;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1154, 658);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"#centralwidget{\n"
"	background-color: #1f232a;\n"
"}\n"
"#leftMenuSubContainer{\n"
"	background-color: #1f232a;\n"
"}\n"
"QPushButton{\n"
"	text-align: left;\n"
"	padding: 2px 3px;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mainBodyContainer = new QWidget(centralwidget);
        mainBodyContainer->setObjectName("mainBodyContainer");
        leftMenuSubContainer = new QWidget(mainBodyContainer);
        leftMenuSubContainer->setObjectName("leftMenuSubContainer");
        leftMenuSubContainer->setGeometry(QRect(0, 0, 201, 641));
        verticalLayout_2 = new QVBoxLayout(leftMenuSubContainer);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_3 = new QGroupBox(leftMenuSubContainer);
        groupBox_3->setObjectName("groupBox_3");
        performanceBtn = new QPushButton(groupBox_3);
        performanceBtn->setObjectName("performanceBtn");
        performanceBtn->setGeometry(QRect(10, 122, 150, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../icon/zap.svg"), QSize(), QIcon::Normal, QIcon::Off);
        performanceBtn->setIcon(icon);
        performanceBtn->setIconSize(QSize(24, 24));
        apphistoryBtn = new QPushButton(groupBox_3);
        apphistoryBtn->setObjectName("apphistoryBtn");
        apphistoryBtn->setGeometry(QRect(10, 173, 150, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../icon/pie-chart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        apphistoryBtn->setIcon(icon1);
        apphistoryBtn->setIconSize(QSize(24, 24));
        startupusersBtn = new QPushButton(groupBox_3);
        startupusersBtn->setObjectName("startupusersBtn");
        startupusersBtn->setGeometry(QRect(10, 224, 150, 40));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../icon/power.svg"), QSize(), QIcon::Normal, QIcon::Off);
        startupusersBtn->setIcon(icon2);
        startupusersBtn->setIconSize(QSize(24, 24));
        usersBtn = new QPushButton(groupBox_3);
        usersBtn->setObjectName("usersBtn");
        usersBtn->setGeometry(QRect(10, 275, 150, 40));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../icon/user.svg"), QSize(), QIcon::Normal, QIcon::Off);
        usersBtn->setIcon(icon3);
        usersBtn->setIconSize(QSize(24, 24));
        detailsBtn = new QPushButton(groupBox_3);
        detailsBtn->setObjectName("detailsBtn");
        detailsBtn->setGeometry(QRect(10, 326, 150, 40));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../icon/align-justify.svg"), QSize(), QIcon::Normal, QIcon::Off);
        detailsBtn->setIcon(icon4);
        detailsBtn->setIconSize(QSize(24, 24));
        servicesBtn = new QPushButton(groupBox_3);
        servicesBtn->setObjectName("servicesBtn");
        servicesBtn->setGeometry(QRect(10, 377, 150, 40));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../icon/cpu.svg"), QSize(), QIcon::Normal, QIcon::Off);
        servicesBtn->setIcon(icon5);
        servicesBtn->setIconSize(QSize(24, 24));
        settingBtn = new QPushButton(groupBox_3);
        settingBtn->setObjectName("settingBtn");
        settingBtn->setGeometry(QRect(10, 580, 150, 40));
        settingBtn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../icon/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        settingBtn->setIcon(icon6);
        settingBtn->setIconSize(QSize(24, 24));
        processesBtn = new QPushButton(groupBox_3);
        processesBtn->setObjectName("processesBtn");
        processesBtn->setGeometry(QRect(10, 71, 150, 40));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../../icon/grid.svg"), QSize(), QIcon::Normal, QIcon::Off);
        processesBtn->setIcon(icon7);
        processesBtn->setIconSize(QSize(24, 24));
        processesBtn->setAutoRepeat(false);
        processesBtn->setAutoExclusive(false);
        menu = new QToolButton(groupBox_3);
        menu->setObjectName("menu");
        menu->setGeometry(QRect(10, 10, 50, 40));
        menu->setMinimumSize(QSize(50, 20));
        menu->setMaximumSize(QSize(100, 100));
        menu->setStyleSheet(QString::fromUtf8(""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../../icon/menu.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menu->setIcon(icon8);
        menu->setIconSize(QSize(24, 24));
        menu->setAutoRepeatDelay(300);

        verticalLayout_2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(mainBodyContainer);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(200, 10, 951, 91));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 92, 100);"));
        pushButton_5 = new QPushButton(groupBox_4);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(520, 20, 150, 45));
        QFont font;
        font.setPointSize(13);
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("border: none"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../../icon/folder-plus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon9);
        pushButton_2 = new QPushButton(groupBox_4);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(710, 20, 150, 45));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("border: none\n"
""));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("../../icon/slash.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon10);
        toolButton = new QToolButton(groupBox_4);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(890, 20, 41, 45));
        toolButton->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: none;\n"
"background-color: transparent;\n"
""));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("../../icon/more-horizontal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon11);
        toolButton->setIconSize(QSize(24, 24));
        groupBox = new QGroupBox(groupBox_4);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 311, 91));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 10, 181, 71));
        QPalette palette;
        QBrush brush(QColor(94, 92, 100, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_3->setPalette(palette);
        QFont font1;
        font1.setPointSize(16);
        label_3->setFont(font1);
        label_3->setMouseTracking(true);

        horizontalLayout->addWidget(mainBodyContainer);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1154, 22));
        menuTask_Manager = new QMenu(menubar);
        menuTask_Manager->setObjectName("menuTask_Manager");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuTask_Manager->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
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
#if QT_CONFIG(tooltip)
        processesBtn->setToolTip(QCoreApplication::translate("MainWindow", "Processes", nullptr));
#endif // QT_CONFIG(tooltip)
        processesBtn->setText(QCoreApplication::translate("MainWindow", "Processes", nullptr));
#if QT_CONFIG(tooltip)
        menu->setToolTip(QCoreApplication::translate("MainWindow", "Menu", nullptr));
#endif // QT_CONFIG(tooltip)
        menu->setText(QString());
        groupBox_4->setTitle(QString());
#if QT_CONFIG(tooltip)
        pushButton_5->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton_5->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-style:italic;\"><br/></span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Run new task", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_2->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton_2->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "End task", nullptr));
        toolButton->setText(QString());
        groupBox->setTitle(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; color:#ffffff;\">Processes</span></p></body></html>", nullptr));
        menuTask_Manager->setTitle(QCoreApplication::translate("MainWindow", "Task Manager", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
