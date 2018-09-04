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
        void menu();
        pessoa* criaaluno();
        void mostraaluno(pessoa);

};

#endif // TESTAPILHA_H
