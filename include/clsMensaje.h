#ifndef CLSJUGADOR_H
#define CLSJUGADOR_H
#include <clsScreen.h>
#include <clsEvent.h>
#include <adnConsts.h>
#include <clsError.h>
#include <clsSprite.h>

class clsMensaje : public clsSprite
{
    protected:
        void inherit() {};

        clsScreen* screen;
        clsEvent* event;
        clsError error;

    public:
        int init(clsScreen *, clsEvent *);
        void mostrar(bool);
};

#endif // CLSJUGADOR_H
