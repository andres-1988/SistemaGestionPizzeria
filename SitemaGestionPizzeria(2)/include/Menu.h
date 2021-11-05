#ifndef MENU_H
#define MENU_H


class Menu
{
public:
    Menu();

    //PROTOTIPOS DE LAS FUNCIONES
    void dibujarCuadro(int x1,int y1,int x2,int y2);
    void gotoxy(int x,int y);
    void menuIDvendedor();
    void menuPrincipal();
    void menuVenta();
    void menuConsulta();
    void menuAjuste();


protected:

private:
    int Opcion;
};

#endif // MENU_H
