#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;
class pessoa
{
    private:

        string nome,telefone,ende;
        int idade;
        float peso;



    public:

    pessoa();
    void setnome(string);
    void settelefone(string);
    void setende(string);
    bool setidade(int);
    bool setpeso(float);

    string getnome();
    string gettelefone();
    string getende();
    int getidade();
    float getpeso();


};

#endif // PESSOA_H
