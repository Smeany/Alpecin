#include<iostream>;
#include<string>;
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
		} while (ausgabe[i] > 6 || ausgabe[i] < 1);
	}

	for (int i = 0; i < 9; i++)
	{
		int index = i + 1;
		cout << "Die " << index << ". eingegebene Zahl lautete: " << ausgabe[i] << endl;
	}
	system("pause");
}