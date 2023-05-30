#include "ventana.h"
#include "ui_ventana.h"

Ventana::Ventana(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Ventana)
{
    ui->setupUi(this);
    this->ui->lcdNumber->display(this->ui->spinBox->value());
}

Ventana::~Ventana()
{
    delete ui;
}


void Ventana::on_spinBox_valueChanged(int arg1)
{
    this->ui->horizontalSlider->setValue(arg1);
    this->ui->lcdNumber->display(arg1);
}


void Ventana::on_horizontalSlider_valueChanged(int value)
{
    this->ui->spinBox->setValue(value);
    this->ui->lcdNumber->display(value);
}


void Ventana::on_pushButton_clicked()
{
    this->close();
}


void Ventana::on_pushButton_2_clicked()
{
    this->ui->spinBox->setValue(35);
    this->ui->lcdNumber->display(this->ui->spinBox->value());
}

