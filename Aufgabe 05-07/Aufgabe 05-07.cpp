#include <iostream>;
#include <string>;
using namespace std;

int main()
{
	string eingabe;
	int ausgabe = 0;
	cout << "Bitte die Zahl oder das Wort 'ende' eingeben: ? ";
	cin >> eingabe;
	if (eingabe != "ende")
	{
		for (int i = eingabe.length(), int p = 1; i > 0; i--, p*10)
		{
			ausgabe += (int(eingabe[i - 1]) - int('0')) * p;
		}
		cout << "Der doppelte Wert betraegt: " << ausgabe <<endl;
	}
	else
	{
		cout << "Das Programm beendet sich jetzt." << endl;
	}
	system("pause");
}