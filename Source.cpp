#include <iostream>
using namespace std;


void sucet(float a, float b) {
	float c = a + b;
	cout << "vysledok je:" << c << endl;
}
void sucit(float a, float b) {
	float c = a * b;
	cout << "vysledok je:" << c << endl;
}
void rozdiel(float a, float b) {
	float c = a - b;
	cout << "vysledok je:" << c << endl;
}
void podiel(float a, float b) {
	float c = a / b;
	cout << "vysledok je:" << c << endl;
}

int main() {
	int  start = 65;
	while (start == 65) {

		float a;
		float b;
		char x;
		cout << "Zadaj prve cislo" << endl;
		cin >> a;
		cout << "Zadaj operator    + ; - ; *  alebo  /  " << endl;
		cin >> x;
		int y = x;
		cout << "Zadaj druhe cislo" << endl;
		cin >> b;

		if (y == 47 && b == 0) {
			cout << "Nemozes delit nulou" << endl;
		}
		else {
			switch (y) {
			case 43:
				sucet(a, b);
				break;
			case 42:
				sucit(a, b);
				break;
			case 45:
				rozdiel(a, b);
				break;
			case 47:
				podiel(a, b);
				break;
			default:
				cout << "zadal si nespravny operátor" << endl;
			}

			cout << "chces pocitat dalsi priklad?" << endl;
			cout << "a)  ano            n)  nie" << endl;
			char odpoved;
			cin >> odpoved;
			int start = odpoved;

		}
	}
}