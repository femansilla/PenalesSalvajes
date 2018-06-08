#include "clsMaso.h"

int clsMaso::init(clsScreen *scr, clsEvent *ev)
{
    error.set(0);
    this->screen = scr;
    this->event = ev;
    error.set(0);
    setItems(2);
    setI(0);
    error.set(load("IMAGENES/maso01.png"));
    if(error.get()) return error.get();

    setI(1);
    error.set(load("IMAGENES/maso02.png"));
    if(error.get()) return error.get();

    setX(0);
    setY(0);
    return error.get();
}

void clsMaso::pj()
{
    setI(0);
    setX(920);
    setY(520);
    paste(screen->getPtr());

    setI(1);
    setX(220);
    setY(50);
//    setX(0);
//    setY(0);
    paste(screen->getPtr());
}

void clsMaso::com()
{
    setI(0);
    setX(220);
    setY(50);
//    setX(0);
//    setY(0);
    paste(screen->getPtr());

    setI(1);
    setX(920);
    setY(520);

    paste(screen->getPtr());

}
