/*
** Anota��es Aula 16 - Vetores de caracteres strings **
1 - Lembrar de colocar o '\0' no final de um vetor de caracteres
2 - fun��es de string.h:
	isalpha se � um caractere, isdigit se � n�mero, isupper se � mai�scula, islower se � min�scula
	isspace se � uma espa�o ou tabula��o, strlen retorna o n�mero de caracteres, 
	strcmp compara duas strings, tolower transforma em min�sculo, toupper transforma em mai�sculo,
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
    _tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentua��o dos caracteres seja reconhecida pelo prompt

    char nome[] = "cleinilton";
    
	//cout << nome << endl;
	
	//inverte(nome);
	
	if(isalpha(nome[0]))
	{
		cout << "Caractere alpha num�rico." << endl;
	}else
	{
		cout << "Caractere num�rico." << endl;		
	}
    
    cout << endl;
	    
    system("pause");
    return EXIT_SUCCESS;
}