#include <iostream>
#include <stdlib.h>
#include <tchar.h>

using namespace std;

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentua��o dos caracteres seja reconhecida pelo prompt

    int dinheiro = 20;

    if(dinheiro > 21)
    {
        cout << "Voc� � rico :)" << endl;
    }else
    {
        cout << "Voc� � pobre :\(" << endl;
    }



    system("pause");
    return EXIT_SUCCESS;
}
