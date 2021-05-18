/*
** Anotações Aula 15 - Vetores **
Sem anotações para esta aula
*/

#include <iostream>
#include <stdlib.h>
#include <tchar.h>

using namespace std;

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentuação dos caracteres seja reconhecida pelo prompt

    int vetor [100];
    
    for(int j = 0; j < 100; j++)
	{
		vetor[j] = j;		
	}
    
    for(int i = 0; i < 100; i++)
	{
		cout << "Vetor[" << i << "]:" << vetor[i] << endl;		
	}
    
    cout << endl;
	    
    system("pause");
    return EXIT_SUCCESS;
}