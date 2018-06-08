#include "clsMotor.h"

int clsMotor::init()
{
    error.set(0);

    error.set(mode.init(DEFAULT));
    if (error.get()) return error.get();

    error.set(screen.init( 1025, //mode.getScrWidth(),
                          512,//mode.getScrHeight(),
                          mode.getScrDepth(),
                          ENABLED,
                          RESIZABLE
                          ));
    if (error.get()) return error.get();

    error.set(presentacion.init(&screen,&event));
    if(error.get()) return error.get();

    screen.setTitle("Penales Salvajes");
    return error.get();
}

int clsMotor::run()
{
    error.set(0);

    error.set(presentacion.run());
    if (error.get()) return error.get();

    bool salir = false;

    error.set(game.run());
    if (error.get()) return error.get();

    while(!salir)  //Ciclo del programa
    {
        if(event.wasEvent())  //Verifico si hay evento
        {
            if(event.getEventType() == MOUSE_LEFT_BUTTON)  //Verifico si hay evento de teclado
            {

                screen.refresh();

            }
        }
    }


//    error.set(texto.loadFont("FONTS/Griffy-Regular.ttf", 52));
//    if (error.get()) return error.get();
//
//    screen.clean(LIGHTBLUE);
//    texto.setFontColor(BLACK);
//    texto.centredWrite("MENU PRINCIPAL", 100, screen.getPtr());
//    texto.centredWrite("jugar", 150, screen.getPtr());
//    texto.centredWrite("ayuda", 210, screen.getPtr());
//    texto.centredWrite("salir", 270, screen.getPtr());
//

    return error.get();
}
