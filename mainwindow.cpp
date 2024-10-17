#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mainEntry();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::mainEntry(){
    model = new QStandardItemModel(2, 2, this);
    model->setHeaderData(0, Qt::Horizontal, "Age");
    model->setHeaderData(1, Qt::Horizontal, "Total");
    ui->tableView->setModel(model);

    QList <int> listA, listB;

    listA << 25 << 30 << 45;
    listB << 30 << 45 << 50;

    // Display the data
    int rowCount = std::max(listA.size(), listB.size());
    model->setRowCount(rowCount); // Ensure enough rows for both lists

    for (int i = 0; i < rowCount; ++i) {
        QModelIndex indexA = model->index(i, 0, QModelIndex());
        QModelIndex indexB = model->index(i, 1, QModelIndex());

        if (i < listA.size())
            model->setData(indexA, listA[i]);
        if (i < listB.size())
            model->setData(indexB, listB[i]);
    }



}
