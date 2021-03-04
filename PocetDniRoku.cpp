// PocetDniRoku.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int osetreni(string coZadat)
{
	int cislo; 
	cout << "Zadej " << coZadat << endl;
	while (1) {
		cin >> cislo;
		int chyba = cin.fail();
		if (chyba) {
			cin.clear();
			cin.ignore('\n', numeric_limits<streamsize>::max());
			cout << "Chyba, zadej cislo!" << coZadat << endl;
		}
		else {
			break;
		}
	}
	return 0;
}
int main()
{
	cout << "Pocet dni od zacatku roku\n";
	int den, mesic, rok;

	/*
	den = osetreni("Den");
	mesic = osetreni("Mesic");
	rok = osetreni("Rok");
	*/

	cout << "Zadejte datum ve formatu DD MM RRRR: " << endl;
	cin >> den >> mesic >> rok;
	cout << "\nzadane datum je:" << den << "." << mesic << "." << rok << endl;
	int mesice[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int pocet = 0;
	for (int i = 0; i < mesic - 1; i++) {
		pocet += mesice[i];
	}
	if ((rok % 4 == 0) && ((rok % 100 != 0) || (rok % 400 == 0)) && (mesic > 2)) {
		pocet++;
	}
	pocet += den;
	cout << "Pocet dni od zacatku roku " << rok << " do zacatku data: " << pocet << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
