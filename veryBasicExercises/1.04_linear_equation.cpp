// ex. 1.4
#include <iostream>
using namespace std;
float a, b, c, d, e, f;
int main() {
	cout << "This is the question number 1.4! Linear equation solver! \n";
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	cout << "c: "; cin >> c;
	cout << "d: "; cin >> d;
	cout << "e: "; cin >> e;
	cout << "f: "; cin >> f;
	if ((a * e - b * d) == 0) {
		cout << "No. \n";
	}
	else {
		cout << "YES! \nx=" << (c * e - b * f) / (a * e - b * d) << "\ny=" << (a * f - c * d) / (a * e - b * d);

	}
	return 0;
}
