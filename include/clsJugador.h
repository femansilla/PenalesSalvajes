#ifndef CLSJUGADOR_H
#define CLSJUGADOR_H
#include <clsScreen.h>
#include <clsEvent.h>
#include <adnConsts.h>
#include <clsButton.h>
#include <clsError.h>

class clsJugador  : public clsSprite
{
    protected:
        void inherit() {};

        clsScreen* screen;
        clsEvent* event;
        clsError error;

        int dificultad, potencia, posX, posY = 0;
    public:
        int init(clsScreen *, clsEvent *);
        void mostrar();
        void setDificultad(int);
        void setPotencia(int);
        bool patear(int posx, int posy, int potencia); //devuelve 1 si fue gol
};

#endif // CLSJUGADOR_H
