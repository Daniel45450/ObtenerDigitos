#ifndef LISTA_H
#define LISTA_H

template <typename T>
class Lista
{
public:
    struct Nodo
    {
        T elemento;
        Nodo * sig;
    };
public:
    Lista();
    virtual ~Lista();
    void agregar(T elemento);
    Nodo * recuperarElementos() const;
    T eliminarElemento(T elemento);
protected:

private:
    Nodo * raiz = nullptr;
};

#endif // LISTA_H
