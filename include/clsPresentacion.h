#ifndef CLSPRESENTACION_H
#define CLSPRESENTACION_H
#include <clsScreen.h>
#include <clsEvent.h>
#include <adnConsts.h>
#include <clsButton.h>
#include <clsError.h>
#include <clsFondo.h>

class clsPresentacion
{
protected:
    clsEvent *event;
    clsScreen *screen;
    clsError error;
    clsFondo fondo;

    clsButton continuar;
    clsButton jugar;
    clsButton ayuda;
    clsButton boton_salir;

    public:
        int init(clsScreen *, clsEvent *);
        int run();
        int mouseCommand(Uint16);
};

#endif // CLSPRESENTACION_H
