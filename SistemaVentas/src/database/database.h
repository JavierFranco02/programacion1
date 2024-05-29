#ifndef DATABASE_H
#define DATABASE_H
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QString>
#include <QDebug>
#include <iostream>
using namespace std;
//#include <wchar.h>


#include <src/models/venta.h>
#include <src/models/categoria.h>
#include <src/models/cliente.h>
#include <src/models/detalleventa.h>
#include <src/models/producto.h>
#include <src/models/usuario.h>

class DataBase {
private:
    DataBase();
public:
    static QSqlDatabase getConnection();

    class AdminUser {
    private:
        AdminUser();
    public:
        static bool loginUser(Usuario &usuario);
        static bool saveUser(Usuario &usuario);
        static bool doesUserExist(const QString &nombreUsuario);
        static bool updateUser(Usuario &usuario, int idUsuario);
        static bool deleteUser(int idUsuario);
    };

    class AdminClient {
    private:
        AdminClient();
    public:
        static bool saveClient(Cliente &cliente);
        static bool doesClientExist(int cedula);
        static bool updateClient(Cliente &cliente, int idCliente);
        static bool deleteClient(int idCliente);
    };

    class AdminCategory {
    private:
        AdminCategory();
    public:
        static bool saveCategory(Categoria &categoria);
        static bool doesCategoryExist(const QString &nombreCategoria);
        static bool updateCategory(Categoria &categoria, int idCategoria);
        static bool deleteCategory(int idCategoria);
    };

    class AdminProduct{
    private:
        AdminProduct();
    public:
        static bool saveProduct(Producto &producto);
        static bool doesProductExist(const QString nombreProducto);
        static bool updateProduct(Producto &producto, int idProducto);
        static bool deleteProduct(int idProducto);
        static bool updateStock(Producto &producto, int idProducto);
    };

    class Purchase {
    private:
        Purchase();
    public:
        static long long idVentaRegistrada;
        static bool saveNewPurchase(Venta &venta);
        static bool savePurchaseDetails(DetalleVenta &detalleVenta);
        static bool updatePurchase(Venta &venta, int idVenta);
    };

};

#endif // DATABASE_H
