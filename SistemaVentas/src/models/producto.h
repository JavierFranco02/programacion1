#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <QString>

class Producto {
private:
    int idProducto, idCategoria, estado;
    double precio, porcentajeIva, cantidad;
    QString nombre, descripcion, categoria;
public:
    Producto();
    Producto(int idProducto, QString &nombre, double cantidad, double precio, QString &descripcion, double porcentajeIva, int idCategoria, int estado, QString &categoria);
    int getIdProducto() const;
    void setIdProducto(int idProducto);

    QString getNombre() const;
    void setNombre(const QString &nombre);

    double getCantidad() const;
    void setCantidad(double cantidad);

    double getPrecio() const;
    void setPrecio(double precio);

    QString getDescripcion() const;
    void setDescripcion(const QString &descripcion);

    double getPorcentajeIva() const;
    void setPorcentajeIva(double porcentajeIva);

    int getIdCategoria() const;
    void setIdCategoria(int idCategoria);

    int getEstado() const;
    void setEstado(int estado);

    QString getCategoria() const;
    void setCategoria(const QString &categoria);
};

#endif // PRODUCTO_H
