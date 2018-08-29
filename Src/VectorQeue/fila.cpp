#include "fila.h"

fila::fila()
{
    init=-1;
    final=tamanho=0;
}
bool fila::settam(int x)
{
    if(x>0)
    {
        vetor=new pessoa[x];
        puts("\nTamanho setado com sucesso!\n")
        return true;
    }
    else
    {
        puts("\nTamanho não setado!\n")
        return false;
}
int fila::gettam()
{
    return tamanho;
}
bool fila::enfileirar(pessoa*)
{
    if(bool vazia())
    {
        vetor=pessoa;
    }
}
pessoa* fila::desenfileirar()
{

}
bool fila::vazia()
{
    if(init!=tamanho)
    {
        puts("\nPilha vazia!\n")
        return true;
    }
    else
    {
        puts("\nPilha cheia!\n")
        return false;
    }
}
