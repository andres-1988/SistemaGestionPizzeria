#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include <Menu.h>
#include <rlutil.h>
#include "Cliente.h"
#include "Proveedor.h"
#include "Producto.h"

using namespace std;

int main()
{
   Proveedor aux;
   aux.cargarProveedor();
   aux.mostrarProveedor();

   //aux.menuIDvendedor();

    return 0;

}
