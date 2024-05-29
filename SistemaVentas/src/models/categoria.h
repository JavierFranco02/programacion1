#ifndef CATEGORIA_H
#define CATEGORIA_H
#include <QString>


class Categoria {
private:
    int idCategoria, estado;
    QString nombreCategoria;

public:
    Categoria();
    Categoria(int idCategoria, QString &nombreCategoria, int estado);
    int getIdCategoria() const;
    void setIdCategoria(int idCategoria);

    QString getNombreCategoria() const;
    void setNombreCategoria(const QString &nombreCategoria);

    int getEstado() const;
    void setEstado(int estado);

};

#endif // CATEGORIA_H
