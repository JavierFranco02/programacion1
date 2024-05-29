#include "detalleventa.h"

DetalleVenta::DetalleVenta() {
    this->idDetalleVenta = 0;
    this->idVenta = 0;
    this->idProducto = 0;
    this->cantidad = 0.0;
    this->precioUnitario = 0.0;
    this->subTotal = 0.0;
    this->iva = 0.0;
    this->totalPagar = 0.0;
    this->estado= 0;
    this->nombreProducto = "";
}

DetalleVenta::DetalleVenta(int idDetalleVenta, int idVenta, int idProducto, double cantidad, double precioUnitario, double subTotal, double iva, double totalPagar, int estado, QString &nombreProducto){
    this->idDetalleVenta = idDetalleVenta;
    this->idVenta = idVenta;
    this->idProducto = idProducto;
    this->cantidad = cantidad;
    this->precioUnitario = precioUnitario;
    this->subTotal = subTotal;
    this->iva = iva;
    this->totalPagar = totalPagar;
    this->estado = estado;
    this->nombreProducto = nombreProducto;
}

int DetalleVenta::getIdDetalleVenta() const{
    return idDetalleVenta;
}
void DetalleVenta::setIdDetalleVenta(int idDetalleVenta){
    this->idDetalleVenta = idDetalleVenta;
}

int DetalleVenta::getIdVenta() const{
    return idVenta;
}
void DetalleVenta::setIdVenta(int idVenta){
    this->idVenta = idVenta;
}

int DetalleVenta::getIdProducto() const{
    return idProducto;
}

void DetalleVenta::setIdProducto(int idProducto){
    this->idProducto = idProducto;
}

double DetalleVenta::getCantidad() const{
    return cantidad;
}
void DetalleVenta::setCantidad(double cantidad){
    this->cantidad = cantidad;
}

double DetalleVenta::getPrecioUnitario() const{
    return precioUnitario;
}
void DetalleVenta::setPrecioUnitario(double precioUnitario){
    this->precioUnitario = precioUnitario;
}

double DetalleVenta::getSubTotal() const{
    return subTotal;
}
void DetalleVenta::setSubTotal(double subTotal){
    this->subTotal = subTotal;
}

double DetalleVenta::getIva() const{
    return iva;
}
void DetalleVenta::setIva(double iva){
    this->iva = iva;
}

double DetalleVenta::getTotalPagar() const{
    return totalPagar;
}
void DetalleVenta::setTotalPagar(double totalPagar){
    this->totalPagar = totalPagar;
}

int DetalleVenta::getEstado() const{
    return estado;
}
void DetalleVenta::setEstado(int estado){
    this->estado = estado;
}

QString DetalleVenta::getNombreProducto() const{
    return nombreProducto;
}
void DetalleVenta::setNombreProducto(const QString &nombreProducto){
    this->nombreProducto = nombreProducto;
}
