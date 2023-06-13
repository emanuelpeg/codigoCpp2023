#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "listacircular.cpp"
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onTimer1();
    void onTimer2();
    void onTimer3();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_actioneasy_triggered();

    void on_actionmedium_triggered();

    void on_actionhard_triggered();

private:
    Ui::MainWindow *ui;
    ListaCircular<int> l1;
    ListaCircular<int> l2;
    ListaCircular<int> l3;
    QTimer* timer1;
    QTimer* timer2;
    QTimer* timer3;
    void verificar();
    int score = 100;
    int bet = 0;
    int level = 3;

    void setLevel();
};
#endif // MAINWINDOW_H
