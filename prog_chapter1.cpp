//ex 1.1
#include <iostream>
using namespace std;
char car;
int main() {
	cout << "Este é o exercício 1.1! \n";
	cout << "Digita um caracter: \n";
	cin >> car;
	cout << "O numero ASCII do caracter " << car << " e " << int(car);
}
//ex. 1.2
#include <iostream>
using namespace std;
int n1, n2, n3;
float mean;
int main() {
	cout << "Este é o exercício 1.2! \n";
	cin >> n1 >> n2 >> n3;
	mean = (n1 + n2 + n3) / 3.0;
	cout << "The mean value is " << mean << "\n";
	cout << n1 << "-" << mean << "=" << n1 - mean << "\n";
	cout << n2 << "-" << mean << "=" << n2 - mean << "\n";
	cout << n3 << "-" << mean << "=" << n3 - mean << "\n";
}
//ex. 1.3
#include <iostream>
#include <cmath>
using namespace std;
float r,p;
const float pi=3.1415;
int main(){
	cout << "Este é o exercício 1.3! \n";
	cout << "Radius: "; cin >> r;
	cout << "\nMass of the material: "; cin >> p;
	cout << (4 / 3.0000) * pow(r,3) * p * pi<< " is the total mass of the sphere.\n";
}
// ex. 1.4
#include <iostream>
using namespace std;
float a, b, c, d, e, f;
int main() {
	cout << "Este é o exercício 1.4! \n";
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	cout << "c: "; cin >> c;
	cout << "d: "; cin >> d;
	cout << "e: "; cin >> e;
	cout << "f: "; cin >> f;
	if ((a * e - b * d) == 0) {
		cout << "No. \n";
	} else {
		cout << "YES! \nx=" << (c * e - b * f) / (a * e - b * d) << "\ny=" << (a * f - c * d) / (a * e - b * d);

	}

//ex. 1.5 a
#include <iostream>
using namespace std;
int h1, m1, s1, h2, m2, s2, d;
int main() {
	cout << "This is the exercise 1.5 a! \n";
	cout << "Time1 (hours minutes seconds): ";
	cin >> h1 >> m1 >> s1;
	cout << "\nTime2 (hours minutes seconds): ";
	cin >> h2 >> m2 >> s2;
	s1 = s1 + s2;
	m1 = m1 + m2;
	h1 = h1 + h2;
	if (s1 >= 60) { m1 = m1 + 1; s1 = s1 % 60; }
	if (m1 >= 60) { h1 = h1 + 1; m1 = m1 % 60; }
	if (h1 >= 24) { d = 1; h1 = h1 % 24; }
	cout << "\nTime1 + Time2 = " << d << " days, "<< h1 << " hours, " << m1 << " minutes and " << s1 << " seconds.\n";
}
