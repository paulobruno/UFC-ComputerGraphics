#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setDefault()
{
    ui->checkBoxChessboard->setChecked(true);
    ui->checkBoxPawn->setChecked(true);
    ui->horizontalScrollBar->setValue(0);
    ui->verticalScrollBar->setValue(-90);
}