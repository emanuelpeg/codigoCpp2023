#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*bool mayor(int a, int b) {
    return a > b;
}*/

int main()
{
    vector<int> numeros(200);

    for (int i = 0; i < 200; i++ ) {
        numeros[i] = rand() % 200 + 1;
    }

    for (auto i = numeros.begin(); i != numeros.end(); ++i) {
        cout << *i << " ";
    }

    sort(numeros.begin()+10, numeros.end()-50);
    cout << endl << " ------------------ "<< endl;
    for (auto i = numeros.begin(); i != numeros.end(); ++i) {
        cout << *i << " ";
    }

    //sort(numeros.begin(), numeros.end(), mayor);
    sort(numeros.begin(), numeros.end(), [](int a, int b) {
        return a > b;
    });
    cout << endl << " ------------------ "<< endl;
    for (auto i = numeros.begin(); i != numeros.end(); ++i) {
        cout << *i << " ";
    }
    return 0;
}
