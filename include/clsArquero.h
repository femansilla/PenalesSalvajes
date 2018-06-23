#ifndef CLSARQUERO_H
#define CLSARQUERO_H
#include "clsJugador.h"
#include "clsError.h"
#include "clsImage.h"
#include "clsEvent.h"
#include "clsScreen.h"

class clsArquero : public clsJugador
{
    protected:
        void inherit() {};

    private:
        bool atajo; // (true, adentro / false, afuera)
        int nivel; // (% dificultad, posibilidad de atajar
                    //		baja: 30%
                    //		media: 50%
                    //		alta:80%
                    //		)
     public:
         int init(clsScreen *, clsEvent *);
         void mostrarArquero(bool);
         void mostrarArquero(bool,int,int);
         bool Atajar();
         bool atajar(int posx, int posy, int nivel); //1 si atajo

};

#endif // CLSARQUERO_H
