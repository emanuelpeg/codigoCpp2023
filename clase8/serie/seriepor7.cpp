#include "seriepor7.h"
#include <cstdlib>
#include <ctime>
SeriePor7::SeriePor7()
{

}

void SeriePor7::generar()
{
    srand(time(0));
    int semilla = (rand() % 50);
    for (int i = 0; i < 4; i++){
        this->nros[i] = semilla + i * 7;
    }
}
