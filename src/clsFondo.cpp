#include "clsFondo.h"

int clsFondo::init(clsScreen *scr, clsEvent *ev)
{
    error.set(0);
    screen=scr;
    event=ev;
    setItems(1);

    error.set(load("IMAGENES/Screen01.png"));
    if(error.get()) return error.get();

    setX(0);
    setY(0);
}

void clsFondo::PantallaPrincipal(){
    setI(0);
    paste(screen->getPtr());
}
