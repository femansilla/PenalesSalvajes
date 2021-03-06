#ifndef CLSJUGADOR_H
#define CLSJUGADOR_H
#include <clsScreen.h>
#include <clsEvent.h>
#include <adnConsts.h>
#include <clsButton.h>
#include <clsError.h>
#include <clsRandom.h>

class clsJugador  : public clsSprite
{
    protected:
        void inherit() {};

        clsScreen* screen;
        clsEvent* event;
        clsError error;

        clsRandom random;

        int dificultad, potencia=8, posX, posY = 0;
    public:
        int init(clsScreen *, clsEvent *);
        void mostrar(int, int);
        void setDificultad(int);
        void setPotencia(int);
        bool patearCOM();
        bool patear(); //devuelve 1 si fue gol
};

#endif // CLSJUGADOR_H
