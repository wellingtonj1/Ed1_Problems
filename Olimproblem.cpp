#include <bits/stdc++.h>
#include <string>

using namespace std;

class Livro
{
	private:
	string titulo,iobn,autor;
	
	public:	
	string gettitulo()
	{
		return titulo;
	}
	
	string getiobn()
	{
		return iobn;
	}
	
	string getautor()
	{
		return iobn;
	}
	
	void setiobn(string x)
	{
		iobn=x;
	}
	
	void setautor(string x)
	{
		autor=x;
	}
	void settitulo(string x)
	{
		titulo=x;
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
		return (topo==0);
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
		cin>>entra;
		x->settitulo(entra);
		puts("IOBN");
		cin>>entra;
		x->setiobn(entra);
		puts("Autor");
		cin>>entra;
		x->setautor(entra);
		
		return x;
		
	}
	
	void menu()
	{
		Livro* aux=0;
		int t,op=0;
		bool ok=false; 	 	
		do
		{
			cout<<"tamanho da pilha (>2) : ";
			cin>>t;			
		}while(!obj.settam(t));
		
		do
		{
			do
			{
				puts("Digito: ");
				puts("1- Para inserir Livro na Pilha ");
				puts("2- Para remover Livro da Pilha ");
				puts("3- Mostrar pilha ");
				puts("4- Para terminar ");
				cin>>op;			
			}while(op<1||op>4);
			
			switch(op)
			{
				case 1:
				{
					aux=crialivro();
					ok=obj.push(aux);
					if(ok)
					{
						puts("Sucesso");
					}
					else 
					{
						puts("Insucesso");
					}
					aux=0;
					break;
				}
				
				case 2:
				{
					aux=obj.pop();
					if(aux==0)
					puts("Sucesso");
					else
					{
						imprimepilha();
						delete aux;
						aux=0;						
					}
					break;
				
				}
				
				case 3:
				{
					imprimepilha();
					break;
				}
				
				case 4:
				{
					puts("Programa encerrado ");
					break;
				}
			}			
		}while(op!=4);	
	}
	
	void imprimepilha()
	{
		Pilha aux;
		int t=obj.gettam();
		aux.settam(t);
		Livro* mostra=0;
		
		while(!obj.vazia())
		{
			mostra=obj.pop();
			cout<< mostra->getiobn() << mostra->gettitulo()<< mostra->getautor() <<endl;
			aux.push(mostra);		
		}
		
	}
	
	
};

int main()
{
		TestaPilha object;
		object.menu();
		return 0;
}
