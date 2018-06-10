#ifndef CLSFONDO_H
#define CLSFONDO_H
#include <clsSprite.h>
#include <clsScreen.h>
#include <clsEvent.h>
#include <clsError.h>

class clsFondo : public clsSprite
{
private:
    clsScreen* screen;
    clsEvent* event;
    clsError error;
protected:
    void inherit(){};
public:
    int init(clsScreen*,clsEvent*);
    void PantallaPrincipal();
    void fondo02();
};

#endif // CLSFONDO_H
