#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTableWidgetItem>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_create_button_clicked()
{
    count = ui->edit_count->text().toInt();

    ui->table->setRowCount(count+1);
    ui->table->setColumnCount(count+1);
/*
    for (int i = 1;i<count+1;i+=1)
    {
        QString str_item = "X";
        QTableWidgetItem item(str_item);
    }
    */
}

