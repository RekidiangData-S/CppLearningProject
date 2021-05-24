#include<iostream>
#include<iomanip>

using namespace std;

void main() {

	int length;

	cout << "length : ";
	cin >> length;

	char symbol;
	cout << "symbol : ";
	cin >> symbol;

	cout << "TRIANGLE"<< endl<<endl;

	for (int i = 0; i <= length; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << setw(3) << symbol;

		}
		cout << endl;

	}

	cout << endl<< "REVERSED TRIANGLE" << endl<<endl;
	for (int i = length; i >= 1; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << setw(3) << symbol;

		}
		cout << endl;

	}


	system("pause>0");


}
