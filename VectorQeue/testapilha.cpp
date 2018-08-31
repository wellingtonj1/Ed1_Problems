#include "testapilha.h"

using namespace std;

testapilha::testapilha()
{

}

int testapilha::menu()
{
    int escolha;
    int tamain;
    puts("\n DIGITE O TAMANHO DO VETOR : ");
    cin>>tamain;
    bijeto.settam(tamain);
    do
    {
        puts("1-Digite para enfileirar");
        puts("2-Digite para desenfileirar");
        puts("3-Para mostrar o ultimo elemento inserido!");
        puts("4-Para sair do programa");
        printf("Sua escolha [  ] \b\b\b\b");
        cin>>escolha;

        switch (escolha){
            case 1:
            {
                bijeto.enfileirar(criaaluno());

                break;
            }
            case 2:
            {
                bijeto.desenfileirar();
                break;
            }
            case 3:
            {

                break;
            }
            case 4:
            {
                return 0;
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
    string auxs;
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
        cout<<"O nome da pessoa : "<<aluno.getnome() <<"\n O telefone da pessoa : "<<aluno.gettelefone()
        <<"\nO endereço da pessoa : "<<aluno.getende()<<"\nA idade da pessoa : "<<aluno.getidade()
        <<"\nO peso da pessoa : "<<aluno.getpeso()<<endl;
}

