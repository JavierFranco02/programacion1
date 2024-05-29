#ifndef DETALLEVENTA_H
#define DETALLEVENTA_H
#include <QString>


class DetalleVenta {
private:
    int idDetalleVenta, idVenta, idProducto, estado;
    double cantidad, precioUnitario, subTotal, iva, totalPagar;
    QString nombreProducto;
public:
    DetalleVenta();
    DetalleVenta(int idDetalleVenta, int idVenta, int idProducto, double cantidad, double precioUnitario, double subTotal, double iva, double totalPagar, int estado, QString &nombreProducto);
    int getIdDetalleVenta() const;
    void setIdDetalleVenta(int idDetalleVenta);

    int getIdVenta() const;
    void setIdVenta(int idVenta);

    int getIdProducto() const;
    void setIdProducto(int idProducto);

    double getCantidad() const;
    void setCantidad(double cantidad);

    double getPrecioUnitario() const;
    void setPrecioUnitario(double precioUnitario);

    double getSubTotal() const;
    void setSubTotal(double subTotal);

    double getIva() const;
    void setIva(double iva);

    double getTotalPagar() const;
    void setTotalPagar(double totalPagar);

    int getEstado() const;
    void setEstado(int estado);

    QString getNombreProducto() const;
    void setNombreProducto(const QString &nombreProducto);
};

#endif // DETALLEVENTA_H
