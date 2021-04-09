#include<iostream>
using namespace std;

int main()
{
	int number ;
	cout << "Enter a number : ";
	cin >> number;
	int factorial = 1;
	
	
		//increase method
		/*
		for (int i = 1; i <= number; i++)
		{
			factorial *= i;
		}
		*/

		//decrease method
	for (int i = number; i >= 1; i--)
	{
		factorial *= i;
	}
	
	cout << "Factorial of " << number <<" ["<<number<<"!]"<<" is " << factorial << endl;



	system("pause>0");

}
