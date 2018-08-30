#ifndef TESTAPILHA_H
#define TESTAPILHA_H
#include "pessoa.h"
#include "fila.h"
#include <iostream>

class testapilha
{
    private:

        fila bijeto;

    public:

        testapilha();
        void menu();
        pessoa* criaaluno();
        void mostrafila();
        void mostraaluno();

};

#endif // TESTAPILHA_H
