#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

#include "Proveedor.h"
#include "Persona.h"
#include "Fecha.h"

Proveedor::Proveedor()
{
    //ctor
}

void Proveedor::setDireccion(char *direccion)
{
    strcpy(_direccion, direccion);
}
char *Proveedor::getDireccion()
{
    return _direccion;
}

void Proveedor::setProductoComercializado(char *productoComercializado)
{
    strcpy(_productoComercializado, productoComercializado);
}
char *Proveedor::getProductoComercializado()
{
    return _productoComercializado;
}

void Proveedor::cargarProveedor()
{
    Persona::cargar();
    cin.ignore();
    cout<<"ING. DIRECCION: ";
    cin.getline(_direccion, 40,'\n');
    cout<<"ING. PRODUCTO COMERCIALIZADO: ";
    cin.getline(_productoComercializado, 30,'\n');
    _fecha.cargarFecha();

}
void Proveedor::mostrarProveedor()
{
    Persona::mostrar();
    cout<<"\nDIRECCION: "<<_direccion<<endl;
    cout<<"PRODUCTO COMERCIALIZADO: "<<_productoComercializado<<endl;
    _fecha.mostrarFecha();
}
