#include <iostream>
using namespace std;
int main() {
	cout << "This is the question no 2.11b! Calculate neper! \n";
	double num,i,fat=1,res=1;
	cout << "Number: ";
	cin >> num;
	for (i = 1; i < num + 1; i++) {
		fat = fat * i; res = res + (1 / fat);
	}
	cout << "The factorial of " << num << " is " << fat << "\n";
	cout << "And idk how to say what it is that but it is " << res;
}
