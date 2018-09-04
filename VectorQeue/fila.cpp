#include "fila.h"

using namespace std;

fila::fila()
{
    init=tamanho=0;
    final=-1;
}
bool fila::settam(int x)
{
    if(x>0)
    {
        puts("\nTamanho setado com sucesso!\n");
        tamanho=x;
        vetor=new pessoa*[x];
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
        puts("\nSucesso\n");
        final++;
        *(vetor+final)=x;
        return true;
    }
    else
    {
        puts("\nInsucesso\n");
        return false;
    }
}
pessoa* fila::desenfileirar()
{
    if(final>=0)
    {
        pessoa* aux;
        aux=vetor[0];
        for(int i=0;i<final;i++)
        {
            *(vetor+i)=*(vetor+i+1);
        }
        final--;
        return aux;
    }
    else
    {
        puts("Pilha vazia!");
        return nullptr;
    }
}
bool fila::vazia()
{
    if(final<tamanho)
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
        return nullptr;
    }
}
