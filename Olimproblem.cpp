#include <bits/stdc++.h>

class Livro
{
	private:
	string titulo,iobn,autor;
	
	public:
	
	void settitulo(string x)
	{
		strcpy(titulo,x);
	}
	
	string gettitulo()
	{
		return titulo;
	}
	
	void setiobn(string x)
	{
		strcpy(iobn,x);
	}
	
	void setautor(string x)
	{
		strcpy(autor,x);
	}

};

class Pilha
{
	private:
	int tam,topo;
	Livro** vetor;
	public:
	
	bool settam(int x)
	{
		if(x>2)
		{
			tam=x;
			topo=0;
			vetor=new Livro* [tam];
			return true;
		}
		return false;
	}
	
	int gettam()
	{
		return tam;
	}
	
	bool push(Livro* x)
	{
		if(x==0)
		{
			return false;
		}
		if(topo<tam)
		{
			vetor[topo]=x;
			topo++;
			return true;
		}
		return false;
	}
	
	bool vazia()
	{
		return (tam==0);
	}
	Livro* pop()
	{
		if(vazia())
		{
			return 0;
		}
		topo--;
		return vetor[topo];
	}
};

class TestaPilha
{
	private:
	Pilha obj;
	public:
	
	Livro* crialivro()
	{
		Livro* x=new Livro;
		string entra;
		puts("Titulo");
		getline(cin,entra);
		x.settitulo(entra);
		puts("IOBN");
		getline(cin,entra);
		aux.setiobn(entra);
		puts("Autor");
		getline(cin,entra):
		x.setautor(entra);
		
		return x;
		
	}
	
	void menu()
	{
	
	}
	
	void imprimepilha()
	{
		
	}
	
	
};
