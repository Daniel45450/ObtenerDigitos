#include "Lista.h"
#include <iostream>
using namespace std;

template <typename T>
Lista<T>::Lista()
{
    //ctor
}

template <typename T>
Lista<T>::~Lista()
{
    delete [] this->raiz;
}

template <typename T>
void Lista<T>::agregar(T elemento)
{
    Nodo * nuevo = new Nodo();
    nuevo->elemento = elemento;

    //cout << nuevo->elemento <<endl;
    nuevo->sig = raiz;
    raiz = nuevo;
}

template <typename T>
typename Lista<T>::Nodo * Lista<T>::recuperarElementos() const
{
    return this->raiz;
}

template <typename T>
T Lista<T>::eliminarElemento(T elemento)
{
    Nodo * aux = this->raiz;
    if(aux != nullptr && aux->elemento == elemento)
    {
        this->raiz = aux->sig;
        delete aux;
    }
    else
    {
        Nodo * aux2 = aux->sig;
        while(aux2 != nullptr && aux2->elemento != elemento)
        {
            aux = aux2;
            aux2 = aux2->sig;
        }

        if(aux2->elemento == elemento) {
            aux->sig = aux2->sig;
            delete aux2;
        }
    }
}

template class Lista<int>;
