#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this); 


    this->setFixedSize(500,500);
    this->setWindowTitle("National Football League");
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Show help window
void MainWindow::on_pushButton_clicked()
{
    helpWindow = new HelpWindow();
    helpWindow->show();
}

//Show contact us window
void MainWindow::on_pushButton_2_clicked()
{
    contactUsWindow = new ContactUsWindow();
    contactUsWindow->show();
}

//Show capacity window
void MainWindow::on_pushButton_4_clicked()
{
    capacityWindow = new CapacityWindow();
    capacityWindow->show();
}

//Show login window
void MainWindow::on_pushButton_5_clicked()
{
    loginWindow = new LoginWindow();
    loginWindow->show();
}

//Show list window
void MainWindow::on_pushButton_3_clicked()
{
    listWindow = new ListWindow();
    listWindow->show();
}

