#include "frmlogin.h"
#include "ui_frmlogin.h"

#include "src/database/database.h"

#include <QList>
//#include <QDebug>
#include <QMessageBox>

void changeEchoMode(bool isCheked, QLineEdit *lne);

FrmLogin::FrmLogin(QWidget *parent): QStackedWidget(parent), ui(new Ui::FrmLogin){
    ui->setupUi(this);

    QList<QLabel *> labels = this->findChildren<QLabel *>();
    for(QLabel *lbl : labels){
        lbl->setStyleSheet("background-color: transparent;");
    }
    QList<QLineEdit *> lnes = this->findChildren<QLineEdit *>();
    for(QLineEdit *lne : lnes){
        lne->setStyleSheet("background-color: rgba(255, 255, 255, 150);");
    }

    connect(ui->btnLoginTogglePass, &QPushButton::clicked, this, &FrmLogin::viewHidePassword);
    connect(ui->btnRegisterTogglePass, &QPushButton::clicked, this, &FrmLogin::viewHidePassword);

    connect(ui->btnGoRegister, &QPushButton::clicked, this, [&](){
        this->setCurrentIndex(1);
    });
    connect(ui->btnGoBack, &QPushButton::clicked, this, [&](){
        this->setCurrentIndex(0);
    });
    connect(ui->btnClose, &QPushButton::clicked, this, [&](){
        emit cerrar();
    });

    connect(ui->btnLogin, &QPushButton::clicked, this, &FrmLogin::acceder);
    connect(ui->btnRegister, &QPushButton::clicked, this, &FrmLogin::registrar);
}


FrmLogin::~FrmLogin(){
    delete ui;
}


void FrmLogin::viewHidePassword(){
    QPushButton *btn = qobject_cast<QPushButton *>(sender());
    if(!btn) return;
    if(btn == ui->btnLoginTogglePass){
        changeEchoMode(btn->isChecked(), ui->lneLoginPassword);
    }else if(btn == ui->btnRegisterTogglePass){
        changeEchoMode(btn->isChecked(), ui->lneRegisterPassword);
    }
}

void FrmLogin::acceder(){
    QString user = ui->lneLoginUser->text();
    QString pass = ui->lneLoginPassword->text();
    if(!(user.isEmpty() || pass.isEmpty())){
        Usuario usuario;
        usuario.setUsuario(user);
        usuario.setContrasenia(pass);

        if(DataBase::AdminUser::loginUser(usuario)){
            QMessageBox::information(nullptr, " ", "Bienvenido <b>"+user+"</b>");
            emit cerrar();
        }else{
            QMessageBox::warning(nullptr, " ", "Ha ocurrido un error al intentar iniciar sesion");;
        }

    }else{
        QMessageBox::warning(nullptr, " ", "Por favor rellene todos los camps solicitados");
    }
}

void FrmLogin::registrar(){
    QString user = ui->lneRegisterUser->text().trimmed();
    QString pass = ui->lneRegisterPassword->text();
    QString name = ui->lneName->text().trimmed();
    QString surName = ui->lneSurname->text().trimmed();
    QString phone = ui->lnePhone->text().trimmed();
    if(!(user.isEmpty() || pass.isEmpty() || name.isEmpty() || surName.isEmpty() || phone.isEmpty())){
        if(!DataBase::AdminUser::doesUserExist(user)){
            Usuario usuario;
            usuario.setUsuario(user);
            usuario.setContrasenia(pass);
            usuario.setNombre(name);
            usuario.setApellido(surName);
            usuario.setTelefono(phone);
            usuario.setEstado(1);

            if(DataBase::AdminUser::saveUser(usuario)){
                QMessageBox::information(nullptr, " ", "Usuario guardado exitosamente");

                ui->lneRegisterUser->setText("");
                ui->lneRegisterPassword->setText("");
                ui->lneName->setText("");
                ui->lneSurname->setText("");
                ui->lnePhone->setText("");

                this->setCurrentIndex(0);
                ui->lneLoginUser->setText(user);
                ui->lneLoginPassword->setText(pass);

            }else{
                QMessageBox::warning(nullptr, " ", "Hubo un error al guardar el usuario");
            }
        }else{
            QMessageBox::warning(nullptr, " ", "El nombre de usuario ya esta en uso.\nPor favor elija otro.");
        }
    }else{
        QMessageBox::warning(nullptr, " ", "Por favor rellene todos los camps solicitados.");
    }
}

void changeEchoMode(bool isCheked, QLineEdit *lne){
    if(isCheked){
        lne->setEchoMode(QLineEdit::Normal);
    }else{
        lne->setEchoMode(QLineEdit::Password);
    }
}

