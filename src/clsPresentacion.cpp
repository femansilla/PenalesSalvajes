#include "clsPresentacion.h"

int clsPresentacion::init(clsScreen *scr, clsEvent *ev)
{
    error.set(0);
    screen = scr;
    event = ev;

    error.set(fondo.init(screen, event));
    if (error.get()) return error.get();

    error.set(continuar.init(screen, event));
    if (error.get()) return error.get();

    error.set(jugar.init(screen, event));
    if (error.get()) return error.get();

    error.set(ayuda.init(screen, event));
    if (error.get()) return error.get();

    error.set(boton_salir.init(screen, event));
    if (error.get()) return error.get();

    error.set(juego.init(screen, event));
    if (error.get()) return error.get();

    return error.get();
}

int clsPresentacion::run()
{
    error.set(0);
    screen->clean(BLACK);              //Limpio la pantalla
    fondo.PantallaPrincipal();

    continuar.setButton(14);
    error.set(continuar.setPath());
    if (error.get()) return error.get();
    continuar.mostrar(screen->getHeight()/2, 150);

    jugar.setButton(10);
    error.set(jugar.setPath());
    if (error.get()) return error.get();
    jugar.mostrar((screen->getHeight()/2), 270);

    ayuda.setButton(15);
    error.set(ayuda.setPath());
    if (error.get()) return error.get();
    ayuda.mostrar((screen->getHeight()/2), 390);

    boton_salir.setButton(8);
    error.set(boton_salir.setPath());
    if (error.get()) return error.get();
    boton_salir.mostrar((screen->getHeight()/2), 510);

    screen->refresh();

    while(true)  //Ciclo del programa
    {
        if(event->wasEvent())  //Verifico si hay evento
        {
            if(event->getEventType() == MOUSE_DOWN)  //Verifico si hay evento de teclado
            {
                mouseCommand(event->getKey());
            }
        }
    }
    return error.get();
}

int clsPresentacion::mouseCommand(Uint16 key){

    error.set(0);

    if(continuar.pressed()){
        cout << "clic continuar";
    }

    if(jugar.pressed()){
        error.set(juego.run());
        if (error.get()) return error.get();
    }

    if(ayuda.pressed()){
            cout << "clic ayuda";
    }

    if(boton_salir.pressed()){
        cout << "clic salir";
        exit(0);
    }
    return error.get();
}
