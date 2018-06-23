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
#include "clsTimer.h"
#include "clsMensaje.h"

using namespace std;
class clsGame
{
    private:
        clsError error;
        clsEvent *event;
        clsScreen *screen;
        clsArquero arquero;
        clsArco arco;
        clsButton marcador;
        clsMensaje mensaje;


    public:
        int init(clsScreen*, clsEvent*);
        int run();
        void Marcador(bool);
        void Indicador(bool);
        //hacer un screen para los niveles y el ayuda, ver con seba
};

#endif // CLSGAME_H
