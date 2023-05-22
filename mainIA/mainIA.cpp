// mainIA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main() {
	ibu* varibu = new ibu("dini");
	ibu* varibu2 = new ibu("novi");
	Anak* varAnak1 = new Anak("tono");
	Anak* varAnak2 = new Anak("rini");
	Anak* varAnak3 = new Anak("dewi");

	varibu->tambahAnak(varAnak1);
	varibu->tambahAnak(varAnak2);
	varibu->tambahAnak(varAnak3);
	varibu->tambahAnak(varAnak1);

	varibu->cetakAnak();
	varibu2->cetakAnak();

	delete varibu;
	delete varibu2;
	delete varAnak1;
	delete varAnak2;
	delete varAnak3;

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
