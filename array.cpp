#include "array.h"

using namespace std;

Array::Array()
{
    arreglo = new string[MAX];
    cont = 0;
    tam = MAX;
}

Array::~Array()
{
    delete[] arreglo;
}

void Array::expandir(){
    string *nuevo = new string[tam+MAX];

    for (size_t i = 0; i < cont; i++){
        nuevo[i] = arreglo[i];
    }
    delete[] arreglo;
    arreglo = nuevo;

    tam = tam + MAX;
}

void Array::insertAtEnd(string e){

    if(cont == tam){
        expandir();
    }
    arreglo[cont] = e;
    cont++;

}

void Array::insertAtStart(string e){

    if(cont == tam){
        expandir();
    }

    for (size_t i = cont; i > 0; i--){
        arreglo[i] = arreglo[i - 1];
    }
    arreglo[0] = e;
    cont++;
}

size_t Array::sizeofArray(){
    return cont;
}
