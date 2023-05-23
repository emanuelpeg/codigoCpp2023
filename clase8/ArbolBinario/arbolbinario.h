#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H
#include <stdlib.h>
#include <iostream>

class ArbolBinario
{
private:
    int dato;
    ArbolBinario* der = NULL;
    ArbolBinario* izq = NULL;
public:
    ArbolBinario(int dato);
    bool operator+(int dato);
    bool existe(int dato);
    friend std::ostream& operator<<(std::ostream& os, const ArbolBinario obj);
};

#endif // ARBOLBINARIO_H
