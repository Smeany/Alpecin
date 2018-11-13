#include<iostream>;
#include<string>;
using namespace std;

int main()
{
	int ausgabe[9];
	int haeufigkeit[] = { 0,0,0,0,0,0 };

	for (int i = 0; i < 9; i++)
	{
		int indexzahl = i + 1;
		do
		{
			cout << "Bitte geben Sie die " << indexzahl << ". Zahl ein: ? ";
			cin >> ausgabe[i];
		} while (ausgabe[i] > 6 || ausgabe[i] < 0);
		haeufigkeit[ausgabe[i] - 1] += 1;
	}

	int anzahlunterschied = 0;
	for (int i = 0; i < 6; i++)
	{
		if (haeufigkeit[i] != 0)
		{
			anzahlunterschied += 1;
		}
	}
	cout << "In der Eingabe kamen " << anzahlunterschied << " unterschiedliche Zahlen vor." << endl;
	system("pause");
}