#include "venta.h"

Venta::Venta() {
    this->idVenta = 0;
    this->idCliente = 0;
    this->valorPagar = 0.0;
    this->fecha = "";
    this->estado = 0;
}

Venta::Venta(int idVenta, int idCliente, double valorPagar, QString &fecha, int estado){
    this->idVenta = idVenta;
    this->idCliente = idCliente;
    this->valorPagar = valorPagar;
    this->fecha = fecha;
    this->estado = estado;
}


int Venta::getIdVenta() const{
    return idVenta;
}
void Venta::setIdVenta(int idVenta){
    this->idVenta = idVenta;
}

int Venta::getIdCliente() const{
    return idCliente;
}
void Venta::setIdCliente(int idCliente){
    this->idCliente = idCliente;
}

double Venta::getValorPagar() const{
    return valorPagar;
}
void Venta::setValorPagar(double valorPagar){
    this->valorPagar = valorPagar;
}

QString Venta::getFecha() const{
    return fecha;
}
void Venta::setFecha(const QString &fecha){
    this->fecha = fecha;
}

int Venta::getEstado() const{
    return estado;
}
void Venta::setEstado(int estado){
    this->estado = estado;
}

