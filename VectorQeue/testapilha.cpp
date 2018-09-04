#include "testapilha.h"

using namespace std;

testapilha::testapilha()
{

}

void testapilha::menu()
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
                mostraaluno(*bijeto.desenfileirar());
                break;
            }
            case 3:
            {
                mostraaluno(aluno);
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
    string auxs;
    int numaux;
    float nunsaux;
    puts("\nDigite o nome da pessoa : ");
    cin.ignore();
    getline(cin,auxs);
    aluno.setnome(auxs);

    puts("\nDigite o endereço da pessoa : ");
    cin.ignore();
    getline(cin,auxs);
    aluno.setende(auxs);

    puts("\nDigite o telefone da pessoa : ");
    cin.ignore();
    cin>>numaux;
    aluno.settelefone(numaux);

    puts("\nDigite a idade da pessoa : ");
    cin.ignore();
    cin>>numaux;
    aluno.setidade(numaux);

    puts("\nDigite o peso da pessoa : ");
    cin.ignore();
    cin>>nunsaux;
    aluno.setpeso(nunsaux);

    return &aluno;

}

void testapilha::mostraaluno(pessoa x)
{
        cout<<"\nO nome da pessoa : "<<x.getnome() <<"\nO endereço da pessoa : "<<x.getende()
        <<"\n O telefone da pessoa : "<<x.gettelefone()
        <<"\nA idade da pessoa : "<<x.getidade()
        <<"\nO peso da pessoa : "<<x.getpeso()<<endl;
}

