#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "vraag.h"
#include <QTcpServer>
#include <QTcpSocket>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    QList<vraag*> vragen;

    ~MainWindow();

private slots:
    void on_pushButton_clicked();


    void on_cancel_clicked();

    void on_newvraag_ok_clicked();

    void on_startserver_clicked();

    void newConnection();

    void GetIsBinnen();



private:
    Ui::MainWindow *ui;

    QTcpServer *server;

    QTcpSocket *clientConnection;
};

#endif // MAINWINDOW_H
