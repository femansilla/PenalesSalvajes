#include "clsJugador.h"

int clsJugador::init(clsScreen *scr, clsEvent *ev)
{
    error.set(0);
    screen = scr;
    event = ev;
    setItems(1);

    error.set(load("IMAGENES/player/p11.PNG"));
    if(error.get())
        return error.get();
}

void clsJugador::setDificultad(int variableParaUsarComoParametroEnElIFDeDificultad)
{
    dificultad = variableParaUsarComoParametroEnElIFDeDificultad;
}

void clsJugador::setPotencia(int putencio)
{
    dificultad = putencio;
}

void clsJugador::mostrar(int x, int y)
{
    setX(x - getWidth()/2);
    setY(y - getHeight()/2);
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


//bool clsJugador::patear(int posx, int posy, int potencia)
//{
//    bool gol;
//        gol=envio_ramdon(potencia);
//        arco.adentro(gol);
//}
//
//bool clsArco::adentro(bool gol)
//{
//    //gol is true valido atajada
//    if(gol)
//    {
//        if(dificultad==facil)
//        {
//            gol=envio_ramdon(1);
//            arquero.ataja(gol);
//        }
//        if(dificultad==medio)
//        {
//            gol=envio_ramdon(2);
//            arquero.ataja(gol);
//        }
//        if(dificultad==alto)
//        {
//            gol=envio_ramdon(3);
//            arquero.ataja(gol);
//        }
//
//    }
//    else
//    {
//        arquero(true);
//    }
//}
//
//bool clsJugador::envio_ramdon(int opc)
//{
////retorna true es gol, retorna false ataja
//    if(opc == 1)
//    {
//        //ramdom 3 de 10
//        if(ramdom(10)+1>3)
//        {
//            return false;
//        }
//        else
//        {
//            return true;
//        }
//    }
//    if(opc == 2)
//    {
//        //ramdom 5 de 10
//        if(ramdom(10)+1>5)
//        {
//            return false;
//        }
//        else
//        {
//            return true;
//        }
//    }
//    if(opc == 3)
//    {
//        if(ramdom>7)
//        {
//            return false;
//        }
//        else
//        {
//            return true;
//        }
//        //ramdom 7 de 10
//    }
//}
