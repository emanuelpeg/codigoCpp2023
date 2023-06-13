#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

void MainWindow::setLevel()
{
    this->l1.clear();
    this->l2.clear();
    this->l3.clear();
    for (int i = 0; i< this->level; i++) {
        this->l1.add(i);
        this->l2.add(i);
        this->l3.add(i);
    }
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setLevel();

    this->timer1 = new QTimer(this);
    this->timer2 = new QTimer(this);
    this->timer3 = new QTimer(this);

    connect(this->timer1, SIGNAL(timeout()), this, SLOT(onTimer1()));
    connect(this->timer2, SIGNAL(timeout()), this, SLOT(onTimer2()));
    connect(this->timer3, SIGNAL(timeout()), this, SLOT(onTimer3()));
    this->ui->score->setText(QString::number(this->score));
    this->ui->spinBox->setMaximum(this->score);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onTimer1()
{
    int aux = this->ui->lcdNumber->intValue();
    int aux2 = this->ui->lcdNumber_2->intValue();
    this->ui->lcdNumber->display(this->l1.next());
    this->ui->lcdNumber_2->display(aux);
    this->ui->lcdNumber_3->display(aux2);
    this->timer1->setInterval(this->timer1->interval() + 20);
    if (this->timer1->interval() > 700) {
        this->timer1->stop();
        this->verificar();
    }
}

void MainWindow::onTimer2()
{
    int aux = this->ui->lcdNumber_4->intValue();
    int aux2 = this->ui->lcdNumber_5->intValue();
    this->ui->lcdNumber_4->display(this->l2.next());
    this->ui->lcdNumber_5->display(aux);
    this->ui->lcdNumber_6->display(aux2);
    this->timer2->setInterval(this->timer2->interval() + 25);
    if (this->timer2->interval() > 500) {
        this->timer2->stop();
        this->verificar();
    }
}

void MainWindow::onTimer3()
{
    int aux = this->ui->lcdNumber_7->intValue();
    int aux2 = this->ui->lcdNumber_8->intValue();
    this->ui->lcdNumber_7->display(this->l3.next());
    this->ui->lcdNumber_8->display(aux);
    this->ui->lcdNumber_9->display(aux2);
    this->timer3->setInterval(this->timer3->interval() + 30);
    if (this->timer3->interval() > 800) {
        this->timer3->stop();
        this->verificar();
    }
}
void MainWindow::on_pushButton_clicked()
{
    srand(time(NULL));
    int t1 = rand() % 50 + 1;
    int t2 = rand() % 100 + 1;
    int t3 = rand() % 80 + 1;
    this->timer1->setInterval(t1);
    this->timer2->setInterval(t2);
    this->timer3->setInterval(t3);
    this->timer1->start();
    this->timer2->start();
    this->timer3->start();
    this->ui->pushButton->setEnabled(false);
    this->ui->pushButton_2->setEnabled(false);
    this->ui->spinBox->setEnabled(false);
    this->ui->menulevel->setEnabled(false);
}

void MainWindow::verificar()
{
    if(!this->timer1->isActive()
            && !this->timer2->isActive()
            && !this->timer3->isActive()) {
        if ((this->ui->lcdNumber_2->intValue() ==
                this->ui->lcdNumber_5->intValue())
                &&
                (this->ui->lcdNumber_5->intValue()   ==
                this->ui->lcdNumber_8->intValue())) {
            QMessageBox::information(this,"Ganaste", "ganaste");
            this->score = this->score +
                    this->bet * (this->ui->lcdNumber_5->intValue() +
                                 5 + this->level);
        } else if ((this->ui->lcdNumber->intValue() ==
                       this->ui->lcdNumber_5->intValue())
                       &&
                       (this->ui->lcdNumber_5->intValue()   ==
                       this->ui->lcdNumber_9->intValue())) {
                   QMessageBox::information(this,"Ganaste", "Pero mucho...");
                   this->score = this->score +
                           this->bet * (this->ui->lcdNumber_5->intValue() +
                                        10 + this->level);
               } else if ((this->ui->lcdNumber_3->intValue() ==
                      this->ui->lcdNumber_5->intValue())
                      &&
                      (this->ui->lcdNumber_5->intValue()   ==
                      this->ui->lcdNumber_7->intValue())) {
                  QMessageBox::information(this,"Ganaste", "Pero no tanto...");
                  this->score = this->score +
                          this->bet * (this->ui->lcdNumber_5->intValue() +
                                       this->level);
              } else {
                QMessageBox::warning(this,"Perdiste", "Perdiste");
              }
        this->bet = 0;
        this->ui->spinBox->setMaximum(this->score);
        this->ui->spinBox->setValue(0);
        this->ui->spinBox->setEnabled(true);
        this->ui->score->setText(QString::number(this->score));
        this->ui->pushButton->setEnabled(true);
        this->ui->pushButton_2->setEnabled(true);
        this->ui->menulevel->setEnabled(true);
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    this->bet = this->ui->spinBox->value();
    this->score = this->score - this->bet;
    this->ui->score->setText(QString::number(this->score));
    this->ui->pushButton_2->setEnabled(false);
    this->ui->spinBox->setEnabled(false);
}


void MainWindow::on_actioneasy_triggered()
{
    this->level = 3;
    setLevel();
}


void MainWindow::on_actionmedium_triggered()
{
    this->level = 6;
    setLevel();
}


void MainWindow::on_actionhard_triggered()
{
    this->level = 10;
    setLevel();
}

