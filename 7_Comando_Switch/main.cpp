#include <iostream>
#include <stdlib.h>
#include <tchar.h>

using namespace std;

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentua��o dos caracteres seja reconhecida pelo prompt

    char comando;
    int i = 0;

    while (i != 1)
    {
        cout << "Pressione Q ou q para sair do sistema: ";
        cin >> comando;

        switch(comando)
        {
            case 'Q':
                cout << "Voc� saiu do sistema." << endl << endl;
                i=1;
                break;

            case 'q':
                cout << "Voc� saiu do sistema." << endl << endl;
                i=1;
                break;

            default:
                cout << "Op��o n�o encontrada." << endl << endl;
                i=0;
                break;
        }
    }

    system("pause");
    return EXIT_SUCCESS;
}