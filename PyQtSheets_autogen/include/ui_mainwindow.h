/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QComboBox *comboBox_7;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QTextEdit *textEdit_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_13;
    QTextEdit *textEdit_9;
    QLabel *label_6;
    QTextEdit *textEdit_4;
    QLabel *label_7;
    QTextEdit *textEdit_5;
    QLabel *label_8;
    QTextEdit *textEdit_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QComboBox *comboBox_3;
    QLabel *label_10;
    QComboBox *comboBox_4;
    QLabel *label_11;
    QTextEdit *textEdit_7;
    QLabel *label_12;
    QTextEdit *textEdit_8;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(459, 851);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(21, 18, 412, 791));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setScaledContents(false);

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(350, 0));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(350, 0));

        horizontalLayout_3->addWidget(comboBox_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setScaledContents(false);

        horizontalLayout_4->addWidget(label_2);

        comboBox_7 = new QComboBox(widget);
        comboBox_7->setObjectName(QStringLiteral("comboBox_7"));
        comboBox_7->setMinimumSize(QSize(200, 0));

        horizontalLayout_4->addWidget(comboBox_7);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        horizontalLayout_4->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        textEdit_3 = new QTextEdit(widget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setMinimumSize(QSize(300, 0));
        textEdit_3->setMaximumSize(QSize(200, 27));

        horizontalLayout_5->addWidget(textEdit_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_6->addWidget(label_13);

        textEdit_9 = new QTextEdit(widget);
        textEdit_9->setObjectName(QStringLiteral("textEdit_9"));
        textEdit_9->setMaximumSize(QSize(16777215, 27));

        horizontalLayout_6->addWidget(textEdit_9);


        verticalLayout->addLayout(horizontalLayout_6);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        textEdit_4 = new QTextEdit(widget);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setMaximumSize(QSize(16777215, 75));

        verticalLayout->addWidget(textEdit_4);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        textEdit_5 = new QTextEdit(widget);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setMaximumSize(QSize(16777215, 150));

        verticalLayout->addWidget(textEdit_5);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);

        textEdit_6 = new QTextEdit(widget);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));
        textEdit_6->setMaximumSize(QSize(16777215, 150));

        verticalLayout->addWidget(textEdit_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setScaledContents(false);

        horizontalLayout_8->addWidget(label_9);

        comboBox_3 = new QComboBox(widget);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        horizontalLayout_8->addWidget(comboBox_3);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setScaledContents(false);

        horizontalLayout_8->addWidget(label_10);

        comboBox_4 = new QComboBox(widget);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        horizontalLayout_8->addWidget(comboBox_4);


        verticalLayout->addLayout(horizontalLayout_8);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout->addWidget(label_11);

        textEdit_7 = new QTextEdit(widget);
        textEdit_7->setObjectName(QStringLiteral("textEdit_7"));
        textEdit_7->setMinimumSize(QSize(0, 25));
        textEdit_7->setMaximumSize(QSize(16777215, 27));

        verticalLayout->addWidget(textEdit_7);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout->addWidget(label_12);

        textEdit_8 = new QTextEdit(widget);
        textEdit_8->setObjectName(QStringLiteral("textEdit_8"));
        textEdit_8->setMinimumSize(QSize(0, 100));
        textEdit_8->setMaximumSize(QSize(16777215, 100));

        verticalLayout->addWidget(textEdit_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_7->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_7->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_7);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 459, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Test Case Creator", nullptr));
        label->setText(QApplication::translate("MainWindow", "Author:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Sheet:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Type:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Test case ID:", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Functionality", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Test Description:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Steps:", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Expected Result:", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Valid TCs:", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Automation:", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Related Issue:", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Note:", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Okay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
