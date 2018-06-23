#include "clsPelota.h"

int clsPelota::init(clsScreen *scr, clsEvent *ev)
{
    error.set(0);
    screen = scr;
    event = ev;
    setItems(1);

    error.set(load("IMAGENES/buttons/btnpelota.png"));
    if(error.get()) return error.get();
}

void clsPelota::mostrarPelota(int x, int y){
    cout<<"x "<<x<<endl;
    cout<<"y "<<y<<endl;
    setX(x);
    setY(y);
    paste(screen->getPtr());
}
