#include <bits/stdc++.h>

long long fibonac(long long aux)
{
   if(aux<2)return aux;

   return (fibonac(aux-1)+fibonac(aux-2));
}

void fiboiter(long long n)
{
    long long f=0,i=1;
    for(int k=1;k<=n;k++)
    {
        f=i+f;
        i=f-i;

        std::cout<<std::setw(16)<<f;
    }
}


int main()
{
    //unsigned long long imp= fibonac(2);
    //std::cout<<"\n\n\n\tResult -->"<<fibonac(2)<<std::endl;

    std::clock_t inicio,fim;
    long long n,i;
    double ptime;
    std::cout<<"Digite a quantidade de termos: ";
    std::cin>>n;
    if(n<=0)
    {
        std::cout<<"Erro!!!\n";
    }
    else
    {
        std::cout<<"Fibonacci interativo: \n";
        inicio=std::clock();
        fiboiter(n);
        fim=std::clock();
        ptime=fim-inicio;
        ptime=ptime/CLOCKS_PER_SEC;
        std::cout<<"Tempo iterativo = "<<ptime<<"segundos .\n";
        std::cout<<"\nFibonacci Recursivo: \n";
        inicio=std::clock();
        for(i=0;i<n;i++)
        {
            std::cout<<std::setw(16)<<fibonac(i+1);
        }
        fim=std::clock();
        ptime=fim-inicio;
        ptime=ptime/CLOCKS_PER_SEC;
        std::cout<<"Tempo recursivo = "<<ptime<<"segundos.\n";

    }
    return 0;
}
