#include "fila.h"

using namespace std;

fila::fila()
{
    init=final=tamanho=0;
}
bool fila::settam(int x)
{
    if(x>0)
    {
        *vetor=new pessoa[x];
        tamanho=x;
        puts("\nTamanho setado com sucesso!\n");
        return true;
    }
    else
    {
        puts("\nTamanho não setado!\n");

        return false;
    }
}

int fila::gettam()
{
    return tamanho;
}

bool fila::enfileirar(pessoa* x)
{
    if(vazia())
    {
        puts("\nsucesso\n");
        *(vetor+final)=x;
        final++;
        return true;
    }
    else
    {
        return false;
    }
}
void fila::desenfileirar()
{
    if(!vazia())
    {
        cout<<*(vetor+0);
        for(int i=0;i<final-1;i++)
        {
            *(vetor+i)=*(vetor+i+1);
        }
    }
    else
    {
        puts("Pilha vazia!");
    }
}
bool fila::vazia()
{
    if(final!=tamanho)
    {
        return true;
    }
    else
    {
        return false;
    }
}

pessoa* fila::atual()
{
    if(!vazia())
    {
        return *(vetor+final-1);
    }
    else
    {
        return 0;
    }
}
