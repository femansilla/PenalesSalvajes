#include "clsGame.h"

int clsGame::init(clsScreen *scr, clsEvent *ev)
{
    error.set(0);
    screen = scr;
    event = ev;

//    error.set(mensaje.init(screen, event));
//    if (error.get()) return error.get();

//    error.set(ball.init(screen, event));
//    if (error.get()) return error.get();
//
//    error.set(player.init(screen, event));
//    if (error.get()) return error.get();
//
//    error.set(arquero.init(screen, event));
//    if (error.get()) return error.get();
//
    error.set(arco.init(screen, event));
    if (error.get()) return error.get();
}

int clsGame::run()
{
    //tengo q hacer un par de boludeces gigantes, deffinir ele etamanio de la pantalla y ver que onda con la interaccion
    //entre tantos sprites.
    arco.mostrarArco();
}
