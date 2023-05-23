#include "arbolbinario.h"

ArbolBinario::ArbolBinario(int dato)
{
    this->dato = dato;
}

bool ArbolBinario::operator+(int dato)
{
    if (this->dato != dato) {
        if (this->dato > dato) {
            if (this->izq == NULL) {
                this->izq = new ArbolBinario(dato);
            } else {
                (*this->izq) + dato;
            }
        } else {
            if (this->der == NULL) {
                this->der = new ArbolBinario(dato);
            } else {
                (*this->der) + dato;
            }
        }
        return true;
    }

    return false;
}

bool ArbolBinario::existe(int dato)
{
    if (this->dato == dato) return true;
    if (this->dato > dato) {
        if (this->izq == NULL) {
            return false;
        } else {
            return this->izq->existe(dato);
        }
    } else {
        if (this->der == NULL) {
            return false;
        } else {
            return this->der->existe(dato);
        }
    }
}

std::ostream& operator<<(std::ostream& os, const ArbolBinario obj) {
    if (obj.izq != NULL) {
        os << *(obj.izq);
    }
    os << obj.dato << " ";

    if (obj.der != NULL) {
        os << *(obj.der);
    }
    return os;
}
