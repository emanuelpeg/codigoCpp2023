#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int cant = 15;
    this->botones = new QPushButton**[cant];
    for (int i = 0; i< cant; i++) {
        this->botones[i] = new QPushButton*[cant];
        for(int j =0; j < cant; j++) {
            this->botones[i][j] = new QPushButton(this);
            this->botones[i][j]->setText(
                        QString::number(i) + " " +
                        QString::number(j));
            this->ui->gridLayout->addWidget(this->botones[i][j], i, j);
            QObject::connect(this->botones[i][j],
                             &QPushButton::clicked,
                             [=](){
                this->botones[i][j]->setText(".");
            } );
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

