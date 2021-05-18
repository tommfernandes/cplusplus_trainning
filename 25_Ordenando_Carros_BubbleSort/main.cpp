/*
** Anotações Aula 25 - Ordenando Carros (bubble sort) **
1 - 
*/

#include <iostream>
#include <stdlib.h>
#include <tchar.h>
#include <string.h>

#define MAX 10

using namespace std;

class Carro
{
public:
	char nome[100];
	char cor[20];
	char placa[20];
	double preco;
};

//ordenação utilizando o algoritmo bubble sort
void ordena(Carro carros[], int tam)
{
	Carro carroAux;
	
	for(int i = tam; i >= 0; i--)
	{
		for(int j = 1; j <= i; j++)
		{
			if(strcmp(carros[j-1].nome, carros[j].nome) == 1)
			{
				carroAux = carros[j-1];
				carros[j-1] = carros[j];
				carros[j] = carroAux;
			}
		}
	}
}
int main(int argc, char *argv[])
{
	_tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentuação dos caracteres seja reconhecida pelo prompt
	
	Carro carros[MAX];
	
	int i = 0;
	
	while(true)
	{
		char resp;
		cout << "Digité o nome do carro: ";
		cin >> carros[i].nome;
		cout << "Digite o preço: ";
		cin >> carros[i].preco;
		cout << "Você deseja continuar? <S>SIM ou <N>NÃO: ";
		cin >> resp;
		
		if(resp != 'S')
			break;

		i++;
		cout << endl;
	}
	
	cout << endl;
	cout << "Exibindo todos os carros..." << endl;
	
	for(int j = 0; j <=i; j++)
	{
		cout << "Nome do carro: " << carros[j].nome << endl;
		cout << "Preço do " << carros[j].nome << ": " << carros[j].preco;
		cout << endl << endl;
	}
	
	cout << "Exibindo os carros ordenados pelo nome...\n\n";

	ordena(carros, i);

	for(int j = 0; j <=i; j++)
	{
		cout << "Nome do carro: " << carros[j].nome << endl;
		cout << "Preço do " << carros[j].nome << ": " << carros[j].preco;
		cout << endl << endl;
	}
	
	system("pause");
	return EXIT_SUCCESS;
}
