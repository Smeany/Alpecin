#include <iostream>;
#include <string>;
using namespace std;

int main()
{
	int ausgabe[9];

	for (int i = 0; i < 9; i++)
	{
		int indexzahl = i + 1;
		do
		{
			cout << "Bitte geben Sie die " << indexzahl << ". Zahl ein: ? ";
			cin >> ausgabe[i];
		} while (ausgabe[i] > 6 || ausgabe[i] < 0);
	}

	cout << "Bitte geben Sie die Suchzahl ein: ? ";
	int suchzahl = 0;
	cin >> suchzahl;

	bool kommtvor = false;

	for (int i = 0; i < 9; i++)
	{
		if (ausgabe[i] == suchzahl)
		{
			kommtvor = true;
		}
	}

	if (kommtvor == true)
	{
		cout << "Die Suchzahl kam unter den Eingaben vor." << endl;
	}
	else
	{
		cout << "Die Suchzahl kam NICHT unter den Eingaben vor." << endl;
	}
	system("pause");
}