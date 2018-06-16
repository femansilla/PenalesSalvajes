#include "clsGame.h"

int clsGame::init(clsScreen *scr, clsEvent *ev)
{
    error.set(0);
    screen = scr;
    event = ev;

//    error.set(mensaje.init(screen, event));
//    if (error.get()) return error.get();

    error.set(ball.init(screen, event));
    if (error.get())
        return error.get();

    error.set(player.init(screen, event));
    if (error.get())
        return error.get();

    error.set(arquero.init(screen, event));
    if (error.get())
        return error.get();
//
    error.set(arco.init(screen, event));
    if (error.get())
        return error.get();

    for(int i = 0; i < 5; i++)
    {
        error.set(potencyBar[i].init(screen, event));
        if (error.get())
            return error.get();
    }
}

int clsGame::setPotencyBar(){
    while(true)
    {
        for(int i = 0; i < 5; i++)
        {
            potencyBar[i].setButton(i);
            potencyBar[i].setPathPotencyBar();
            potencyBar[i].mostrar(200,
                                  540);
            screen->refresh();
            if(event->wasEvent())
            {
                if(event->getKey() == KEY_SPACE)
                {
                    cout << "rtn: " << i << endl;
                    return i;
                }
            }
        }
    }
}


int clsGame::run()
{
    arco.mostrarArco();
    arquero.mostrarArquero();
    player.setDificultad(4);
    //player.setPotencia(5);
    if(!player.patear(2,8,4))
        player.mostrar(player.getWidth()+550,
                       player.getHeight()+500);

    while(true)
    {
        if(event->wasEvent())
        {
            if(event->getEventType() == MOUSE_DOWN)
            {
                arco.mostrarPos();
                break;
            }
        }
    }

    player.setPotencia(setPotencyBar());

    player.mostrar(600, 500);
}


