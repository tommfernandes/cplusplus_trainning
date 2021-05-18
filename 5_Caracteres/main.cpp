#include <iostream>
#include <stdlib.h>
#include <tchar.h>

using namespace std;

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentuação dos caracteres seja reconhecida pelo prompt

    char c = 'ã';

    cout << c << endl;

    system("pause");
    return EXIT_SUCCESS;
}
