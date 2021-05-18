/*
** Anotações Aula 16 - Vetores de caracteres strings **
1 - Lembrar de colocar o '\0' no final de um vetor de caracteres
2 - funções de string.h:
	isalpha se é um caractere, isdigit se é número, isupper se é maiúscula, islower se é minúscula
	isspace se é uma espaço ou tabulação, strlen retorna o número de caracteres, 
	strcmp compara duas strings, tolower transforma em minúsculo, toupper transforma em maiúsculo,
	strcat para concatenar strings
	
*/

#include <iostream>
#include <stdlib.h>
#include <tchar.h>
#include <string.h>

using namespace std;

// void inverte(char nome[])
// {
	//obtendo o tamanho da string
// 	int tam;
// 	tam = strlen(nome);
	//for(tam = 0; nome[tam]; tam++);
// 	
	//invertendo a string
// 	for(int i = tam - 1; i >= 0 ;i--)
// 	{
// 		cout << nome[i];
// 	}
// }

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentuação dos caracteres seja reconhecida pelo prompt

    char nome[] = "cleinilton";
    
	//cout << nome << endl;
	
	//inverte(nome);
	
	if(isalpha(nome[0]))
	{
		cout << "Caractere alpha numérico." << endl;
	}else
	{
		cout << "Caractere numérico." << endl;		
	}
    
    cout << endl;
	    
    system("pause");
    return EXIT_SUCCESS;
}