#include "categoria.h"

Categoria::Categoria(){
    this->idCategoria = 0;
    this->nombreCategoria = "";
    this->estado = 0;
}

Categoria::Categoria(int idCategoria, QString &nombreCategoria, int estado){
    this->idCategoria = idCategoria;
    this->nombreCategoria = nombreCategoria;
    this->estado = estado;
}

int Categoria::getIdCategoria() const{
    return idCategoria;
}
void Categoria::setIdCategoria(int idCategoria){
    this->idCategoria = idCategoria;
}

QString Categoria::getNombreCategoria() const{
    return nombreCategoria;
}
void Categoria::setNombreCategoria(const QString &nombreCategoria){
    this->nombreCategoria = nombreCategoria;
}

int Categoria::getEstado() const{
    return estado;
}
void Categoria::setEstado(int estado){
    this->estado = estado;
}
