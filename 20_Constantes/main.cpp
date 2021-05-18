/*
** Anotações Aula 20 - Constantes **
1 - 
	
*/

#include <iostream>
#include <stdlib.h>
#include <tchar.h>

using namespace std;

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentuação dos caracteres seja reconhecida pelo prompt

	const double PI = 3.14159;
	
	cout << PI << endl;	
			    
    cout << endl;
	    
    system("pause");
    return EXIT_SUCCESS;
}