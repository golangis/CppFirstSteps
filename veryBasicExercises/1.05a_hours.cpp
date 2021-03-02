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
	return 0;
}
