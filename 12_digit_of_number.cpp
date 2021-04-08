#include <iostream>
using namespace std;

int main()

{
	int number;
	cout << "Enter a number : ";
	cin >> number;

	if (number == 0)
		cout << "You vave entered 0.\n";
	else {
		if (number < 0)
			number *= -1;
		int counter = 0;
		while (number > 0) {
			number /= 10;
			counter++;
		}
		cout << "Number contains " << counter << " digit(s)\n";

	}

	system("pause>0");
}