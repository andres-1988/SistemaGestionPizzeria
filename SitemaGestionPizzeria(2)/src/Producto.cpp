#include <iostream>
#include<stdlib.h>
#include<cstring>

using namespace std;

#include "Producto.h"
#include "Fecha.h"

Producto::Producto()
{
    //ctor
}
void Producto::setIDproducto(int IDproducto)
{
    _IDproducto=IDproducto;
}
int Producto::getIDproducto()
{
    return _IDproducto;
}
void Producto::setNombreProducto(char *nombreProducto)
{
    strcpy(_nombreProducto, nombreProducto);
}
char *Producto::getNombreProducto()
{
    return _nombreProducto;
}
void Producto::setPrecioProducto(float precioProducto)
{
    _precioProducto=precioProducto;
}
float Producto::getPrecioProducto()
{
    return _precioProducto;
}
void Producto::setStock(int stock)
{
    _stock=stock;
}
int Producto::getStock()
{
    return _stock;
}

void Producto::cargarProducto()
{
    cout<<"INGRESE ID DE PRODUCTO: ";
    cin>>_IDproducto;
    cin.ignore();
    cout<<"ING. NOMBRE DEL PRODUCTO: ";
    cin.getline(_nombreProducto, 30,'\n');
    cout<<"ING. PRECIO DE VENTA ($): ";
    cin>>_precioProducto;
    cout<<"INGRESE STOCK: ";
    cin>>_stock;
    _fecha.cargarFecha();
}
void Producto::mostrarProducto()
{
    cout<<"\nID DE PRODUCTO: "<<_IDproducto;
    cout<<"\nNOMBRE DEL PRODUCTO: "<<_nombreProducto;
    cout<<"\nPRECIO: $"<<_precioProducto;

}


