#include <iostream>;
#include <string>;
using namespace std;

int main()
{
	int eingabe[4];

	for (int i = 1; i < 5; i++)
	{
		cout << "Bitte geben Sie die " << i << ". Zahl ein: ? ";
		cin >> eingabe[i - 1];
	}

	cout << "Bitte geben Sie die Vergleichszahl ein: ? ";
	int pruefzahl;
	cin >> pruefzahl;

	int haeufigkeit = 0;
	for (int i = 0; i < 5; i++)
	{
		if (eingabe[i] == pruefzahl)
		{
			haeufigkeit += 1;
		}
	}

	cout << haeufigkeit << " Eingabezahlen waren gleich der Vergleichszahl." << endl;
	cout << 4 - haeufigkeit << " Eingabezahlen waren ungleich der Vergleichszahl." << endl;
	system("Pause");
}