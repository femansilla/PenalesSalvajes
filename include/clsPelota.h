#ifndef CLSPELOTA_H
#define CLSPELOTA_H
#include "clsError.h"
#include "clsImage.h"
#include "clsEvent.h"
#include "clsScreen.h"

class clsPelota
{
    private:
        int potencia, posX, posY = 0;
        bool gol; //(true, adentro / false, afuera)
};

#endif // CLSPELOTA_H
