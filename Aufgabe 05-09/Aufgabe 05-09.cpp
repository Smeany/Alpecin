#include <iostream>
#include <string>
using namespace std;

string trimme(string eingabe)
{
	string ausgabe;
	int index = 0;
	int index2 = eingabe.length() - 1;
	int startpos = 0;
	int endpos = eingabe.length();
	while (eingabe[index] == '+')
	{
		if (index > index2)
		{
			break;
		}
		index += 1;
		startpos = index;
	}
	while (eingabe[index2] == '+')
	{
		endpos = index2;
		index2 -= 1;
		if (index2 < 0)
		{
			break;
		}
	}

	for (int i = startpos; i < endpos; i++)
	{
		ausgabe += eingabe[i];
	}

	return ausgabe;
}

int main()
{
 string s = "";

 cout << "Bitte geben Sie die Textzeile ein: ? ";
 getline(cin, s);

 cout << "Vorher: " << s << endl;
 cout << "Nachher: " << trimme(s) << endl;
 system("PAUSE");
 return 0;
} 