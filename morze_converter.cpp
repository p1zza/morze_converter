#include "stdafx.h"
#include <iostream>
#include <string.h>
#define MAX 256
using namespace std;

class morze
{
public:
	void code()
	{
		char letter;
		char *phraze;
		phraze = new char[MAX];
		cout << "Enter the phraze with lowercase letters" << endl;
		cin.getline(phraze, MAX);


		for (size_t i = 0; phraze[i]!='\0' ; i++)
		{
			letter = tolower(phraze[i]);
			phraze[i] = letter;

			switch (phraze[i])
			{
			case ' ': cout << "  "; break;
			case 'a': cout << "*-"; break;
			case 'b': cout << "-***"; break;
			case 'c': cout << "-*-*"; break;
			case 'd': cout << "-**"; break;
			case 'e': cout << "*"; break;
			case 'g': cout << "--*"; break;
			case 'h': cout << "****"; break;
			case 'i': cout << "**"; break;
			case 'j': cout << "*---"; break;
			case 'k': cout << "-*-"; break;
			case 'l': cout << "*-**"; break;
			case 'm': cout << "--"; break;
			case 'n': cout << "-*"; break;
			case 'o': cout << "---"; break;
			case 'p': cout << "*--*"; break;
			case 'q': cout << "--*-"; break;
			case 'r': cout << "*-*"; break;
			case 's': cout << "***"; break;
			case 't': cout << "-"; break;
			case 'u': cout << "**-"; break;
			case 'v': cout << "***-"; break;
			case 'w': cout << "*--"; break;
			case 'x': cout << "-**-"; break;
			case 'y': cout << "-*--"; break;
			case 'z': cout << "--**"; break;
			case '1': cout << "*---"; break;
			case '2': cout << "**---"; break;
			case '3': cout << "***--"; break;
			case '4': cout << "****-"; break;
			case '5': cout << "*****"; break;
			case '6': cout << "-****"; break;
			case '7': cout << "--***"; break;
			case '8': cout << "---**"; break;
			case '9': cout << "----*"; break;
			case '0': cout << "-----"; break;
			}
		}
	}
};

void main()
{
	morze object;
	object.code();
	cout << endl;
	system("pause");
}