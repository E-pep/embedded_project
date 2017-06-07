/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *vragen;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *startserver;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *vraagline;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *ant1line;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *ant2line;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *ant3line;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpinBox *juistant;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *newvraag_ok;
    QPushButton *cancel;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_3;
    QPlainTextEdit *info;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1004, 577);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(140, 10, 503, 512));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        verticalLayout->addWidget(label);

        vragen = new QListWidget(page);
        vragen->setObjectName(QStringLiteral("vragen"));
        vragen->setMinimumSize(QSize(481, 371));

        verticalLayout->addWidget(vragen);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        startserver = new QPushButton(page);
        startserver->setObjectName(QStringLiteral("startserver"));

        verticalLayout->addWidget(startserver);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        vraagline = new QLineEdit(page_2);
        vraagline->setObjectName(QStringLiteral("vraagline"));
        vraagline->setMinimumSize(QSize(411, 0));

        horizontalLayout_2->addWidget(vraagline);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label_7 = new QLabel(page_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        ant1line = new QLineEdit(page_2);
        ant1line->setObjectName(QStringLiteral("ant1line"));

        horizontalLayout_3->addWidget(ant1line);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        ant2line = new QLineEdit(page_2);
        ant2line->setObjectName(QStringLiteral("ant2line"));

        horizontalLayout_4->addWidget(ant2line);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        ant3line = new QLineEdit(page_2);
        ant3line->setObjectName(QStringLiteral("ant3line"));

        horizontalLayout_5->addWidget(ant3line);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        juistant = new QSpinBox(page_2);
        juistant->setObjectName(QStringLiteral("juistant"));
        juistant->setMinimum(1);
        juistant->setMaximum(3);
        juistant->setValue(1);

        horizontalLayout_6->addWidget(juistant);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        newvraag_ok = new QPushButton(page_2);
        newvraag_ok->setObjectName(QStringLiteral("newvraag_ok"));

        horizontalLayout_7->addWidget(newvraag_ok);

        cancel = new QPushButton(page_2);
        cancel->setObjectName(QStringLiteral("cancel"));

        horizontalLayout_7->addWidget(cancel);


        verticalLayout_2->addLayout(horizontalLayout_7);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_3 = new QVBoxLayout(page_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        info = new QPlainTextEdit(page_3);
        info->setObjectName(QStringLiteral("info"));

        verticalLayout_3->addWidget(info);

        pushButton_3 = new QPushButton(page_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_3->addWidget(pushButton_3);

        stackedWidget->addWidget(page_3);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1004, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "vragen", 0));
        pushButton->setText(QApplication::translate("MainWindow", "voeg vraag toe", 0));
        startserver->setText(QApplication::translate("MainWindow", "start server", 0));
        label_2->setText(QApplication::translate("MainWindow", "vraag:", 0));
        label_7->setText(QApplication::translate("MainWindow", "vul in in vorm van: stubru_raw.raw", 0));
        label_3->setText(QApplication::translate("MainWindow", "antwoord 1", 0));
        label_4->setText(QApplication::translate("MainWindow", "antwoord 2", 0));
        label_5->setText(QApplication::translate("MainWindow", "antwoord 3", 0));
        label_6->setText(QApplication::translate("MainWindow", "juiste antwoord:", 0));
        newvraag_ok->setText(QApplication::translate("MainWindow", "ok ", 0));
        cancel->setText(QApplication::translate("MainWindow", "cancel", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
