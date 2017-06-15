#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QDebug>
#include <QStringList>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_cancel_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_newvraag_ok_clicked()
{
    vraag* temp = new vraag();

    temp->vraagquote = ui->vraagline->text();

    temp->juistevraag = ui->juistant->value();



    QFile data("fotos/" + ui->ant1line->text());

    if (!data.open(QIODevice::ReadOnly))
        {
            qDebug() << "probleem openen file";
        }
    else
        {
            qDebug() << "file opent";
        }
        temp->antwoorden[0] = data.readAll();
        data.close();
        qDebug() << temp->antwoorden[0].length();


    QFile data2("fotos/" + ui->ant2line->text());

    if (!data2.open(QIODevice::ReadOnly))
        {
            qDebug() << "probleem openen file";
        }
    else
        {
            qDebug() << "file opent";
        }
        temp->antwoorden[1] = data2.readAll();
        data2.close();

    QFile data3("fotos/" + ui->ant3line->text());

    if (!data3.open(QIODevice::ReadOnly))
        {
            qDebug() << "probleem openen file";
        }
    else
        {
            qDebug() << "file opent";
        }
        temp->antwoorden[2] = data3.readAll();
        data3.close();

    for(int i = 0; i<3;i++)
    {
        if(i == (temp->juistevraag)-1)
        {
            temp->antwoorden[i].append(0x0020);
            temp->antwoorden[i].append(0x0040);

        }
        else
        {
            temp->antwoorden[i].append(0x0001);
            temp->antwoorden[i].append(0x0001);
        }
    }

    vragen.append(temp);
    ui->stackedWidget->setCurrentIndex(0);
    ui->vragen->addItem(temp->vraagquote);

}


void MainWindow::on_startserver_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    server = new QTcpServer(this);

    if(!server->listen(QHostAddress::Any,1234))
    {
        ui->info->appendPlainText("serverkapoet!\n");
    }
    else
    {
        ui->info->appendPlainText("server gestart\n");
        connect(server,SIGNAL(newConnection()),this,SLOT(newConnection()));
    }
}

void MainWindow::newConnection()
{
    clientConnection = server->nextPendingConnection();
    connect(clientConnection, SIGNAL(readyRead()), this, SLOT(GetIsBinnen()));
    ui->info->appendPlainText("connectie\n");
}

void MainWindow::GetIsBinnen()
{
    QString request = clientConnection->readAll();

    ui->info->appendPlainText(request);
    ui->info->appendPlainText("\n");

    QStringList lijst = request.split('/');


    if(lijst[0] == "verbind")
    {
        clientConnection->write("verbonden");
    }
    else if(lijst[0] == "vraag")
    {
        if(lijst[1].toInt() >= vragen.length())
        {
            clientConnection->write("uit");
        }
        else
        {
        QString vraagtemp = vragen[lijst[1].toInt()]->vraagquote;
        clientConnection->write(vraagtemp.toUtf8());
        }
    }
    else if(lijst[0] == "foto0")
    {
        clientConnection->write(vragen[lijst[1].toInt()]->antwoorden[0]);
    }
    else if(lijst[0] == "foto1")
    {
        clientConnection->write(vragen[lijst[1].toInt()]->antwoorden[1]);
    }
    else if(lijst[0] == "foto2")
    {
        clientConnection->write(vragen[lijst[1].toInt()]->antwoorden[2]);
    }

    //clientConnection->disconnectFromHost();
}



