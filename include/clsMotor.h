#ifndef CLSMOTOR_H
#define CLSMOTOR_H
#include <clsError.h>
#include <clsEvent.h>
#include <clsMode.h>
#include <clsScreen.h>
#include <adnConsts.h>
#include <clsGame.h>
#include "clsPresentacion.h"

class clsMotor
{
private:
    clsEvent event;
    clsMode mode;
    clsScreen screen;
    clsError error;
    clsGame game;
    clsPresentacion presentacion;

public:
    int init();
    int run();
};

#endif // CLSMOTOR_H
