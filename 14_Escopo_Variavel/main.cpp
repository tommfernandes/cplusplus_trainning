#include <iostream>
#include <stdlib.h>
#include <tchar.h>

using namespace std;

int num_global = 99;

void fool()
{
	int num = 10;
	static int num_static = 1;
	
	cout << "Vari�vel local da fun��o fool: " << num << endl;
    cout << "Vari�vel global: " << num_global << endl;
    
    num_static++;
    
    cout << "Vari�vel est�tica: " << num_static << endl;
}

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentua��o dos caracteres seja reconhecida pelo prompt

    fool();
    fool();
    fool();
    
    cout << endl;
	    
    system("pause");
    return EXIT_SUCCESS;
}