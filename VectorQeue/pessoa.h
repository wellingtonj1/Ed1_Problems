#ifndef PESSOA_H
#define PESSOA_H
#include <QString>

class pessoa
{
    private:

        QString nome,telefone,ende;
        int idade;
        float peso;



    public:

    pessoa();
    void setnome(QString);
    void settelefone(QString);
    void setende(QString);
    bool setidade(int);
    bool setpeso(float);

    QString getnome();
    QString gettelefone();
    QString getende();
    int getidade();
    float getpeso();


};

#endif // PESSOA_H
