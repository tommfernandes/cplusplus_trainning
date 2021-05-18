/*
** Anotações Aula 24 - Criando Classes **
1 - Da para fazer um array de pessoas
2 - 
*/

#include <iostream>
#include <stdlib.h>
#include <tchar.h>
#include <string.h>

using namespace std;

class Pessoa
{
public:
	char nome[100];
	char cpf[20];
	int idade;
};

int main(int argc, char *argv[])
{
	_tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentuação dos caracteres seja reconhecida pelo prompt

	//Pessoa p1;
	//Pessoa p1 = {"João", "112.139.136-24", 30}; //Pode ser inicializado assim
	
	// strcpy(p1.nome, "João");
	// strcpy(p1.cpf, "112.139.136-24");
	// p1.idade = 30;
	
	cout << "Nome: " << p1.nome << endl;

	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}
