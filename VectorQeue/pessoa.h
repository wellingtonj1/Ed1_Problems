#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;
class pessoa
{
    private:

        string nome,ende;
        int idade,telefone;
        float peso;



    public:

    pessoa();
    void setnome(string);
    void settelefone(int);
    void setende(string);
    bool setidade(int);
    bool setpeso(float);

    string getnome();
    int gettelefone();
    string getende();
    int getidade();
    float getpeso();


};

#endif // PESSOA_H
