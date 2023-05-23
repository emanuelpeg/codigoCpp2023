#include <iostream>
#include "arbolbinario.h"
using namespace std;

int main()
{
    ArbolBinario arbol(5);
    arbol + 4;
    arbol + 8;
    arbol + 7;
    arbol + 6;
    arbol + 9;

    cout << arbol << endl;
    cout << arbol.existe(7) << endl;
    cout << arbol.existe(25) << endl;
    return 0;
}
