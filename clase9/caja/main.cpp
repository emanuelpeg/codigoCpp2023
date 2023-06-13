#include <iostream>
#include "box.cpp"
#include "persona.h"
#include <vector>

using namespace std;

template<class T>
Box<T> suma(Box<T> uncaja, Box<T> otracaja) {
    return uncaja + otracaja;
}

int main()
{
    /*Box<double> caja1(2.5);
    Box<double> caja2;
    Box<double> caja3(3.3);
    cout << caja1.isEmpty() << endl;
    cout << caja2.isEmpty() << endl;
    cout << *(caja2 + caja3).getDato() << endl;
    cout << *(caja2 + caja1).getDato() << endl;
    cout << *suma(caja3, caja1).getDato() << endl;

    Box<Persona> cajaPersona;
    Box<Persona> cajaPersona2(Persona());*/

    vector<int> vec(200);
    vec.push_back(12);
    vec.push_back(15);
    vec[0] = 1;

    for(int i = 0; i < 100; i++){
        vec[i] = i;
    }

    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }

    cout << vec.size() << "-" <<vec.capacity() << endl;


    return 0;
}
