/********************************************************************************
** Form generated from reading UI file 'frmlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMLOGIN_H
#define UI_FRMLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmLogin
{
public:
    QWidget *page1;
    QLabel *lblLoginUser;
    QLabel *lblLoginTitle;
    QLabel *lblLoginUserIcon;
    QLineEdit *lneLoginUser;
    QLineEdit *lneLoginPassword;
    QLabel *lblLoginPassword;
    QPushButton *btnClose;
    QPushButton *btnLogin;
    QPushButton *btnGoRegister;
    QPushButton *btnLoginTogglePass;
    QWidget *page2;
    QPushButton *btnGoBack;
    QLabel *lblRegisterTitle;
    QLabel *lblRegisterUser;
    QLabel *label_7;
    QLineEdit *lneRegisterUser;
    QLabel *lblRegisterPassword;
    QLineEdit *lneRegisterPassword;
    QLabel *lblName;
    QLineEdit *lneName;
    QLabel *lblSurname;
    QLineEdit *lneSurname;
    QLabel *lblPhone;
    QLineEdit *lnePhone;
    QPushButton *btnRegister;
    QPushButton *btnRegisterTogglePass;

    void setupUi(QStackedWidget *FrmLogin)
    {
        if (FrmLogin->objectName().isEmpty())
            FrmLogin->setObjectName(QString::fromUtf8("FrmLogin"));
        FrmLogin->resize(450, 750);
        FrmLogin->setMinimumSize(QSize(450, 750));
        FrmLogin->setMaximumSize(QSize(450, 750));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(9);
        FrmLogin->setFont(font);
        FrmLogin->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"\n"
""));
        FrmLogin->setFrameShape(QFrame::Panel);
        FrmLogin->setFrameShadow(QFrame::Plain);
        FrmLogin->setLineWidth(5);
        page1 = new QWidget();
        page1->setObjectName(QString::fromUtf8("page1"));
        page1->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 85, 255);"));
        lblLoginUser = new QLabel(page1);
        lblLoginUser->setObjectName(QString::fromUtf8("lblLoginUser"));
        lblLoginUser->setGeometry(QRect(30, 330, 131, 31));
        QFont font1;
        font1.setPointSize(12);
        lblLoginUser->setFont(font1);
        lblLoginTitle = new QLabel(page1);
        lblLoginTitle->setObjectName(QString::fromUtf8("lblLoginTitle"));
        lblLoginTitle->setGeometry(QRect(10, 0, 261, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial Black"));
        font2.setPointSize(15);
        font2.setUnderline(true);
        lblLoginTitle->setFont(font2);
        lblLoginUserIcon = new QLabel(page1);
        lblLoginUserIcon->setObjectName(QString::fromUtf8("lblLoginUserIcon"));
        lblLoginUserIcon->setGeometry(QRect(120, 90, 190, 190));
        lblLoginUserIcon->setStyleSheet(QString::fromUtf8(""));
        lblLoginUserIcon->setFrameShape(QFrame::Box);
        lblLoginUserIcon->setScaledContents(false);
        lblLoginUserIcon->setAlignment(Qt::AlignCenter);
        lneLoginUser = new QLineEdit(page1);
        lneLoginUser->setObjectName(QString::fromUtf8("lneLoginUser"));
        lneLoginUser->setGeometry(QRect(70, 370, 311, 31));
        lneLoginPassword = new QLineEdit(page1);
        lneLoginPassword->setObjectName(QString::fromUtf8("lneLoginPassword"));
        lneLoginPassword->setGeometry(QRect(70, 480, 281, 31));
        lneLoginPassword->setEchoMode(QLineEdit::Password);
        lblLoginPassword = new QLabel(page1);
        lblLoginPassword->setObjectName(QString::fromUtf8("lblLoginPassword"));
        lblLoginPassword->setGeometry(QRect(30, 439, 151, 31));
        lblLoginPassword->setFont(font1);
        btnClose = new QPushButton(page1);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(410, 0, 31, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(12);
        btnClose->setFont(font3);
        btnLogin = new QPushButton(page1);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(150, 580, 151, 71));
        btnLogin->setFont(font3);
        btnLogin->setStyleSheet(QString::fromUtf8(""));
        btnGoRegister = new QPushButton(page1);
        btnGoRegister->setObjectName(QString::fromUtf8("btnGoRegister"));
        btnGoRegister->setGeometry(QRect(310, 710, 131, 29));
        btnGoRegister->setFont(font);
        btnLoginTogglePass = new QPushButton(page1);
        btnLoginTogglePass->setObjectName(QString::fromUtf8("btnLoginTogglePass"));
        btnLoginTogglePass->setGeometry(QRect(350, 480, 31, 31));
        btnLoginTogglePass->setCheckable(true);
        FrmLogin->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName(QString::fromUtf8("page2"));
        page2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        btnGoBack = new QPushButton(page2);
        btnGoBack->setObjectName(QString::fromUtf8("btnGoBack"));
        btnGoBack->setGeometry(QRect(0, 0, 31, 31));
        lblRegisterTitle = new QLabel(page2);
        lblRegisterTitle->setObjectName(QString::fromUtf8("lblRegisterTitle"));
        lblRegisterTitle->setGeometry(QRect(100, 0, 261, 31));
        lblRegisterTitle->setFont(font2);
        lblRegisterUser = new QLabel(page2);
        lblRegisterUser->setObjectName(QString::fromUtf8("lblRegisterUser"));
        lblRegisterUser->setGeometry(QRect(220, 109, 101, 21));
        lblRegisterUser->setFont(font3);
        label_7 = new QLabel(page2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 70, 190, 190));
        label_7->setFrameShape(QFrame::Box);
        lneRegisterUser = new QLineEdit(page2);
        lneRegisterUser->setObjectName(QString::fromUtf8("lneRegisterUser"));
        lneRegisterUser->setGeometry(QRect(220, 140, 201, 31));
        lblRegisterPassword = new QLabel(page2);
        lblRegisterPassword->setObjectName(QString::fromUtf8("lblRegisterPassword"));
        lblRegisterPassword->setGeometry(QRect(220, 199, 141, 21));
        lblRegisterPassword->setFont(font3);
        lneRegisterPassword = new QLineEdit(page2);
        lneRegisterPassword->setObjectName(QString::fromUtf8("lneRegisterPassword"));
        lneRegisterPassword->setGeometry(QRect(220, 230, 171, 31));
        lneRegisterPassword->setEchoMode(QLineEdit::Password);
        lblName = new QLabel(page2);
        lblName->setObjectName(QString::fromUtf8("lblName"));
        lblName->setGeometry(QRect(10, 299, 151, 21));
        lblName->setFont(font3);
        lneName = new QLineEdit(page2);
        lneName->setObjectName(QString::fromUtf8("lneName"));
        lneName->setGeometry(QRect(60, 330, 271, 31));
        lblSurname = new QLabel(page2);
        lblSurname->setObjectName(QString::fromUtf8("lblSurname"));
        lblSurname->setGeometry(QRect(10, 399, 111, 21));
        lblSurname->setFont(font3);
        lneSurname = new QLineEdit(page2);
        lneSurname->setObjectName(QString::fromUtf8("lneSurname"));
        lneSurname->setGeometry(QRect(60, 430, 271, 31));
        lblPhone = new QLabel(page2);
        lblPhone->setObjectName(QString::fromUtf8("lblPhone"));
        lblPhone->setGeometry(QRect(10, 499, 121, 21));
        lblPhone->setFont(font3);
        lnePhone = new QLineEdit(page2);
        lnePhone->setObjectName(QString::fromUtf8("lnePhone"));
        lnePhone->setGeometry(QRect(60, 530, 271, 31));
        btnRegister = new QPushButton(page2);
        btnRegister->setObjectName(QString::fromUtf8("btnRegister"));
        btnRegister->setGeometry(QRect(160, 630, 141, 51));
        btnRegister->setFont(font3);
        btnRegisterTogglePass = new QPushButton(page2);
        btnRegisterTogglePass->setObjectName(QString::fromUtf8("btnRegisterTogglePass"));
        btnRegisterTogglePass->setGeometry(QRect(390, 230, 31, 31));
        btnRegisterTogglePass->setCheckable(true);
        FrmLogin->addWidget(page2);

        retranslateUi(FrmLogin);

        FrmLogin->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(FrmLogin);
    } // setupUi

    void retranslateUi(QStackedWidget *FrmLogin)
    {
        FrmLogin->setWindowTitle(QCoreApplication::translate("FrmLogin", "StackedWidget", nullptr));
        lblLoginUser->setText(QCoreApplication::translate("FrmLogin", "Usuario:", nullptr));
        lblLoginTitle->setText(QCoreApplication::translate("FrmLogin", "Iniciar sesi\303\263n", nullptr));
        lblLoginUserIcon->setText(QString());
        lblLoginPassword->setText(QCoreApplication::translate("FrmLogin", "Contrase\303\261a:", nullptr));
        btnClose->setText(QCoreApplication::translate("FrmLogin", "X", nullptr));
        btnLogin->setText(QCoreApplication::translate("FrmLogin", "Acceder", nullptr));
        btnGoRegister->setText(QCoreApplication::translate("FrmLogin", "Ir a registrarse", nullptr));
        btnLoginTogglePass->setText(QString());
        btnGoBack->setText(QString());
        lblRegisterTitle->setText(QCoreApplication::translate("FrmLogin", "Registrar usuario", nullptr));
        lblRegisterUser->setText(QCoreApplication::translate("FrmLogin", "Usuario:", nullptr));
        label_7->setText(QString());
        lblRegisterPassword->setText(QCoreApplication::translate("FrmLogin", "Contrase\303\261a:", nullptr));
        lblName->setText(QCoreApplication::translate("FrmLogin", "Nombre:", nullptr));
        lblSurname->setText(QCoreApplication::translate("FrmLogin", "Apellido: ", nullptr));
        lblPhone->setText(QCoreApplication::translate("FrmLogin", "Tel\303\251fono:", nullptr));
        lnePhone->setText(QString());
        btnRegister->setText(QCoreApplication::translate("FrmLogin", "Registrarse", nullptr));
        btnRegisterTogglePass->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FrmLogin: public Ui_FrmLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMLOGIN_H
