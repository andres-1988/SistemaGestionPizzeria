#ifndef PERSONA_H
#define PERSONA_H


class Persona
{
    public:
        Persona();
        void setNombre(char *nombre);
        void setTelefono(int telefono);
        char *getNombre();
        int getTelefono();

        void cargar();
        void mostrar();

    protected:

    private:
        char _nombre[30];
        int _telefono;

};

#endif // PERSONA_H
