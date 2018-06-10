#ifndef CLSPRESENTACION_H
#define CLSPRESENTACION_H
#include <clsScreen.h>
#include <clsEvent.h>
#include <adnConsts.h>
#include <clsButton.h>
#include <clsError.h>
#include <clsFondo.h>
#include <clsGame.h>

class clsPresentacion
{
    private:
        clsEvent *event;
        clsScreen *screen;
        clsError error;
        clsFondo fondo;

        clsButton continuar;
        clsButton jugar;
        clsButton ayuda;
        clsButton boton_salir;

        clsGame juego;

    public:
        int init(clsScreen *, clsEvent *);
        int run();
        int mouseCommand(Uint16);
};

#endif // CLSPRESENTACION_H
