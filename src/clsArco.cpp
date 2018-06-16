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
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j< 4; j++)
        {
            matrizArco[i][j].init(screen, event);
        }
    }

    setX(0);
    setY(0);
}

void clsArco::mostrarArco()
{
    setI(0);
    paste(screen->getPtr());

    for(int x = 0; x < 5; x++)
    {
        for(int y = 0; y < 4; y++)
        {
            matrizArco[x][y].setButton(/*3*/10);
            error.set(matrizArco[x][y].setPath());
            matrizArco[x][y].setX(x*matrizArco[x][y].getWidth()+240);
            matrizArco[x][y].setY(y*matrizArco[x][y].getHeight()+140);
//            matrizArco[x][y].mostrar(x*matrizArco[x][y].getWidth()+240,
//                                    y*matrizArco[x][y].getHeight()+140);
        }
    }

    screen->refresh();
}

void clsArco::mostrarPos()
{
    for(x = 0; x < 5; x++)
    {
        for( y = 0; y < 4; y++)
        {

            if(matrizArco[x][y].pressed())
            {
                matrizArco[x][y].mostrar(x*matrizArco[x][y].getWidth()+240,
                                         y*matrizArco[x][y].getHeight()+140);
            }
        }
    }
    screen->refresh();
}
