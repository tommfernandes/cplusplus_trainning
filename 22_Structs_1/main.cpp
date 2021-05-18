/*
** Anotações Aula 22 - Agrupando dados com structs **
1 - Utilizar struct para agrupar tipos de dados, como feito nesse arquivo
	
*/

#include <iostream>
#include <stdlib.h>
#include <tchar.h>
#include <string.h>

using namespace std;

typedef struct pessoa
{
	char nome[100];
	int idade;
}t_pessoa;

int main(int argc, char *argv[])
{
    _tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentuação dos caracteres seja reconhecida pelo prompt

	t_pessoa p[3];
	
	cout << "Exemplo utilizando array: " << endl;
	
	//Pessoa 1
	strcpy(p[0].nome, "Maria");
	p[0].idade = 20;
	
	//Pessoa 2
	strcpy(p[1].nome, "Cleinilton");
	p[1].idade = 26;
	
	//Pessoa 3
	strcpy(p[2].nome, "João");
	p[2].idade = 29;
	
	//Imprimir pessoas
	for(int i = 0; i < 3; i++)
	{
		cout << " Nome: " << p[i].nome << endl;
		cout << " Idade: " << p[i].idade << endl << endl;
	}
	
	cout << "Exemplo utilizando ponteiro:" << endl;
	
	//Usando ponteiro
	t_pessoa pessoa;
	t_pessoa* ppessoa;
	
	ppessoa = &pessoa;
	
	strcpy(ppessoa->nome, "Joaquina");
	ppessoa->idade = 23;
	
	cout << " Nome: " << ppessoa->nome << endl;
	cout << " Idade: " << ppessoa->idade << endl;
    cout << endl;
	    
    system("pause");
    return EXIT_SUCCESS;
}