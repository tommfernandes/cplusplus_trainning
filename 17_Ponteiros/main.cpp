/*
** Anota��es Aula 17 - Ponteiros **
1 - delete para desalocar a mem�ria | setar o array como NULL � uma boa pr�tica de programa��o
	
*/

#include <iostream>
#include <stdlib.h>
#include <tchar.h>
#include <string.h>

using namespace std;

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentua��o dos caracteres seja reconhecida pelo prompt

	int* pArray = new int[10];
	//int aux[3];
	
	cout << "Digite um n�mero: ";
	cin >> *(pArray);
	
	cout << "Voc� digitou " << *(pArray) << endl;
    
    cout << endl;
    
    delete [] pArray; //desalocar a mem�ria
    pArray = NULL; //boa pr�tica de programa��o
	    
    system("pause");
    return EXIT_SUCCESS;
}