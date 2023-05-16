#ifndef LISTA_H
#define LISTA_H
#include <iostream>

class Lista
{
protected:
    int dato;
    Lista * sig = 0;
public:
    Lista(int dato);
    virtual bool add(int dato);
    int get(int indice);
    int size();
    friend std::ostream& operator<<(std::ostream& os, const Lista& obj);
    Lista operator+(int dato);
    Lista* remove(int indice);
    bool contiene(int dato);
};

#endif // LISTA_H
