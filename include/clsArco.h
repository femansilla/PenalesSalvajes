#ifndef CLSARCO_H
#define CLSARCO_H
#include <clsScreen.h>
#include <clsEvent.h>
#include <adnConsts.h>
#include <clsButton.h>
#include <clsError.h>
#include <clsFondo.h>

class clsArco : public clsSprite
{
    private:
        clsScreen* screen;
        clsEvent* event;
        clsError error;
        clsFondo fondo;

        clsButton matrizArco[5][4];
        bool gol; //(adentro/afuera)

    protected:
        void inherit(){};

    public:
        int init(clsScreen *, clsEvent *);
        void mostrarArco();
        void mostrarPos();
        bool entro(int posx, int posy, int potencia); //1 si fue adentro del arco
};

#endif // CLSARCO_H
