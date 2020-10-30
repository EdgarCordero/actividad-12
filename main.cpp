#include <iostream>
#include "array.h"

using namespace std;

int main()
{
    Array myArray;

    myArray.insertAtEnd("HOLA");
    myArray.insertAtEnd("MUNDO");
    myArray.insertAtEnd("TIERRA");
    myArray.insertAtEnd("MARTE");
    myArray.insertAtEnd("JUPITER");
    myArray.insertAtEnd("SATURNO");
    myArray.insertAtEnd("URANO");
    myArray.insertAtEnd("NEPTUNO");

    for (size_t i = 0; i < myArray.sizeofArray(); i++){
        cout << myArray[i] << endl;
    }
    cout << endl;

    myArray.insertAtStart("VENUS");
    myArray.insertAtStart("MERCURIO");


    for (size_t i = 0; i < myArray.sizeofArray(); i++){
        cout << myArray[i] << endl;
    }


    return 0;
}
