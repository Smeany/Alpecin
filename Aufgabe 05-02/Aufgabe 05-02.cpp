#include <iostream>;
#include <string>;
using namespace std;

int main()
{
	int ausgabe[6];

	for (int i = 0; i < 6; i++)
	{
		int indexzahl = i + 1;
		do
		{
			cout << "Bitte geben Sie die " << indexzahl << ". Zahl ein: ? ";
			cin >> ausgabe[i];
		} while (ausgabe[i] > 6 || ausgabe[i] < 1);
	}

	cout << "Bitte geben Sie die Suchzahl ein: ? ";
	int suchzahl = 0;
	cin >> suchzahl;

	bool kommtvor = false;
	int pos;

	for (int i = 0; i < 6; i++)
	{
		if (ausgabe[i] == suchzahl)
		{
			kommtvor = true;
			pos = i + 1;
			break;
		}
	}

	if (kommtvor == true)
	{
		cout << "Die Suchzahl kam unter den Eingaben an Position " << pos << " vor." << endl;
	}
	else
	{
		cout << "Die Suchzahl kam NICHT unter den Eingaben vor." << endl;
	}
	system("pause");
}