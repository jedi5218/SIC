#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->addTab(new QWidget(),"123");
    ui->tabWidget->addTab(new QWidget(),"123");
    ui->tabWidget->addTab(new QWidget(),"123");
}

MainWindow::~MainWindow()
{
    delete ui;
}
