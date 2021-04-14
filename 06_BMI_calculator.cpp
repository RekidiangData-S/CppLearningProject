#include<iostream>
using namespace std;

int main()
{
	float weigtht, height, bmi;
	cout << "Enter triangle side length values" << endl;
	cout << "Enter your Weight in (Kg) : ";
	cin >> weigtht;
	cout << "Enter your Height in (m) : ";
	cin >>height;
	bmi = weigtht / (height * height);

	cout << "**************************** " << endl;
	if (bmi < 18.5)
		cout << "Underweight" << endl;

	else if(bmi>25)
		cout << "Overweight" << endl;
	else
		cout << "Normal weight" << endl;
	cout << "Your bmi is " << bmi<<endl;
	cout << "**************************** " << endl;


	system("pause>0");
}