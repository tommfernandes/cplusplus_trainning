#include <iostream>
#include <stdlib.h>
#include <tchar.h>

using namespace std;

int num_global = 99;

void fool()
{
	int num = 10;
	static int num_static = 1;
	
	cout << "Variável local da função fool: " << num << endl;
    cout << "Variável global: " << num_global << endl;
    
    num_static++;
    
    cout << "Variável estática: " << num_static << endl;
}

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentuação dos caracteres seja reconhecida pelo prompt

    fool();
    fool();
    fool();
    
    cout << endl;
	    
    system("pause");
    return EXIT_SUCCESS;
}