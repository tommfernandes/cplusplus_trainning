#include <iostream>
#include <tchar.h>

void requestNumber();

using namespace std;

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentuação dos caracteres seja reconhecida pelo prompt
	
	requestNumber();
	
	return 0;
}

void requestNumber()
{
	unsigned int num = 1;
	unsigned long long int fat = 1;

	cout << "Digite um número: ";
	cin >> num;

	for(unsigned int i = 1; i < num; i++)
	{
		fat = fat * (i + 1);
	}

	cout << "Fatorial: " << fat << endl << endl;

	char answer = 'N';
	cout << "Quer digitar outro número? (S/N) ";
	cin >> answer;

	switch(answer)
	{
	case 'S':
	case 's':
		requestNumber();
	case 'N':
	case 'n':
		break;
	default:
		break;
	}

}
