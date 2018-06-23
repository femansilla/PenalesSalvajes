#include "clsJugador.h"

int clsJugador::init(clsScreen *scr, clsEvent *ev)
{
    error.set(0);
    screen = scr;
    event = ev;
    setItems(1);

    random.init();
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
    potencia = putencio;
}

void clsJugador::mostrar(int x, int y)
{
    setX(x - getWidth()/2);
    setY(y - getHeight()/2);
    paste(screen->getPtr());
    screen->refresh();
}

bool clsJugador::patear()
{
    cout << "La potencia es: "<<potencia<< endl;
    int qw=random.getNumber(10)+1;
    cout<<"ramdom vale "<<qw<<endl;
    switch(potencia)
    {
    case 0:
    {
         cout << "La potencia deberia ser 0 pero es  "<<potencia<< endl;
        /*entra derecho*/
        return true;
    }
    break;

    case 1:
    {
        /*70% de posibilidad que entre*/
        if(qw > 7){
            cout<<"afuera "<<endl;
            return false;
        }
        else
            return true;
    }
    break;

    case 2:
    {
        /*50% que entre*/
        if(qw > 5){
            cout<<"afuera "<<endl;
            return false;
        }
        else
            return true;
    }
    break;

    case 3:
    {
        /*30%*/
        if(qw > 3){
            cout<<"afuera "<<endl;
            return false;
        }
        else
            return true;
    }
    break;

    case 4:
    {
        /*patea bien gato, le resto 150 y se va afuera la pelota*/
        return false;
    }
    break;

    default:
    {
        return false;
        /*puto el que lee*/
    }
    break;
    }
}

bool clsJugador::patearCOM()
{
    int qw=random.getNumber(10)+1;
    cout<<"ramdom vale "<<qw<<endl;
    switch(dificultad)
    {
        // 0 es dificil
    case 0:
    {
         cout << "La potencia deberia ser 0 pero es  "<<potencia<< endl;
        /*entra derecho*/
        return true;
    }
    break;
    // 1 es medio
    case 1:
    {
        /*70% de posibilidad que entre*/
        if(qw > 7){
            cout<<"afuera "<<endl;
            return false;
        }
        else
            return true;
    }
    break;

    // 2 bajo
    case 2:
    {
        /*50% que entre*/
        if(qw > 5){
            cout<<"afuera "<<endl;
            return false;
        }
        else
            return true;
    }
    break;

    default:
    {
        return false;
        /*puto el que lee*/
    }
    break;
    }
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
