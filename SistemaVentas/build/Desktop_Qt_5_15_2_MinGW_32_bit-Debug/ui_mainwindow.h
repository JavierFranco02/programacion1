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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *wgtHeader;
    QHBoxLayout *horizontalLayout;
    QLabel *lblHeaderTittle;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSesion;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *wgtRightBar;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_7;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QPushButton *btnSettings;
    QWidget *widget_3;
    QHBoxLayout *layoutContent;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 800);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        wgtHeader = new QWidget(centralwidget);
        wgtHeader->setObjectName(QString::fromUtf8("wgtHeader"));
        wgtHeader->setMinimumSize(QSize(0, 50));
        wgtHeader->setMaximumSize(QSize(16777215, 50));
        wgtHeader->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);"));
        horizontalLayout = new QHBoxLayout(wgtHeader);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        lblHeaderTittle = new QLabel(wgtHeader);
        lblHeaderTittle->setObjectName(QString::fromUtf8("lblHeaderTittle"));

        horizontalLayout->addWidget(lblHeaderTittle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnSesion = new QPushButton(wgtHeader);
        btnSesion->setObjectName(QString::fromUtf8("btnSesion"));
        btnSesion->setMinimumSize(QSize(0, 37));
        btnSesion->setBaseSize(QSize(0, 0));
        btnSesion->setStyleSheet(QString::fromUtf8("padding: 0 10;"));

        horizontalLayout->addWidget(btnSesion);


        verticalLayout->addWidget(wgtHeader);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        wgtRightBar = new QWidget(widget);
        wgtRightBar->setObjectName(QString::fromUtf8("wgtRightBar"));
        wgtRightBar->setMaximumSize(QSize(70, 16777215));
        wgtRightBar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        verticalLayout_2 = new QVBoxLayout(wgtRightBar);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 10, 5, 10);
        pushButton_7 = new QPushButton(wgtRightBar);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(pushButton_7);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        pushButton_4 = new QPushButton(wgtRightBar);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(wgtRightBar);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(wgtRightBar);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(pushButton_5);

        pushButton_3 = new QPushButton(wgtRightBar);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(pushButton_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        btnSettings = new QPushButton(wgtRightBar);
        btnSettings->setObjectName(QString::fromUtf8("btnSettings"));
        btnSettings->setMinimumSize(QSize(0, 50));
        btnSettings->setBaseSize(QSize(0, 0));

        verticalLayout_2->addWidget(btnSettings);


        horizontalLayout_2->addWidget(wgtRightBar);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        layoutContent = new QHBoxLayout(widget_3);
        layoutContent->setObjectName(QString::fromUtf8("layoutContent"));
        layoutContent->setContentsMargins(0, 0, 0, 0);

        horizontalLayout_2->addWidget(widget_3);


        verticalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lblHeaderTittle->setText(QCoreApplication::translate("MainWindow", "Nebulous Nebula", nullptr));
        btnSesion->setText(QCoreApplication::translate("MainWindow", "Iniciar sesi\303\263n", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "home", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "client", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "products", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "purchase", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "graf", nullptr));
        btnSettings->setText(QCoreApplication::translate("MainWindow", "settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
