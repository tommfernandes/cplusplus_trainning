/*
** Anotações Aula 18 - Continuando com Ponteiros **
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

	int array[] = {1, 2, 3, 4, 5};
	int* pArray = &array[0];
    int i = 0;
    
    while (i < 5)
	{
	    cout << *pArray << " ";
		pArray++;
		i++;
			
	}
    
    cout << endl;
    
    //delete [] pArray; //desalocar a memória
    //pArray = NULL; //boa prática de programação
	    
    system("pause");
    return EXIT_SUCCESS;
}