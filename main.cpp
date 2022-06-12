#include <iostream>
#include <Lista.h>

using namespace std;

int main()
{
    Lista<int> digitos;
    int n;
    cout << "Ingresa el numero a separar: ";
    cin >> n;

    while(n != 0) {
        int digito = n%10;
        digitos.agregar(digito);
        n /=10;
    }

    Lista<int>::Nodo * raiz;
    raiz = digitos.recuperarElementos();
    Lista<int>::Nodo * aux = raiz;

    int suma =0;
    int multiplicacion= 1;
    float division =1;
    int resta = 0;

    while(aux != nullptr) {
        suma += aux->elemento;
        resta -= aux->elemento;
        multiplicacion *= aux->elemento;
        if(aux->elemento != 0) {
            division /= aux->elemento;
        }
        aux = aux->sig;
    }

    cout << endl;
    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicacion: " << multiplicacion << endl;
    cout << "Division: " << division << endl;


    while(raiz != nullptr) {
        aux = raiz;
        raiz = raiz->sig;
        delete aux;
    }
    return 0;
}
