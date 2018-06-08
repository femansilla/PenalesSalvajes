#ifndef CLSARCO_H
#define CLSARCO_H
#include "clsError.h"
#include "clsImage.h"
#include "clsEvent.h"
#include "clsScreen.h"

class clsArco
{
    private:
        int matriz[20][20];
        bool gol; //(adentro/afuera)
    public:
        bool entro(int posx, int posy, int potencia); //1 si fue adentro del arco
};

#endif // CLSARCO_H
