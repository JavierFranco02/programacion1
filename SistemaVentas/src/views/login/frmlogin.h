#ifndef FRMLOGIN_H
#define FRMLOGIN_H

#include <QStackedWidget>

namespace Ui {
class FrmLogin;
}

class FrmLogin : public QStackedWidget
{
    Q_OBJECT

public:
    explicit FrmLogin(QWidget *parent = nullptr);
    ~FrmLogin();

private:
    Ui::FrmLogin *ui;
    QWidget *dad;

signals:
    void cerrar();
private slots:
    void viewHidePassword();
    void acceder();
    void registrar();

};

#endif // FRMLOGIN_H
