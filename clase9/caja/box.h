#ifndef BOX_H
#define BOX_H

template<class T>
class Box
{
private:
    T * dato = 0;
public:
    Box();
    Box(T dato);
    bool isEmpty();
    Box<T> operator+(Box<T> other);
    T *getDato() const;
};

#endif // BOX_H
