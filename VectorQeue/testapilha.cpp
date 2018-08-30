#include "testapilha.h"
#include <iostream>

using namespace std;

testapilha::testapilha()
{

}

void testapilha::menu()
{
    int escolha;
    do
    {
        int tamain;
        puts("\n DIGITE O TAMANHO DO VETOR : ");
        cin>>tamain;
        puts("1-Digite para enfileirar");
        puts("2-Digite para desenfileirar");
        puts("3-Para sair do programa");
        puts("4-Para mostrar o ultimo elemento inserido!");
        printf("Sua escolha [  ] \b\b\b\b");
        cin>>escolha;

        switch (escolha){
            case 1:
            {

                break;
            }
            case 2:
            {

                break;
            }
            case 3:
            {

                break;
            }
            case 4:
            {
                break;
            }
            default:
            {
                   puts("\nDigite um numero valido!!\n");
                break;
            }
        }
    }while(escolha!=4);
}

pessoa* testapilha::criaaluno()
{
    pessoa aluno;
    QString auxs;
    int numaux;
    float nunsaux;
    puts("\nDigite o nome da pessoa : ");
    cin.ignore();
    getline(cin,auxs);
    aluno.setnome(auxs);

    puts("\nDigite o telefone da pessoa : ");
    cin.ignore();
    getline(cin,auxs);
    aluno.settelefone(auxs);

    puts("\nDigite o endereço da pessoa : ");
    cin.ignore();
    getline(cin,auxs);
    aluno.setende(auxs);

    puts("\nDigite a idade da pessoa : ");
    cin>>numaux;
    aluno.setidade(numaux);

    puts("\nDigite o peso da pessoa : ");
    cin>>nunsaux;
    aluno.setpeso(nunsaux);

    return &aluno;

}

void testapilha::mostraaluno()
{
        cout<<"O nome da pessoa : "<<aluno.getnome <<"\n O telefone da pessoa : "<<aluno.gettelefone
        <<"\nO endereço da pessoa : "<<aluno.getende<<"\nA idade da pessoa : "<<aluno.getidade
        <<"\nO peso da pessoa : "<<aluno.getpeso<<endl;
}

void testapilha::mostrafila()
{

}
