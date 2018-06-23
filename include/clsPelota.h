#ifndef CLSPELOTA_H
#define CLSPELOTA_H
#include <clsScreen.h>
#include <clsEvent.h>
#include <adnConsts.h>
#include <clsButton.h>
#include <clsError.h>

class clsPelota : public clsSprite
{
    protected:
        void inherit(){};
    private:
        clsScreen* screen;
        clsEvent* event;
        clsError error;

        int potencia, posX, posY = 0;
        bool gol; //(true, adentro / false, afuera)
    public:
        int init(clsScreen *, clsEvent *);
        void mostrarPelota(int, int);
};

#endif // CLSPELOTA_H
