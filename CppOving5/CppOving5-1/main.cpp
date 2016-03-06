#include <iostream>
#include <string>

using namespace std;

void initialer(string navn);

char initial;
int i, j, sp;

int main()
{

	string navn;

	string p;

	cout << "Skriv inn ditt fulle navn: ";
	getline(cin, navn);
	cout << endl;
	cout << "Ditt fulle navn er: " << navn << "\n";

	initialer(navn);

	cout << endl;

	cin.get();

	return 0;
}

void initialer(string navn) {

	cout << "Dine initialer blir: " << navn[0] << ".";
	for (size_t i = 0; i < navn.size(); i++) {
		if (navn[i] == ' ') {
			sp = i;
			for (j = sp + 1; j <= sp + 1; j++) {
				initial = navn[j];
				cout << initial << ".";
			}
		}
	}
}