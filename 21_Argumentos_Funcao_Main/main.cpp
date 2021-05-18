/*
** Anotações Aula 21 - Argumentos_Funcao_Main **
1 - O primeiro argumento da função Main é o nome do próprio programa, neste caso: 
	D:\Documents\C++\21_Argumentos_Funcao_Main\21_Argumentos_Funcao_Main.exe
2 - Para mudar o diretório no windows, usar cd /c d:\[diretório completo]
	
*/

#include <iostream>
#include <stdlib.h>
#include <tchar.h>

using namespace std;

int main(int argc, char *argv[])
{
    _tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentuação dos caracteres seja reconhecida pelo prompt

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