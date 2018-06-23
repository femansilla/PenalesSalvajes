#include "clsMensaje.h"

int clsMensaje::init(clsScreen *scr, clsEvent *ev)
{
    error.set(0);
    screen = scr;
    event = ev;
    setItems(1);

    error.set(load("IMAGENES/mensajes/gol.PNG"));
    if(error.get())
        return error.get();

    error.set(load("IMAGENES/mensajes/atajo.PNG"));
    if(error.get())
        return error.get();
}

void clsMensaje::mostrar(bool gol)
{
    setX(100);
    setY(80);
    if(gol)
    {
        load("IMAGENES/mensajes/gol.PNG");
    }else{
        load("IMAGENES/mensajes/atajo.PNG");
    }

    paste(screen->getPtr());
    screen->refresh();
}
