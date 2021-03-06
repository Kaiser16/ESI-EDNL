#ifndef EJ2_H_
#define EJ2_H_
#include "agen.h"
#include <iostream>

template <typename T>
int profundidadRec(Agen<T> A, typename Agen<T>::nodo n)
{
    if(n != Agen<T>::NODO_NULO)
        return 1 + profundidadRec(A, A.padre(n));
    else
        return -1;
}

template <typename T>
int profundidad(Agen<T> A, typename Agen<T>::nodo n)
{
    return profundidadRec(A, n);
}

#endif