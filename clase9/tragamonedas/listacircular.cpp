#include "listacircular.h"

template<class T>
ListaCircular<T>::ListaCircular()
{

}

template<class T>
void ListaCircular<T>::add(T dato)
{
    vec.push_back(dato);
}

template<class T>
void ListaCircular<T>::clear()
{
    this->vec.clear();
    index = 0;
}

template<class T>
T ListaCircular<T>::next()
{
    T aux = this->vec[this->index];
    index++;
    if (index == vec.size()) {
        index = 0;
    }
    return aux;
}
