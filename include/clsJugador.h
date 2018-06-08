#ifndef CLSJUGADOR_H
#define CLSJUGADOR_H
#include "clsError.h"
#include "clsImage.h"
#include "clsEvent.h"
#include "clsScreen.h"

class clsJugador
{
    private:
        int potencia, posX, posY = 0;
    public:
        bool patear(int posx, int posy, int potencia); //devuelve 1 si fue gol
};

#endif // CLSJUGADOR_H
