#include <iostream>
#include <stdlib.h>
#include <tchar.h>
#include "my_math.h"

using namespace std;

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentua��o dos caracteres seja reconhecida pelo prompt

    int n = 5;

    cout << "Fatorial de " << n << ": " << fatorial(5) << endl;
    cout << "�rea do quadrado com lado " << n << ": " << area_quadrado(5) << endl;
    cout << "�rea do ret�ngulo de altura 5 e base 6: " << area_retangulo(5, 6) << endl;
    
    cout << endl;
	    
    system("pause");
    return EXIT_SUCCESS;
}