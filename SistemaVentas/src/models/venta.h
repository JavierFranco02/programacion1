#ifndef VENTA_H
#define VENTA_H
#include <QString>

class Venta {
private:
    int idVenta, idCliente, estado;
    double valorPagar;
    QString fecha;

public:
    Venta();
    Venta(int idVenta, int idCliente, double valorPagar, QString &fecha, int estado);
    int getIdVenta() const;
    void setIdVenta(int idVenta);

    int getIdCliente() const;
    void setIdCliente(int idCliente);

    double getValorPagar() const;
    void setValorPagar(double valorPagar);

    QString getFecha() const;
    void setFecha(const QString &fecha);

    int getEstado() const;
    void setEstado(int estado);
};

#endif // VENTA_H
