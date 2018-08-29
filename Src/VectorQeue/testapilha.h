#ifndef TESTAPILHA_H
#define TESTAPILHA_H
#include "pessoa.h"
#include "fila.h"

class testapilha
{
    private:

        fila bijeto;

    public:

        testapilha();
        void menu();
        pessoa* criaaluno();
        void mostrafila();

};

#endif // TESTAPILHA_H
