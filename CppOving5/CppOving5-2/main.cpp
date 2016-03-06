#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int utregning(string persnr, int yr);

int main() {

	cout << "----------------- \n";
	cout << "|ALDERSUTREGNING| \n";
	cout << "|  <A> Regn ut  | \n";
	cout << "|  <B> AVSLUTT  | \n";
	cout << "----------------- \n";

	

	//cout << "Hvilket år er det? ";
	//
	//int yr;
	//
	//cin >> yr;

	string navn;

	cout << "Skriv inn ditt fulle navn: ";

	getline(cin, navn);

	string persnr;

	cout << "Skriv inn ditt personnummer: ";

	getline(cin, persnr);

	cout << "Hei " << navn << " Ditt personnummer er: " << persnr << endl;

	cout << utregning(persnr, 2016);

	system("PAUSE");

	return 0;
}

int utregning(string persnr, int yr) {

	stringstream str;
	stringstream str1;
	ostringstream strcombine;

	char A;

	A = persnr.at(4) + persnr.at(5);

	str << persnr.at(4);
	str1 << persnr.at(5);

	int z;
	int x;
	int y;

	str >> A;
	str1 >> y;

	

	z = A;

	return z;
}
