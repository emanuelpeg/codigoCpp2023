#include "box.h"

template<class T>
T *Box<T>::getDato() const
{
    return dato;
}

template<class T>
Box<T>::Box()
{
}

template<class T>
Box<T>::Box(T dato)
{
    this->dato = new T;
    *this->dato = dato;
}

template<class T>
bool Box<T>::isEmpty()
{
    return this->dato == 0;
}

template<class T>
Box<T> Box<T>::operator+(Box<T> other)
{
    if (this->isEmpty() && other.isEmpty())
        return Box<T>();
    if (this->isEmpty())
        return Box<T>(*other.dato);
    if (other.isEmpty())
        return Box<T>(*this->dato);
    return Box<T>(*this->dato + *other.dato);
}
