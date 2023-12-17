#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //this->setWindowFlags(Qt::FramelessWindowHint);
    ui->setupUi(this);
    //connect(ui->minimizeButton, SIGNAL(clicked()), this, SLOT(onMinimizeButtonClicked()));
    //connect(ui->restoreButton, SIGNAL(clicked()), this, SLOT(onRestoreButtonClicked()));
    //connect(ui->closeButton, SIGNAL(clicked()), this, SLOT(onCloseButtonClicked()));
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onMinimizeButtonClicked()
{
    this->showMinimized();
}

void MainWindow::onRestoreButtonClicked()
{
    if (this->isMaximized()) {
        this->showNormal();
    } else {
        this->showMaximized();
    }
    this ->updateGeometry();
    this ->centralWidget()->layout()->activate();
}

void MainWindow::onCloseButtonClicked()
{
    this->close();
}
