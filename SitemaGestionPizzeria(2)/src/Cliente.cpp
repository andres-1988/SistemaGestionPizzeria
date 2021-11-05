#include <iostream>
#include <cstdio>

using namespace std;

#include "Cliente.h"
#include "Fecha.h"

Cliente::Cliente()
{
    //ctor
}

void Cliente::setIDreunion(int IDreunion)
{
    _IDreunion=IDreunion;
}

int Cliente::getIDreunion()
{
    return _IDreunion;
}

void Cliente::setNumMesa(int numMesa)
{
    _numMesa=numMesa;
}
void Cliente::setCantComenzales(int cantComenzales)
{
    _cantComenzales=cantComenzales;
}
int Cliente::getNumMesa()
{
    return _numMesa;
}
int Cliente::getCantComenzales()
{
    return _cantComenzales;
}

void Cliente::cargar()
{
    Persona::cargar();
    cout<<"ING. NUM. DE ID: ";
    cin>>_IDreunion;
    cout<<"ING. NUM. DE MESA: ";
    cin>>_numMesa;
    cout<<"ING. CANT. DE COMENZALES: ";
    cin>>_cantComenzales;
    _fecha.cargarFecha();
    _fecha.mostrarFecha();

}
void Cliente::mostrar()
{
    Persona::mostrar();
    cout<<"\nNUM. DE ID: "<<_IDreunion<<endl;
    cout<<"ES LA MESA NUM: "<<_numMesa<<endl;
    cout<<"LA CANT. DE COMENZALES ES: "<<_cantComenzales<<endl;
    _fecha.mostrarFecha();
}

bool Cliente::guardarEnDisco()
{
    Cliente aux;

    FILE *p;
    p = fopen("cliente.dat", "ab");
    if (p == NULL)
    {
        return false;
    }
    bool ok;
    ok = fwrite(this, sizeof(Cliente), 1, p);
    fclose(p);
    return ok;
}

bool Cliente::leerDeDisco(int nroRegistro)
{
    Cliente aux;

    FILE *p;
    p = fopen("cliente.dat", "rb");
    if (p == NULL)
    {
        return false;
    }
    fseek(p, nroRegistro * sizeof(Cliente), SEEK_SET);
    bool ok;
    ok = fread(this, sizeof(Cliente), 1, p);
    fclose(p);
    return ok;
}


///FUNCION GLOBAL

int cantidadReuniones()
{
    int bytes, cant;
    FILE *p;
    p = fopen("cliente.dat", "rb");
    if (p == NULL)
    {
        return 0;
    }
    fseek(p, 0, SEEK_END);
    bytes = ftell(p);
    fclose(p);
    cant = bytes / sizeof(Cliente);
    return cant;
}

int buscarReunion(int ID)
{
    Cliente reg;

    int i, cant = cantidadReuniones();
    for(i =0; i<cant; i++)
    {
        reg.leerDeDisco(i);
        if (ID == reg.getIDreunion())
        {
            return i;
        }
    }
    return -1;
}
