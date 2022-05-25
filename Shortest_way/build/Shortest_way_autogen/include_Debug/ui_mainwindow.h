/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QGridLayout *gridLayout_2;
    QPushButton *create_button;
    QTableWidget *table;
    QTextBrowser *edit_answer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edit_count;
    QPushButton *get_answer_button;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *edit_start;
    QWidget *tab2;
    QGridLayout *gridLayout_3;
    QTextBrowser *logs;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 405);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        gridLayout_2 = new QGridLayout(tab1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        create_button = new QPushButton(tab1);
        create_button->setObjectName(QString::fromUtf8("create_button"));
        create_button->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(create_button, 2, 0, 1, 1);

        table = new QTableWidget(tab1);
        table->setObjectName(QString::fromUtf8("table"));

        gridLayout_2->addWidget(table, 0, 1, 6, 1);

        edit_answer = new QTextBrowser(tab1);
        edit_answer->setObjectName(QString::fromUtf8("edit_answer"));
        edit_answer->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(edit_answer, 4, 0, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tab1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(50, 20));

        horizontalLayout->addWidget(label);

        edit_count = new QLineEdit(tab1);
        edit_count->setObjectName(QString::fromUtf8("edit_count"));
        edit_count->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(edit_count);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        get_answer_button = new QPushButton(tab1);
        get_answer_button->setObjectName(QString::fromUtf8("get_answer_button"));
        get_answer_button->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(get_answer_button, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(tab1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(label_2);

        edit_start = new QLineEdit(tab1);
        edit_start->setObjectName(QString::fromUtf8("edit_start"));
        edit_start->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(edit_start);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        gridLayout_3 = new QGridLayout(tab2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        logs = new QTextBrowser(tab2);
        logs->setObjectName(QString::fromUtf8("logs"));

        gridLayout_3->addWidget(logs, 0, 0, 1, 1);

        tabWidget->addTab(tab2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        create_button->setText(QCoreApplication::translate("MainWindow", "Create table", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Count  : ", nullptr));
        get_answer_button->setText(QCoreApplication::translate("MainWindow", "Get answer", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Start :", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QCoreApplication::translate("MainWindow", "?", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QCoreApplication::translate("MainWindow", "Logs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
