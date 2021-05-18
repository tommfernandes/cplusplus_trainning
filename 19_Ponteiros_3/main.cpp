/*
** Anota��es Aula 19 - Ponteiros Novamente **
1 - delete para desalocar a mem�ria | setar o array como NULL � uma boa pr�tica de programa��o
	
*/

#include <iostream>
#include <stdlib.h>
#include <tchar.h>
#include <string.h>

using namespace std;

int my_strlen(char * str)
{
	int tam = 0;
	
	while(*str != '\0')
	{
		str++;
		tam++;
	}
	
	return tam;
}

char * my_strcat(char * dest, char * orig)
{
	char * resultado;
	int tam_dest = my_strlen(dest);
	int tam_orig = my_strlen(orig);
	
	resultado  = new char[tam_dest + tam_orig];
	
	char *p_str = resultado;
	
	while(*dest != '\0')
	{
		*p_str = *dest;
		p_str++;
		dest++;
	}
	
	*p_str = ' '; // adicionar espa�o entre as strings
	*p_str++;
	
	while(*orig != '\0')
	{
		*p_str = *orig;
		p_str++;
		orig++;
	}
	
	*p_str = '\0';
	
	return resultado;
}

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentua��o dos caracteres seja reconhecida pelo prompt

	char * nome1 = new char[100];
	char * nome2 = new char[100];
	
	cout << "Digite o primeiro nome: ";
	cin >> nome1;
	
	cout << "Digite o segundo nome: ";
	cin >> nome2;
	
	cout << "Resultado: " << my_strcat(nome1, nome2) << endl;
    
    cout << endl;
    
    //delete [] pArray; //desalocar a mem�ria
    //pArray = NULL; //boa pr�tica de programa��o
	    
    system("pause");
    return EXIT_SUCCESS;
}