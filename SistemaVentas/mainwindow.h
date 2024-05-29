#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "src/views/login/frmlogin.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

private:
    Ui::MainWindow *ui;

public:
    FrmLogin *frmLogin;
    QWidget *loginContainer = nullptr;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void placeLoginForm(bool decorations);

};
#endif // MAINWINDOW_H
