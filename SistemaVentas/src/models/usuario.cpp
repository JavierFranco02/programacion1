#include "usuario.h"

Usuario::Usuario() {
    this->idUsuario = 0;
    this->nombre = "";
    this->apellido = "";
    this->usuario = "";
    this->contrasenia = "";
    this->telefono = "";
    this->estado = 0;

}

int Usuario::getIdUsuario() const{
    return idUsuario;
}
void Usuario::setIdUsuario(int id){
    idUsuario = id;
}

QString Usuario::getNombre() const{
    return nombre;
}
void Usuario::setNombre(const QString &nombre){
    this->nombre = nombre;
}

QString Usuario::getApellido() const{
    return apellido;
}
void Usuario::setApellido(const QString &apellido){
    this->apellido = apellido;
}

QString Usuario::getUsuario() const {
    return usuario;
}
void Usuario::setUsuario(const QString &usuario){
    this->usuario = usuario;
}

QString Usuario::getContrasenia() const{
    return contrasenia;
}
void Usuario::setContrasenia(const QString &contrasenia){
    this->contrasenia = contrasenia;
}

QString Usuario::getTelefono() const{
    return telefono;
}
void Usuario::setTelefono(const QString &telefono){
    this->telefono = telefono;
}
int Usuario::getEstado() const{
    return estado;
}
void Usuario::setEstado(int estado){
    this->estado = estado;
}

