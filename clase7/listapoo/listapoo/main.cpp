#include <iostream>
#include "lista.h"
#include "conjunto.h"

using namespace std;

int main()
{
    Conjunto lista(3);
    (((lista + 4) + 5) + 9) + 9;
    cout << lista.size() << endl;
    cout << lista.get(3) << endl;
    cout << lista << endl;
    lista.remove(3);
    cout << lista << endl;
    return 0;
}
