/*
** Anotações Aula 17 - Ponteiros **
1 - delete para desalocar a memória | setar o array como NULL é uma boa prática de programação
	
*/

#include <iostream>
#include <stdlib.h>
#include <tchar.h>
#include <string.h>

using namespace std;

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentuação dos caracteres seja reconhecida pelo prompt

	int* pArray = new int[10];
	//int aux[3];
	
	cout << "Digite um número: ";
	cin >> *(pArray);
	
	cout << "Você digitou " << *(pArray) << endl;
    
    cout << endl;
    
    delete [] pArray; //desalocar a memória
    pArray = NULL; //boa prática de programação
	    
    system("pause");
    return EXIT_SUCCESS;
}