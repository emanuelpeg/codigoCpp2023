#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QtGui>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->juego = new Juego();
    this->refresh();
    this->timer = new QTimer(this);
    QObject::connect(this->timer, SIGNAL(timeout()),this, SLOT(on_timer()));
    this->timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int valor = this->ui->spinBox->value();
    if (this->juego->estaBien(valor)) {
        QMessageBox::information(this,"Ganaste!!",
                                 "Tu puntaje es " + QString::number(juego->getPuntos()));
    } else {
        QMessageBox::warning(this,"Perdiste !!",
                                 "Tu puntaje es " + QString::number(juego->getPuntos()));
    }
    this->refresh();
}

void MainWindow::on_timer()
{
    int time = this->ui->lcdNumber->intValue();
    this->ui->lcdNumber->display(time + 1);
    if (time >= 5) {
        auto palette = this->ui->lcdNumber->palette();
        palette.setColor(palette.WindowText, QColor(255, 0, 0));
        this->ui->lcdNumber->setPalette(palette);
    }
    if (time >= 9) {
        this->on_pushButton_clicked();
    }
}

void MainWindow::refresh()
{
    this->ui->label->setText(QString::number(juego->getNro1()));
    this->ui->label_2->setText(QString::number(juego->getNro2()));
    this->ui->label_3->setText(QString::number(juego->getNro4()));
    this->ui->puntaje->setText(QString::number(juego->getPuntos()));
    this->ui->spinBox->setValue(0);

    auto palette = this->ui->lcdNumber->palette();
    palette.setColor(palette.WindowText, QColor(0, 0, 0));
    this->ui->lcdNumber->setPalette(palette);
    this->ui->lcdNumber->display(0);
}

