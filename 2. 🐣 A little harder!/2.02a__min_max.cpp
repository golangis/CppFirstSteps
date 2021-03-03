//2.2 a)
#include <iostream>
#include <limits>
using namespace std;
int main() {
	float min = 9999999, max = -9999999, num;
	cout << "This is the question 2.2 a! Let's return the maximum and the minimum number of 3 random numbers! \n(p.s: It may not work for large numbers)";
	for (int i = 0; i < 3; i++) {
		cout << "\n" << i + 1 << " number: ";
		cin >> num;
		cout << "\n";
		if (num > max) { max = num; }
		if (num < min) { min = num; }
	}
	cout << "\nMaximun: " << max << "\nMinimun: " << min;
	//cout << "\n" << numeric_limits<float>::min();
	return 0;
}
