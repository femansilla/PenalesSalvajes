#include "clsArquero.h"


int clsArquero::init(clsScreen *scr, clsEvent *ev)
{
    error.set(0);
    screen = scr;
    event = ev;
    setItems(1);

    error.set(load("IMAGENES/portero/portero02.png"));
    if(error.get()) return error.get();
}

void clsArquero::mostrarArquero(){
    this->mostrar(650,
                  270
                  );
    screen->refresh();
}
