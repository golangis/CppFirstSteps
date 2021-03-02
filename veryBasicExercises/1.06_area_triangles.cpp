//ex 1.6
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cout << "This is the question number 1.6! Area of a triangle!";
	float s, x1, x2, x3, y1, y2, y3;
	float a, b, c, area;
	cout << "Coordinates 1st point (x y): "; cin >> x1 >> y1;
	cout << "\nCoordinates 2nd point (x y): "; cin >> x2 >> y2;
	cout << "\nCoordinates 3rd point (x y): "; cin >> x3 >> y3;
	a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	s = (a + b + c) / 2.0;
	area = sqrt((s * (s - a) * (s - b) * (s - c)));
	if (a + b > c & a + c > b & b + c > a) {
		cout << "\nAnswer: " << area;
	}
	else { cout << "That triangle doesn't exist!"; }
  return 0;
}
