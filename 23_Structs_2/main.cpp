/*
** Anotações Aula 23 - Structs novamente **
1 - Utilizar struct para agrupar tipos de dados, como feito nesse arquivo
2 - As Structs podem conter métodos
3 - Voltar a assistir
*/

#include <iostream>
#include <stdlib.h>
#include <tchar.h>
#include <string.h>

using namespace std;

struct pessoa
{
private:
	int idade;

public:
	pessoa(int idade)
	{
		this->idade = idade;
	}

	void setIdade(int idade)
	{
		this->idade = idade;
	}

	int getIdade()
	{
		return this -> idade;
	}
};

int main(int argc, char *argv[])
{
	_tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentuação dos caracteres seja reconhecida pelo prompt

	const string comentario = "** Anotações Aula 23 - Structs novamente ** \n1 - Utilizar struct para agrupar tipos de dados, como feito nesse arquivo \n2 - As Structs podem conter métodos \n3 - Voltar a assistir";

	pessoa p(20);

	//p.setIdade(20);

	cout << comentario << endl << endl;

	cout << "Idade do caboclo: " << p.getIdade() << endl;

	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}
