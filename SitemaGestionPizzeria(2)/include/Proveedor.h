#ifndef PROVEEDOR_H
#define PROVEEDOR_H

#include "Persona.h"
#include "Fecha.h"


class Proveedor : public Persona
{
    public:
        Proveedor();
        Fecha cargarFecha();
        Fecha mostrarFecha();

        void setDireccion(char *direccion);
        char *getDireccion();

        void setProductoComercializado(char *productoComercializado);
        char *getProductoComercializado();

        void cargarProveedor();
        void mostrarProveedor();

    protected:

    private:
        char _direccion[40];
        char _productoComercializado[30];
        Fecha _fecha;
};

#endif // PROVEEDOR_H
