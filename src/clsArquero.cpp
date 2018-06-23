#include "clsArquero.h"


int clsArquero::init(clsScreen *scr, clsEvent *ev)
{
    error.set(0);
    screen = scr;
    event = ev;
    random.init();
    setItems(1);
    error.set(load("IMAGENES/portero/portero05.png"));
    if(error.get())
        return error.get();
}

void clsArquero::mostrarArquero(bool A)
{
    if(A){
        // muestro arquero con pelota
    error.set(load("IMAGENES/portero/portero03.png"));
    if(error.get())
        cout<<"Error con imagen"<<endl;
    }else{
    error.set(load("IMAGENES/portero/portero05.png"));
    if(error.get())
        cout<<"Error con imagen"<<endl;
    }

    this->mostrar(650,280);
    screen->refresh();
}

void clsArquero::mostrarArquero(bool A,int x,int y)
{
    if(A){
        // muestro arquero con pelota
    error.set(load("IMAGENES/portero/portero03.png"));
    if(error.get())
        cout<<"Error con imagen"<<endl;
    }else{
    error.set(load("IMAGENES/portero/portero05.png"));
    if(error.get())
        cout<<"Error con imagen"<<endl;
    }

    this->mostrar(x,y);
    screen->refresh();
}


bool clsArquero::Atajar()
{
    //retirar luego
    dificultad=0;
    int bajo=0,medio,alto;
    //
    int posibilidad=random.getNumber(10)+1;
    if(dificultad==bajo)
    {
        if(posibilidad > 7)
        {
            cout<<"Atajo"<<endl;
            return true;
        }
        else{
            cout<<"No atajo"<<endl;
            return false;
        }

    }
    if(dificultad==medio)
    {
        if(posibilidad > 5)
        {
            cout<<"Atajo "<<endl;
            return true;
        }
        else{
            cout<<"No atajo"<<endl;
            return false;
        }
    }
    if(dificultad==alto)
    {
        if(posibilidad > 3)
        {
            cout<<"Atajo "<<endl;
            return true;
        }
        else
            return false;
    }
}

