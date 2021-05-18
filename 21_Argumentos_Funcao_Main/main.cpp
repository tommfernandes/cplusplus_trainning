/*
** Anota��es Aula 21 - Argumentos_Funcao_Main **
1 - O primeiro argumento da fun��o Main � o nome do pr�prio programa, neste caso: 
	D:\Documents\C++\21_Argumentos_Funcao_Main\21_Argumentos_Funcao_Main.exe
2 - Para mudar o diret�rio no windows, usar cd /c d:\[diret�rio completo]
	
*/

#include <iostream>
#include <stdlib.h>
#include <tchar.h>

using namespace std;

int main(int argc, char *argv[])
{
    _tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentua��o dos caracteres seja reconhecida pelo prompt

	cout << "Quantidade de argumentos: " << argc << endl;
	cout << "\nArgumentos passados: " << endl;   
	
	for(int i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;
	}
	 
    cout << endl;
	    
    system("pause");
    return EXIT_SUCCESS;
}