#include<iostream>;
#include<string>;
using namespace std;

int main()
{
	int ausgabe[] = { 0,0,0,0,0 };
	int groesste, kleinste = 0;

	for (int i = 0; i < 5; i++)
	{
		int indexzahl = i + 1;
		cout << "Bitte geben Sie die " << indexzahl << ". Zahl ein: ? ";
		cin >> ausgabe[i];
	}

	for (int i = 0; i < 5; i++)
	{
		int index = i + 1;
		cout << "Die " << index << ". eingegebene Zahl lautete: " << ausgabe[i] << endl;
	}

	if (ausgabe[0] <= ausgabe[1])
	{
		groesste = ausgabe[1];
		kleinste = ausgabe[0];
	}
	else if (ausgabe[0] >= ausgabe[1])
	{
		kleinste = ausgabe[1];
		groesste = ausgabe[0];
	}

	for (int i = 1; i < 5; i++)
	{
		if (groesste < ausgabe[i] )
		{
			groesste = ausgabe[i];
		}
		else if (kleinste > ausgabe [i])
		{
			kleinste = ausgabe[i];
		}
	}

	cout << "Die kleinste eingegebene Zahl lautete: " << kleinste << endl;
	cout << "Die groesste eingegebene Zahl lautete: " << groesste << endl;
	system("pause");
}
