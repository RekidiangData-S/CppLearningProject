#include <iostream>
using namespace std;

int main()

{
	int number, reversedNumber=0;
	cout << "Enter a number : ";
	cin >> number;

	if (number == 0)
		cout << "You vave entered 0.\n";
	else {
		if (number < 0)
			number *= -1;
		int counter = 0;
		while (number != 0) {
			reversedNumber *= 10;
			int lastDigit = number % 10;
			//reversedNumber += number % 10;
			reversedNumber += lastDigit;
			number /= 10;
			counter++;
		}
		cout << "Reversed Number is " << reversedNumber ;

	}

	system("pause>0");
}