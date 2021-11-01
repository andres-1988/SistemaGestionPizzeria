#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdlib.h>
#include "rlutil.h"

using namespace std;
using namespace rlutil;

#include "Menu.h"

Menu::Menu()
{
    //ctor
}

//MENU
void Menu::menuIDvendedor()
{


    cls();
    system("mode con: cols=80 lines=25"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA A 80 COLUMNAS Y 25 FILAS
    system("COLOR 70"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
    dibujarCuadro(0,0,78,24); //SE DIBUJA EL CUADRO PRINCIPAL
    dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
    gotoxy(22,2);
    cout<<"PIZZA LAB - PROGRAMANDO TU SABOR";

    int IDvendedor;
    gotoxy (2,6);
    cout<<"INGRESO AL SISTEMA";
    gotoxy (2,7);
    cout<<"------------------";
    gotoxy (2,10);
    cout<<"INGRESE SU ID DE VENDEDOR: ";
    cin>>IDvendedor;



    int j=1;

    for (int i=1; i<3; i++)
    {

        if(IDvendedor!=1)
        {
            gotoxy (2,10);
            cout<<"ID DE VENDEDOR INCORRECTO. INTENTE NUEVAMENTE: ";
            cin>>IDvendedor;
            j++;

            if(j>2)
            {
                gotoxy (2,11);
                cout<<"HA SUPERADO LA CANTIDAD DE INTENTOS. BLANQUEAR ID";
                exit(-1);
            }
        }

        if(IDvendedor==1)
        {
            gotoxy (2,10);
            menuPrincipal();
        }
    }

    gotoxy (2,22);
    cin.ignore();
    anykey();
}

void Menu::menuPrincipal()
{
    do
    {
        cls();
        system("mode con: cols=80 lines=25"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA A 80 COLUMNAS Y 25 FILAS
        system("COLOR 70"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
        dibujarCuadro(0,0,78,24); //SE DIBUJA EL CUADRO PRINCIPAL
        dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
        gotoxy(22,2);
        cout<<"PIZZA LAB - PROGRAMANDO TU SABOR";

        gotoxy (2,6);
        cout<<"MENU PRINCIPAL";
        gotoxy (2,7);
        cout<<"------------------";
        gotoxy (2,10);
        cout<<"INGRESE UNA OPCION: ";

        gotoxy (2,13);
        cout<<"1 - MODO VENTA: ";
        gotoxy (2,14);
        cout<<"2 - MODO CONSULTA: ";
        gotoxy (2,15);
        cout<<"3 - AJUSTES: ";
        gotoxy (2,16);
        cout<<"0 - SALIR DEL PROGRAMA: ";

        gotoxy (2,18);
        cout<<"->: ";
        cin>>Opcion;



        switch (Opcion)
        {
        case 1:
            menuVenta();
            break;
        case 2:
            menuConsulta();;
            break;
        case 3:
            menuAjuste();
            break;
        case 0:
            exit(-1);
            break;

        default:
            break;
        }

    }
    while(Opcion!=0);
    exit(-1);
    // menuIDvendedor();

}


//FUNCION GOTOXY
void Menu::gotoxy(int x,int y)
{
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y= y;
    SetConsoleCursorPosition(hcon,dwPos);
}

//FUNCION QUE DIBUJA EL CUADRO
void Menu::dibujarCuadro(int x1,int y1,int x2,int y2)
{
    int i;

    for (i=x1; i<x2; i++)
    {
        gotoxy(i,y1);
        printf("\304"); //linea horizontal superior
        gotoxy(i,y2);
        printf("\304"); //linea horizontal inferior
    }

    for (i=y1; i<y2; i++)
    {
        gotoxy(x1,i);
        printf("\263"); //linea vertical izquierda
        gotoxy(x2,i);
        printf("\263"); //linea vertical derecha
    }

    gotoxy(x1,y1);
    printf("\332");
    gotoxy(x1,y2);
    printf("\300");
    gotoxy(x2,y1);
    printf("\277");
    gotoxy(x2,y2);
    printf("\331");
}

void Menu::menuVenta()
{
    cls();
    system("mode con: cols=80 lines=25"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA A 80 COLUMNAS Y 25 FILAS
    system("COLOR 70"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
    dibujarCuadro(0,0,78,24); //SE DIBUJA EL CUADRO PRINCIPAL
    dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
    gotoxy(22,2);
    cout<<"PIZZA LAB - PROGRAMANDO TU SABOR";

    gotoxy (2,6);
    cout<<"MENU VENTA";
    gotoxy (2,7);
    cout<<"------------------";
    gotoxy (2,10);
    cout<<"INGRESE UNA OPCION: ";

    gotoxy (2,13);
    cout<<"1 - ATENDER CLIENTE: ";
    gotoxy (2,14);
    cout<<"2 - CERRAR MESA: ";
    gotoxy (2,15);
    cout<<"3 - VOLVER AL MENU PRINCIPAL: ";
    gotoxy (2,16);
    cout<<"0 - SALIR DEL PROGRAMA: ";

    gotoxy (2,18);
    cout<<"->: ";
    cin>>Opcion;

    switch (Opcion)
    {
    case 1:

        break;
    case 2:

        break;
    case 3:
        menuPrincipal();
        break;
    case 0:
        exit(-1);
        break;

    default:
        break;
    }

    gotoxy (2,22);
    cin.ignore();
    anykey();

}

void Menu::menuConsulta()
{
    cls();
    system("mode con: cols=80 lines=25"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA A 80 COLUMNAS Y 25 FILAS
    system("COLOR 70"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
    dibujarCuadro(0,0,78,24); //SE DIBUJA EL CUADRO PRINCIPAL
    dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
    gotoxy(22,2);
    cout<<"PIZZA LAB - PROGRAMANDO TU SABOR";

    gotoxy (2,6);
    cout<<"MENU CONSULTA";
    gotoxy (2,7);
    cout<<"------------------";
    gotoxy (2,10);
    cout<<"INGRESE UNA OPCION: ";

    gotoxy (2,13);
    cout<<"1 - LISTADOS: ";
    gotoxy (2,14);
    cout<<"2 - CONSULTAS: ";
    gotoxy (2,15);
    cout<<"3 - INFORMES: ";
    gotoxy (2,16);
    cout<<"4 - VOLVER AL MENU PRINCIPAL: ";
    gotoxy (2,17);
    cout<<"0 - SALIR DEL PROGRAMA: ";

    gotoxy (2,19);
    cout<<"->: ";
    cin>>Opcion;
    switch (Opcion)
    {
    case 1:

        break;
    case 2:

        break;
    case 3:

        break;
    case 4:
        menuPrincipal();
        break;
    case 0:
        exit(-1);
        break;

    default:
        break;
    }

    gotoxy (2,22);
    cin.ignore();
    anykey();
}

void Menu::menuAjuste()
{
    cls();
    system("mode con: cols=80 lines=25"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA A 80 COLUMNAS Y 25 FILAS
    system("COLOR 70"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
    dibujarCuadro(0,0,78,24); //SE DIBUJA EL CUADRO PRINCIPAL
    dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
    gotoxy(22,2);
    cout<<"PIZZA LAB - PROGRAMANDO TU SABOR";

    gotoxy (2,6);
    cout<<"MENU AJUSTE";
    gotoxy (2,7);
    cout<<"------------------";
    gotoxy (2,10);
    cout<<"INGRESE UNA OPCION: ";

    gotoxy (2,13);
    cout<<"1 - CARGAR Y/O MODIFICAR PRODUCTO: ";
    gotoxy (2,14);
    cout<<"2 - CARGAR Y/O MODIFICAR PROVEEDOR: ";
    gotoxy (2,15);
    cout<<"3 - CAMBIAR ID DE VENDEDOR: ";
    gotoxy (2,16);
    cout<<"4 - VOLVER AL MENU PRINCIPAL: ";
    gotoxy (2,17);
    cout<<"0 - SALIR DEL PROGRAMA: ";

    gotoxy (2,19);
    cout<<"->: ";
    cin>>Opcion;

    switch (Opcion)
    {
    case 1:

        break;
    case 2:

        break;
    case 3:

        break;
    case 4:
        menuPrincipal();
        break;
    case 0:
        exit(-1);
        break;

    default:
        break;
    }

    gotoxy (2,22);
    cin.ignore();
    anykey();

}

