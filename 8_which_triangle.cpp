#include <iostream>
using namespace std;

int number;

int main() {

	float a, b, c;

	cout << "Enter triangle side length values" << endl;
	cout << "A Side : ";
	cin >> a;
	cout << "B Side : ";
	cin >> b;
	cout << "C Side : ";
	cin >> c;

	cout << "**************************** "<<endl;
	
	if (a==b&&b==c)
	{
		cout << "This is an EQUILATERAL TRIANGLE" << endl;
	}
	else
	{
		if (a != b && a!=c && b!=c)
		{
			cout << "This is a SCALENE TRIANGLE" << endl;
		}
		else
		{
			cout << "This is a ISOSCELES TRIANGLE" << endl;
		}
	}
	cout << "**************************** " << endl;

	cout << "Thank You !!! ";

	system("pause>0");



}

