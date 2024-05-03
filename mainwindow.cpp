#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->buttonWindow1, &QPushButton::clicked, this, &MainWindow::openDialog);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openDialog()
{
    Dialog *window1 = new Dialog(this);
    window1->show();
}


