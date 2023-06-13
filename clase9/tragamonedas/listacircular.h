#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H
#include <vector>

template<class T>
class ListaCircular
{
private:
   int index = 0;
   std::vector<T> vec;
public:
    ListaCircular();
    void add(T dato);
    void clear();
    T next();
};

#endif // LISTACIRCULAR_H
