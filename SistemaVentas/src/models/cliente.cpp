#include "cliente.h"

Cliente::Cliente() {
    this->idCliente = 0;
    this->nombre = "";
    this->apellido = "";
    this->cedula = 0;
    this->telefono = "";
    this->direccion = "";
    this->estado = 0;
}
Cliente::Cliente(int idCliente, QString nombre, QString apellido, int cedula, QString telefono, QString direccion, int estado){
    this->idCliente = idCliente;
    this->nombre = nombre;
    this->apellido = apellido;
    this->cedula = cedula;
    this->telefono = telefono;
    this->direccion = direccion;
    this->estado = estado;
}
int Cliente::getIdCliente() const{
    return idCliente;
}
void Cliente::setIdCliente(int idCliente){
    this->idCliente = idCliente;
}

QString Cliente::getNombre() const{
    return nombre;
}
void Cliente::setNombre(const QString &nombre){
    this->nombre = nombre;
}

QString Cliente::getApellido() const{
    return apellido;
}
void Cliente::setApellido(const QString &apellido){
    this->apellido = apellido;
}

int Cliente::getCedula() const{
    return cedula;
}
void Cliente::setCedula(int cedula){
    this->cedula = cedula;
}

QString Cliente::getTelefono() const{
    return telefono;
}
void Cliente::setTelefono(const QString &telefono){
    this->telefono = telefono;
}

QString Cliente::getDireccion() const{
    return direccion;
}
void Cliente::setDireccion(const QString &direccion){
    this->direccion = direccion;
}

int Cliente::getEstado() const{
    return estado;
}
void Cliente::setEstado(int estado){
    this->estado = estado;
}
