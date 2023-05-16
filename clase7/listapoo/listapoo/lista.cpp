#include "lista.h"

Lista::Lista(int dato)
{
    this->dato = dato;
}

bool Lista::add(int dato)
{
    if (this->sig == 0) {
        this->sig = new Lista(dato);
    } else {
        this->sig->add(dato);
    }
    return true;
}

int Lista::get(int indice)
{
    if (indice == 0) {
        return this->dato;
    } else {
        return this->sig->get(indice - 1);
    }
}

int Lista::size()
{
    if (this->sig == 0) {
        return 1;
    } else {
        return this->sig->size() + 1;
    }
}

Lista Lista::operator+(int dato)
{
    this->add(dato);
    return *this;
}

Lista* Lista::remove(int indice)
{
    if (indice == 0) {
        return this->sig;
    } else {
        if (indice == 1) {
            auto aux = this->sig;
            this->sig = this->sig->sig;
            delete aux;
            return this;
        } else {
            this->sig = (this->sig->remove(indice - 1));
            return this;
        }

    }
}

bool Lista::contiene(int dato)
{
    if (dato == this->dato) return true;
    if (this->sig == 0) return false;
    return this->sig->contiene(dato);
}

std::ostream& operator<<(std::ostream& os, const Lista& obj) {
    os << obj.dato;
    if (obj.sig != 0){
        os << ", "<< *(obj.sig);
    }
    return os;
}
