#ifndef CONJUNTO_H
#define CONJUNTO_H
#include "lista.h"

class Conjunto: public Lista
{
public:
    Conjunto(int dato);
    virtual bool add(int dato);
};

#endif // CONJUNTO_H
