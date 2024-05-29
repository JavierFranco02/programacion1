#ifndef CLIENT_H
#define CLIENT_H
#include <QString>

class Cliente {
private:
    int idCliente, cedula, estado;
    QString nombre, apellido, telefono, direccion;

public:
    Cliente();
    Cliente(int idCliente, QString nombre, QString apellido, int cedula, QString telefono, QString direccion, int estado);
    int getIdCliente() const;
    void setIdCliente(int idCliente);

    QString getNombre() const;
    void setNombre(const QString &nombre);

    QString getApellido() const;
    void setApellido(const QString &apellido);

    int getCedula() const;
    void setCedula(int cedula);

    QString getTelefono() const;
    void setTelefono(const QString &telefono);

    QString getDireccion() const;
    void setDireccion(const QString &direccion);

    int getEstado() const;
    void setEstado(int estado);

};

#endif // CLIENT_H
