#ifndef CLSARCO_H
#define CLSARCO_H
#include <clsScreen.h>
#include <clsEvent.h>
#include <adnConsts.h>
#include <clsButton.h>
#include <clsError.h>
#include <clsFondo.h>
#include <clsJugador.h>
#include <clsArquero.h>
#include <clsTimer.h>
#include <clsPelota.h>


class clsArco : public clsSprite
{
    private:
        clsScreen* screen;
        clsJugador player;
        clsEvent* event;
        clsError error;
        clsFondo fondo;
        clsArquero arquero;
        clsTimer timer;
        clsButton potencyBar[5];
        clsButton matrizArco[3][3];
        clsPelota pelota;
        bool gol; //(adentro/afuera)

    protected:
        void inherit(){};

    public:
        int init(clsScreen *, clsEvent *);
        void mostrarArco();
        void mostrarPos(bool);
        bool patear();
        bool atajar();
        bool entro(int posx, int posy, int potencia); //1 si fue adentro del arco
        int setPotencyBar();
};

#endif // CLSARCO_H
