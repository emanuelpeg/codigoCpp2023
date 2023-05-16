#include "conjunto.h"


Conjunto::Conjunto(int dato): Lista(dato)
{

}

bool Conjunto::add(int dato)
{
    if (!this->contiene(dato)) {
        if (this->sig == 0) {
            this->sig = new Conjunto(dato);
        } else {
            this->sig->add(dato);
        }
        return true;
    }
    return false;
}
