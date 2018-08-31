#ifndef TESTAPILHA_H
#define TESTAPILHA_H
#include "pessoa.h"
#include "fila.h"
#include <iostream>
#include <string>

class testapilha
{
    private:

        fila bijeto;

    public:
        pessoa aluno;
        testapilha();
        int menu();
        pessoa* criaaluno();
        void mostraaluno();

};

#endif // TESTAPILHA_H
