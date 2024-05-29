#include "database.h"
#include <QMessageBox>
//#include <typeinfo>

DataBase::DataBase() {}

QSqlDatabase DataBase::getConnection(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL", "SISTEMAVENTAS");
    db.setDatabaseName("sistemaVentas");
    db.setHostName("localhost");
    db.setPort(5432);
    db.setPassword("root");
    db.setUserName("postgres");

    if(!db.open()){
        QMessageBox::critical(nullptr, "Error de conexion", "No se pudo conectar a la base de datos\n\n" + db.lastError().text());
    }

    return db;
}

bool DataBase::AdminUser::loginUser(Usuario &usuario){
    bool respuesta = false;

    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);
        query.prepare("SELECT usuario, contrasenia FROM usuarios WHERE usuario = ? AND contrasenia = ?");
        //qDebug() << typeid(usuario->getUsuario()).name();
        query.addBindValue(usuario.getUsuario());
        query.addBindValue(usuario.getContrasenia());

        if(query.exec()){
            while(query.next()){
                qDebug() << "Correcto";
                respuesta = true;
            }
        }else{
            QMessageBox::critical(nullptr, "", "Erorr buscar usuario\n\n" + query.lastError().text());
        }

    }

    db.close();
    return respuesta;
}

bool DataBase::AdminUser::saveUser(Usuario &usuario){
    bool respuesta = false;
    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);
        query.prepare("INSERT INTO usuarios(nombre, apellido, usuario, contrasenia, telefono, estado) VALUES (:name, :surname, :user, :pass, :phone, :state)");
        query.bindValue(":name", usuario.getNombre());
        query.bindValue(":surname", usuario.getApellido());
        //cout << "Erorr insertar usuario\n" << query.lastError().text().toStdString();
        query.bindValue(":user", usuario.getUsuario());
        query.bindValue(":pass", usuario.getContrasenia());
        query.bindValue(":phone", usuario.getTelefono());
        query.bindValue(":state", usuario.getEstado());

        if(query.exec()){
            respuesta =  true;
        }else{
            QMessageBox::critical(nullptr, "", "Erorr al guardar usuario\n\n" + query.lastError().text());
        }
    }

    db.close();
    return respuesta;
}

bool DataBase::AdminUser::doesUserExist(const QString &nombreUsuario){
    bool respuesta = false;

    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);
        query.prepare("SELECT usuario FROM usuarios WHERE usuario = ?");
        query.addBindValue(nombreUsuario);

        if(query.exec()){
            while(query.next()){
                respuesta = true;
            }
        }else{
            QMessageBox::critical(nullptr, "", "Erorr al consultar usuario\n\n" + query.lastError().text());
        }

    }

    db.close();
    return respuesta;
}

bool DataBase::AdminUser::updateUser(Usuario &usuario, int idUsuario){
    bool respuesta = false;

    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);
        query.prepare("UPDATE usuarios SET nombre=?, apellido=?, usuario=?, contrasenia=?, telefono=?, estado=? WHERE \"idUsuario\" = ?");
        query.addBindValue(usuario.getNombre());
        query.addBindValue(usuario.getApellido());
        query.addBindValue(usuario.getUsuario());
        query.addBindValue(usuario.getContrasenia());
        query.addBindValue(usuario.getTelefono());
        query.addBindValue(usuario.getEstado());
        query.addBindValue(idUsuario);

        if(query.exec()){
            respuesta = true;
        }else{
            QMessageBox::critical(nullptr, "", "Erorr al actualizar usuario\n\n" + query.lastError().text());
            cout << query.lastError().text().toStdString();
        }

    }

    db.close();
    return respuesta;
}

bool DataBase::AdminUser::deleteUser(int idUsuario){
    bool respuesta = false;

    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);
        query.prepare("DELETE FROM usuarios WHERE \"idUsuario\" = ?");
        query.addBindValue(idUsuario);

        if(query.exec()){
            respuesta = true;
        }else{
            QMessageBox::critical(nullptr, "", "Erorr al eliminar usuario\n\n" + query.lastError().text());
        }
    }

    db.close();
    return respuesta;
}




bool DataBase::AdminClient::saveClient(Cliente &cliente){
    bool respuesta = false;
    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);
        query.prepare("INSERT INTO clientes(nombre, apellido, cedula, telefono, direccion, estado) VALUES (:name, :surname, :cel, :phone, :addres ,:state)");
        query.bindValue(":name", cliente.getNombre());
        query.bindValue(":surname", cliente.getApellido());
        query.bindValue(":cel", cliente.getCedula());
        query.bindValue(":phone", cliente.getTelefono());
        query.bindValue(":addres", cliente.getDireccion());
        query.bindValue(":state", cliente.getEstado());

        if(query.exec()){
            respuesta =  true;
        }else{
            QMessageBox::critical(nullptr, "", "Erorr al guardar cliente\n\n" + query.lastError().text());
        }
    }

    db.close();
    return respuesta;
}

bool DataBase::AdminClient::doesClientExist(int cedula){
    bool respuesta = false;

    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);
        query.prepare("SELECT nombre FROM clientes WHERE cedula = ?");
        query.addBindValue(cedula);

        if(query.exec()){
            while(query.next()){
                respuesta = true;
            }
        }else{
            QMessageBox::critical(nullptr, "", "Erorr al consultar cliente\n\n" + query.lastError().text());
        }

    }

    db.close();
    return respuesta;
}

bool DataBase::AdminClient::updateClient(Cliente &cliente, int idCliente){
    bool respuesta = false;

    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);
        query.prepare("UPDATE clientes SET nombre=?, apellido=?, cedula=?, telefono=?, direccion = ?, estado=? WHERE \"idCliente\" = ?");
        query.addBindValue(cliente.getNombre());
        query.addBindValue(cliente.getApellido());
        query.addBindValue(cliente.getCedula());
        query.addBindValue(cliente.getTelefono());
        query.addBindValue(cliente.getDireccion());
        query.addBindValue(cliente.getEstado());
        query.addBindValue(idCliente);

        if(query.exec()){
            respuesta = true;
        }else{
            QMessageBox::critical(nullptr, "", "Erorr al actualizar cliente\n\n" + query.lastError().text());
            cout << query.lastError().text().toStdString();
        }

    }

    db.close();
    return respuesta;
}

bool DataBase::AdminClient::deleteClient(int idCliente){
    bool respuesta = false;

    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);
        query.prepare("DELETE FROM clientes WHERE \"idCliente\" = ?");
        query.addBindValue(idCliente);

        if(query.exec()){
            respuesta = true;
        }else{
            QMessageBox::critical(nullptr, "", "Erorr al eliminar cliente\n\n" + query.lastError().text());
        }
    }

    db.close();
    return respuesta;
}

bool DataBase::AdminCategory::saveCategory(Categoria &categoria){
    bool respuesta = false;
    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);
        query.prepare("INSERT INTO categorias(\"nombreCategoria\", estado) VALUES (:name, :state)");
        query.bindValue(":name", categoria.getNombreCategoria());
        query.bindValue(":state", categoria.getEstado());

        if(query.exec()){
            respuesta =  true;
        }else{
            QMessageBox::critical(nullptr, "", "Erorr al guardar categoria\n\n" + query.lastError().text());
        }
    }

    db.close();
    return respuesta;
}

bool DataBase::AdminCategory::doesCategoryExist(const QString &nombreCategoria){
    bool respuesta = false;

    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);

        query.prepare("SELECT \"nombreCategoria\" FROM categorias WHERE \"nombreCategoria\" = ?");
        query.addBindValue(nombreCategoria);

        if(query.exec()){
            while(query.next()){
                respuesta = true;
            }
        }else{
            QMessageBox::critical(nullptr, "", "Erorr al consultar categoria\n\n" + query.lastError().text());
        }
    }

    db.close();
    return respuesta;
}

bool DataBase::AdminCategory::updateCategory(Categoria &categoria, int idCategoria){
    bool respuesta = false;

    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);
        query.prepare("UPDATE categorias SET \"nombreCategoria\"=?, estado=? WHERE \"idCategoria\" = ?");
        query.addBindValue(categoria.getNombreCategoria());
        query.addBindValue(categoria.getEstado());
        query.addBindValue(idCategoria);

        if(query.exec()){
            respuesta = true;
        }else{
            QMessageBox::critical(nullptr, "", "Erorr al actualizar categoria\n\n" + query.lastError().text());
            cout << query.lastError().text().toStdString();
        }

    }

    db.close();
    return respuesta;
}

bool DataBase::AdminCategory::deleteCategory(int idCategoria){
    bool respuesta = false;

    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);
        query.prepare("DELETE FROM categorias WHERE \"idCategoria\" = ?");
        query.addBindValue(idCategoria);

        if(query.exec()){
            respuesta = true;
        }else{
            QMessageBox::critical(nullptr, "", "Erorr al eliminar categoria\n\n" + query.lastError().text());
        }
    }

    db.close();
    return respuesta;
}

bool DataBase::AdminProduct::saveProduct(Producto &producto){
    bool respuesta = false;
    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);
        query.prepare("INSERT INTO productos(nombre, cantidad, precio, descripcion, \"porcentajeIva\", \"idCategoria\", estado)VALUES (:name, :amount, :price, :desc, :iva, :idCat, :state)");
        query.bindValue(":name", producto.getNombre());
        query.bindValue(":amount", producto.getCantidad());
        query.bindValue(":price", producto.getPrecio());
        query.bindValue(":desc", producto.getDescripcion());
        query.bindValue(":iva", producto.getPorcentajeIva());
        query.bindValue(":idCat", producto.getIdCategoria());
        query.bindValue(":state", producto.getEstado());

        if(query.exec()){
            respuesta =  true;
        }else{
            QMessageBox::critical(nullptr, "", "Erorr al guardar categoria\n\n" + query.lastError().text());
        }
    }

    db.close();
    return respuesta;
}

bool DataBase::AdminProduct::doesProductExist(const QString nombreProducto){
    bool respuesta = false;

    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);

        query.prepare("SELECT nombre FROM productos WHERE nombre = ?");
        query.addBindValue(nombreProducto);

        if(query.exec()){
            while(query.next()){
                respuesta = true;
            }
        }else{
            QMessageBox::critical(nullptr, "", "Erorr al consultar producto\n\n" + query.lastError().text());
        }
    }

    db.close();
    return respuesta;
}

bool DataBase::AdminProduct::updateProduct(Producto &producto, int idProducto){
    bool respuesta = false;

    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);
        query.prepare("UPDATE productos SET nombre=?, cantidad=?, precio=?, descripcion=?, \"porcentajeIva\"=?, \"idCategoria\"=?, estado=? WHERE \"idProducto\" = ?");
        query.addBindValue(producto.getNombre());
        query.addBindValue(producto.getCantidad());
        query.addBindValue(producto.getPrecio());
        query.addBindValue(producto.getDescripcion());
        query.addBindValue(producto.getPorcentajeIva());
        query.addBindValue(producto.getIdCategoria());
        query.addBindValue(producto.getEstado());
        query.addBindValue(idProducto);

        if(query.exec()){
            respuesta = true;
        }else{
            QMessageBox::critical(nullptr, "", "Erorr al actualizar producto\n\n" + query.lastError().text());
            cout << query.lastError().text().toStdString();
        }
    }

    db.close();
    return respuesta;
}

bool DataBase::AdminProduct::deleteProduct(int idProducto){
    bool respuesta = false;

    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);
        query.prepare("DELETE FROM productos WHERE \"idProducto\" = ?");
        query.addBindValue(idProducto);

        if(query.exec()){
            respuesta = true;
        }else{
            QMessageBox::critical(nullptr, "", "Erorr al eliminar producto\n\n" + query.lastError().text());
        }
    }

    db.close();
    return respuesta;
}

bool DataBase::AdminProduct::updateStock(Producto &producto, int idProducto){
    bool respuesta = false;

    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);
        query.prepare("UPDATE productos SET cantidad=? WHERE \"idProducto\" = ?");
        query.addBindValue(producto.getCantidad());
        query.addBindValue(idProducto);

        if(query.exec()){
            respuesta = true;
        }else{
            QMessageBox::critical(nullptr, "", "Erorr al actualizar producto\n\n" + query.lastError().text());
            cout << query.lastError().text().toStdString();
        }
    }

    db.close();
    return respuesta;
}

long long DataBase::Purchase::idVentaRegistrada = 0;

bool DataBase::Purchase::saveNewPurchase(Venta &venta){
    bool respuesta = false;
    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);
        query.prepare("INSERT INTO ventas(\"idCliente\", \"valorPagar\", fecha, estado) VALUES (:clientId, :pay, TO_DATE(:date, 'DD/MM/YYYY'), :state)");
        query.bindValue(":clientId", venta.getIdCliente());
        query.bindValue(":pay", venta.getValorPagar());
        query.bindValue(":date", venta.getFecha());
        query.bindValue(":state", venta.getEstado());

        if(query.exec()){
            respuesta =  true;
            DataBase::Purchase::idVentaRegistrada = query.lastInsertId().toLongLong();

        }else{
            QMessageBox::critical(nullptr, "", "Erorr al guardar venta\n\n" + query.lastError().text());
        }
    }

    db.close();
    return respuesta;
}

bool DataBase::Purchase::savePurchaseDetails(DetalleVenta &detalleVenta){
    bool respuesta = false;
    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);
        query.prepare("INSERT INTO \"detalleVentas\"(\"idVenta\", \"idProducto\", cantidad, \"precioUnitario\", \"subTotal\", iva, \"totalPagar\", estado)VALUES "
                      "(:purchaseId, :productId, :amount, :singlePrice, :subTotal, :iva, :totalPay, :state)");
        query.bindValue(":purchaseId", DataBase::Purchase::idVentaRegistrada);
        query.bindValue(":productId", detalleVenta.getIdProducto());
        query.bindValue(":amount", detalleVenta.getCantidad());
        query.bindValue(":singlePrice", detalleVenta.getPrecioUnitario());
        query.bindValue(":subTotal", detalleVenta.getSubTotal());
        query.bindValue(":iva", detalleVenta.getIva());
        query.bindValue(":totalPay", detalleVenta.getTotalPagar());
        query.bindValue(":state", detalleVenta.getEstado());

        if(query.exec()){
            respuesta =  true;

        }else{
            QMessageBox::critical(nullptr, "", "Erorr al guardar detalle de la venta\n\n" + query.lastError().text());
        }
    }

    db.close();
    return respuesta;
}

bool DataBase::Purchase::updatePurchase(Venta &venta, int idVenta){
    bool respuesta = false;

    QSqlDatabase db = DataBase::getConnection();

    if(db.isOpen()){
        QSqlQuery query(db);
        query.prepare("UPDATE ventas SET \"idCliente\" = ?, estado = ? WHERE \"idVenta\" = ?");
        query.addBindValue(venta.getIdCliente());
        query.addBindValue(venta.getEstado());
        query.addBindValue(idVenta);

        if(query.exec()){
            respuesta = true;
        }else{
            QMessageBox::critical(nullptr, "", "Erorr al actualizar venta\n\n" + query.lastError().text());
            cout << query.lastError().text().toStdString();
        }
    }

    db.close();
    return respuesta;
}
