#include <iostream>
#include <stdlib.h>
#include <tchar.h>
#include "my_math.h"

using namespace std;

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentuação dos caracteres seja reconhecida pelo prompt

    int n = 5;

    cout << "Fatorial de " << n << ": " << fatorial(5) << endl;
    cout << "Área do quadrado com lado " << n << ": " << area_quadrado(5) << endl;
    cout << "Área do retângulo de altura 5 e base 6: " << area_retangulo(5, 6) << endl;
    
    cout << endl;
	    
    system("pause");
    return EXIT_SUCCESS;
}