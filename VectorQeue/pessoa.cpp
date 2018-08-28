#include "pessoa.h"

pessoa::pessoa()
{
    idade=0;
    peso=0;
}

void pessoa::setnome(string x)
{
    nome=x;
}

void pessoa::settelefone(string x)
{
    telefone=x;
}

void pessoa::setende(string x)
{
    ende=x;
}

bool pessoa::setidade(int id)
{
    if(id>0)
    {
        idade=id;
        return true;
    }
    else
    return false;
}

bool pessoa::setpeso(float ps)
{
    if(ps>0)
    {
        peso=ps;
        return true;
    }
}

string pessoa::getnome()
{
    return nome;
}

string pessoa::gettelefone()
{
    return telefone;

}

string pessoa::getende()
{
    return ende;
}

int pessoa::getidade()
{
    return idade;
}

float pessoa::getpeso()
{
    return peso;
}
