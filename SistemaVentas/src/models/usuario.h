#ifndef USUARIO_H
#define USUARIO_H
#include <QString>

class Usuario {
private:
    int idUsuario, estado;
    QString nombre, apellido, usuario, contrasenia, telefono;

public:
    Usuario();

    int getIdUsuario() const;
    void setIdUsuario(int);

    QString getNombre() const;
    void setNombre(const QString &nombre);

    QString getApellido() const;
    void setApellido(const QString &apellido);

    QString getUsuario() const;
    void setUsuario(const QString &usuario);

    QString getContrasenia() const;
    void setContrasenia(const QString &password);

    QString getTelefono() const;
    void setTelefono(const QString &telefono);

    int getEstado() const;
    void setEstado(int estado);

};

#endif // USUARIO_H
