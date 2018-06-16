#ifndef CLSGAME_H
#define CLSGAME_H
#include <clsError.h>
#include <clsEvent.h>
#include <clsScreen.h>
#include <clsButton.h>
#include "clsJugador.h"
#include "clsArco.h"
#include "clsArquero.h"
#include "clsPelota.h"
#include "clsGame.h"

using namespace std;
class clsGame
{
    private:
        clsError error;
        clsEvent *event;
        clsScreen *screen;

        clsPelota ball;
        clsJugador player;
        clsArquero arquero;
        clsArco arco;
        clsButton potencyBar[5];

    public:
        int init(clsScreen*, clsEvent*);
        int run();
        int setPotencyBar();
        //hacer un screen para los niveles y el ayuda, ver con seba
};

#endif // CLSGAME_H
