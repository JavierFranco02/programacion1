#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "src/views/login/frmlogin.h"
#include <QDebug>

#include <QHBoxLayout>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    //ui->wgtRightBar->hide();
    connect(ui->btnSesion, &QPushButton::clicked, this, [&](){this->placeLoginForm(true);});
    this->placeLoginForm(true);

}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::placeLoginForm(bool decorations){
    if(loginContainer == nullptr){
        loginContainer = new QWidget(ui->centralwidget);
        QHBoxLayout *layout = new QHBoxLayout(loginContainer);
        frmLogin = new FrmLogin(loginContainer);
        if(decorations){

        }

        layout->addWidget(frmLogin);
        layout->setMargin(0);
        loginContainer->setStyleSheet("background-color: rgba(0, 0, 0, 190)");
        ui->layoutContent->addWidget(loginContainer);
        ui->wgtRightBar->hide();
        //ui->btnSesion->setEnabled(false);

        //loginConteiner->setStyleSheet("filter: blur(5px);");
        connect(frmLogin, &FrmLogin::cerrar, this, [&](){
            delete loginContainer;
            loginContainer = nullptr;
        });

    }else{
        delete loginContainer;
        loginContainer = nullptr;
        //qDebug() << frmLogin;
        ui->wgtRightBar->show();
    }
}
