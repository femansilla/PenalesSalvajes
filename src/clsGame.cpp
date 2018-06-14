#include "clsGame.h"

int clsGame::init(clsScreen *scr, clsEvent *ev)
{
    error.set(0);
    screen = scr;
    event = ev;

//    error.set(mensaje.init(screen, event));
//    if (error.get()) return error.get();

    error.set(ball.init(screen, event));
    if (error.get()) return error.get();

    error.set(player.init(screen, event));
    if (error.get()) return error.get();

    error.set(arquero.init(screen, event));
    if (error.get()) return error.get();
//
    error.set(arco.init(screen, event));
    if (error.get()) return error.get();
}

int clsGame::run()
{
    arco.mostrarArco();
    arquero.mostrarArquero();
    player.setDificultad(4);
    //player.setPotencia(5);
    if(player.patear(2,8,4))
        player.mostrar();
    //player.mostrar();
}


