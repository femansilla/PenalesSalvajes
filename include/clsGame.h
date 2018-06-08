#ifndef CLSGAME_H
#define CLSGAME_H
#include <iostream>
#include "clsJugador.h"
#include "clsArco.h"
#include "clsArquero.h"
#include "clsPelota.h"

using namespace std;
class clsGame
{
    private:
        clsPelota ball();
        clsJugador player();
        clsArquero arquero();
        clsArco arco();

    public:
        clsGame();
        int run();
};

#endif // CLSGAME_H
