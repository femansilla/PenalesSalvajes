#include "clsArco.h"

int clsArco::init(clsScreen *scr, clsEvent *ev)
{
    error.set(0);
    screen = scr;
    event = ev;
    setItems(1);

    error.set(load("IMAGENES/Screen02.png"));
    if(error.get()) return error.get();

    setX(0);
    setY(0);
}

void clsArco::mostrarArco(){
    setI(0);
    paste(screen->getPtr());
    screen->refresh();
}
