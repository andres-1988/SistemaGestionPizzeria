#ifndef PRODUCTO_H
#define PRODUCTO_H

#include "Fecha.h"

class Producto
{
    public:
        Producto();
        void setIDproducto(int IDproducto);
        int getIDproducto();
        void setNombreProducto(char *nombreProducto);
        char *getNombreProducto();
        void setPrecioProducto(float precioProducto);
        float getPrecioProducto();
        void setStock(int stock);
        int getStock();

        void cargarProducto();
        void mostrarProducto();

        Fecha cargarFecha();
        Fecha mostrarFecha();

    protected:

    private:
        int _IDproducto;
        char _nombreProducto[30];
        float _precioProducto;
        int _stock;
        Fecha _fecha;
};

#endif // PRODUCTO_H
