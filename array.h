#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>


class Array
{
    private:
        std::string *arreglo;
        size_t tam;
        size_t cont;
        const static size_t MAX =5;
    public:
        Array();
        ~Array();

        void insertAtEnd(std::string e);
        void insertAtStart(std::string e);

        std::string operator[](size_t p){
            return arreglo[p];
        }

        size_t sizeofArray();


        void expandir();


};

#endif // ARRAY_H
