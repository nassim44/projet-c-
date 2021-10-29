#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "stade.h"
#include <QMainWindow>

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
    void on_pb_ajouter_clicked();

    //void on_pushButton_supprimer_clicked();

private:
    Ui::MainWindow *ui;
    Stade S;
};
#endif // MAINWINDOW_H
