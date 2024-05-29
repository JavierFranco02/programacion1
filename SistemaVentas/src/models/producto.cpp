#include "producto.h"

Producto::Producto() {
    this->idProducto = 0;
    this->nombre = "";
    this->cantidad = 0.0;
    this->precio = 0.0;
    this->descripcion = "";
    this->porcentajeIva = 0.0;
    this->idCategoria = 0;
    this->estado = 0;
    this->categoria = "";
}

Producto::Producto(int idProducto, QString &nombre, double cantidad, double precio, QString &descripcion, double porcentajeIva, int idCategoria, int estado, QString &categoria){
    this->idProducto = idProducto;
    this->nombre = nombre;
    this->cantidad = cantidad;
    this->precio = precio;
    this->descripcion = descripcion;
    this->porcentajeIva = porcentajeIva;
    this->idCategoria = idCategoria;
    this->estado = estado;
    this->categoria = categoria;
}

int Producto::getIdProducto() const{
    return idProducto;
}
void Producto::setIdProducto(int idProducto){
    this->idProducto = idProducto;
}

QString Producto::getNombre() const{
    return nombre;
}
void Producto::setNombre(const QString &nombre){
    this->nombre = nombre;
}

double Producto::getCantidad() const{
    return cantidad;
}
void Producto::setCantidad(double cantidad){
    this->cantidad = cantidad;
}

double Producto::getPrecio() const{
    return precio;
}
void Producto::setPrecio(double precio){
    this->precio = precio;
}

QString Producto::getDescripcion() const{
    return descripcion;
}
void Producto::setDescripcion(const QString &descripcion){
    this->descripcion = descripcion;
}

double Producto::getPorcentajeIva() const{
    return porcentajeIva;
}

void Producto::setPorcentajeIva(double porcentajeIva){
    this->porcentajeIva = porcentajeIva;
}

int Producto::getIdCategoria() const{
    return idCategoria;
}
void Producto::setIdCategoria(int idCategoria){
    this->idCategoria = idCategoria;
}

int Producto::getEstado() const{
    return estado;
}
void Producto::setEstado(int estado){
    this->estado = estado;
}

QString Producto::getCategoria() const{
    return categoria;
}
void Producto::setCategoria(const QString &categoria){
    this->categoria = categoria;
}

