#include "pessoa.h"

pessoa::pessoa()
{
    idade=0;
    peso=0;
}

void pessoa::setnome(QString x)
{
    nome=x;
}

void pessoa::settelefone(QString x)
{
    telefone=x;
}

void pessoa::setende(QString x)
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
    else
    {
        return false;
    }
}

QString pessoa::getnome()
{
    return nome;
}

QString pessoa::gettelefone()
{
    return telefone;

}

QString pessoa::getende()
{
    return ende;
}

int pessoa::getidade()
{
    return idade;
}

float  pessoa::getpeso()
{
    return peso;
}
