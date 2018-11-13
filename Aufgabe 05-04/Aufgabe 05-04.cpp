#include <iostream>
#include <string>
using namespace std;

int main()
{
	int ausgabe[9];
	int haeufigkeit[] = {0,0,0,0,0,0,0};

	for (int i = 0; i < 9; i++)
	{
		int indexzahl = i + 1;
		do
		{
			cout << "Bitte geben Sie die " << indexzahl << ". Zahl ein: ? ";
			cin >> ausgabe[i];
		} while (ausgabe[i] > 6 || ausgabe[i] < 1);
		//int zahl = ausgabe[i];
		haeufigkeit[ausgabe[i] - 1] += 1;
	}

	for (int i = 0; i < 9; i++)
	{
		int index = i + 1;
		cout << "Die " << index << ". eingegebene Zahl lautete: " << ausgabe[i] << endl;
	}

	for (int i = 0; i < 6; i++)
	{
		int index = i + 1;
		cout << "Die Zahl " << index << " wurde " << haeufigkeit[i] << " mal eingegeben." << endl;
	}
	system("pause");
}