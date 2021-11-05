#include <iostream>
#include<stdlib.h>
#include<cstring>

using namespace std;

#include "Persona.h"

Persona::Persona()
{
    //ctor
}
void Persona::setNombre(char *nombre)
{
    strcpy(_nombre, nombre);
}
void Persona::setTelefono(int telefono)
{
    _telefono=telefono;
}
char *Persona::getNombre()
{
    return _nombre;
}
int Persona::getTelefono()
{
    return _telefono;
}

void Persona::cargar()
{
    cin.ignore();
    cout<<"ING. NOMBRE: ";
    cin.getline(_nombre, 30,'\n');
    cout<<"ING. TELEFONO: ";
    cin>>_telefono;
}
void Persona::mostrar()
{
    cout<<"\nNOMBRE: "<<_nombre;
    cout<<"\nTELEFONO: "<<_telefono;
}
