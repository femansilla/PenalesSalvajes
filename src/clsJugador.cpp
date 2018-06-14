#include "clsJugador.h"

int clsJugador::init(clsScreen *scr, clsEvent *ev)
{
    error.set(0);
    screen = scr;
    event = ev;
    setItems(1);

    error.set(load("IMAGENES/player/p11.PNG"));
    if(error.get()) return error.get();

    setX(550);
    setY(0);
}

void clsJugador::setDificultad(int variableParaUsarComoParametroEnElIFDeDificultad){
    dificultad = variableParaUsarComoParametroEnElIFDeDificultad;
}

void clsJugador::setPotencia(int putencio){
    dificultad = putencio;
}

void clsJugador::mostrar(){
    setI(0);
    paste(screen->getPtr());
    screen->refresh();
}

bool clsJugador::patear(int posx, int posy, int potencia)
{
    if(potencia >= dificultad && potencia <= dificultad)
        return false;
    else
        return true;
}
