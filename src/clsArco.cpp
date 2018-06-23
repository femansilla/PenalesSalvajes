#include "clsArco.h"



int clsArco::init(clsScreen *scr, clsEvent *ev)
{

    error.set(0);
    screen = scr;
    event = ev;
    setItems(1);

    error.set(load("IMAGENES/Screen02.png"));
    if(error.get())
        return error.get();
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j< 3; j++)
        {
            matrizArco[i][j].init(screen, event);
        }
    }

    setX(0);
    setY(0);

    for(int i = 0; i < 5; i++)
    {
        error.set(potencyBar[i].init(screen, event));
        if (error.get())
            return error.get();
    }
    error.set(player.init(screen, event));
    if (error.get())
        return error.get();

    error.set(arquero.init(screen, event));
    if (error.get())
        return error.get();

    error.set(pelota.init(screen, event));
    if (error.get())
        return error.get();
}


int clsArco::setPotencyBar()
{
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

                if(event->getKey() == KEY_SPACE)

                    return i;


        }
    }

}

void clsArco::mostrarArco()
{
    setI(0);
    paste(screen->getPtr());
    for(int x = 0; x < 3; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            matrizArco[x][y].setButton(18);
            matrizArco[x][y].setPath();
            matrizArco[x][y].setX(x*matrizArco[x][y].getWidth()+480);
            matrizArco[x][y].setY(y*matrizArco[x][y].getHeight()+200);
            matrizArco[x][y].Setting(x*matrizArco[x][y].getWidth()+480,y*matrizArco[x][y].getHeight()+200);
        }
    }
       screen->refresh();
}


bool clsArco::atajar(){

    bool Atajo=false;
    mostrarArco();
    arquero.mostrarArquero(false);
    screen->refresh();
    while(true)
    {
        if(event->wasEvent())
        {
            if(event->getEventType() == MOUSE_DOWN)
            {
                for(x = 0; x < 3; x++)
                {
                    for( y = 0; y < 3; y++)
                    {
                        if(matrizArco[x][y].pressed())
                        {
                            player.setDificultad(0);
                            if(player.patearCOM())
                            {

                                Atajo=arquero.Atajar();
                                if(true)
                                {
                                    //ATAJO
                                    mostrarArco();
                                    player.mostrar(600, 500);
                                    arquero.mostrarArquero(true,x*matrizArco[x][y].getWidth()+450,280);
                                }
                                else
                                {
                                //GOL
                                matrizArco[x][y].mostrar(x*matrizArco[x][y].getWidth()+450,y*matrizArco[x][y].getHeight()+200);
                                }
                            }
                            else
                            {
                                //AFUERA
                                arquero.mostrarArquero(false,x*matrizArco[x][y].getWidth()+450,280);
                                matrizArco[x][y].mostrar(x*matrizArco[x][y].getWidth()+480,80);
                                Atajo=false;
                            }
                            screen->refresh();
                            timer.wait(3000);
                            return Atajo;
                        }
                    }
                }
            }
            if(event->getKey() == KEY_ESCAPE)
                exit(0);
        }
    }
}

bool clsArco::patear()
{
    bool Atajo=false;
    int ValorX=0,ValorY=0;
    mostrarArco();
    arquero.mostrarArquero(false);
    screen->refresh();
    while(true)
    {
        if(event->wasEvent())
        {
            if(event->getEventType() == MOUSE_DOWN)
            {
                 ValorX = event->getCursorX();
                 ValorY = event->getCursorY();
                for(x = 0; x < 3; x++)
                {
                    for( y = 0; y < 3; y++)
                    {
                        if(matrizArco[x][y].pressed())
                        {
                            player.setPotencia(this->setPotencyBar());
                            player.mostrar(600, 500);
                            matrizArco[x][y].setPath();
                            if(player.patear())
                            {

                                Atajo=arquero.Atajar();
                                if(Atajo)
                                {
                                //ATAJO
                                    mostrarArco();
                                    arquero.mostrarArquero(true,x*matrizArco[x][y].getWidth()+450,280);
                                }
                                else
                                {
                                //GOL
                                pelota.mostrarPelota(ValorX,ValorY);

                                }
                            }
                            else
                            {
                                //AFUERA
                                pelota.mostrarPelota(ValorX,80);
                                Atajo=false;
                            }
                            screen->refresh();
                            timer.wait(2000);
                            return Atajo;
                        }
                    }
                }
            }
            if(event->getKey() == KEY_ESCAPE)
                exit(0);
        }
    }
}
