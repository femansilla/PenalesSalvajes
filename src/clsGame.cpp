#include "clsGame.h"

int clsGame::init(clsScreen *scr, clsEvent *ev)
{
    error.set(0);
    screen = scr;
    event = ev;

//    error.set(mensaje.init(screen, event));
//    if (error.get()) return error.get();

    error.set(marcador.init(screen, event));
    if (error.get())
        return error.get();

//
    error.set(arco.init(screen, event));
    if (error.get())
        return error.get();

    error.set(mensaje.init(screen, event));
    if (error.get())
        return error.get();

}

void clsGame::Marcador(bool gol){

    //mostrarMarcado

}


void mostrarMarcado(){


}

int clsGame::run()
{
    bool gol;
   //for(int y = 0; y < 10; y++)
   while(true){
        gol=arco.patear();
        cout<<"entre a atajar y salir de patear"<<endl;
        mensaje.mostrar(gol);
        //Marcador(gol);
        gol=arco.atajar();
        mensaje.mostrar(gol);
        //Marcador(gol);
   }
}


