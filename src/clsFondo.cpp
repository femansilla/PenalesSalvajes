#include "clsFondo.h"


int clsFondo::init(clsScreen *scr, clsEvent *ev)
{
    this->screen=scr;
    this->event=ev;
    error.set(0);
    setItems(1);
    setI(0);
    error.set(load("Screen01.png"));
    if(error.get()) return error.get();

    setX(0);
    setY(0);
    return error.get();
}

void clsFondo::PantallaPrincipal(){
    setI(0);
    paste(screen->getPtr());
}
