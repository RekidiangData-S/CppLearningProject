#include<iostream>
using namespace std;

void main()
{
	int userPin = 1234, pin, errorCounter = 0, tries=3;
	do
	{
		cout << "Enter your PIN code : ";
		cin >> pin;
		if (pin != userPin)
			
			
			errorCounter++;
		tries -= errorCounter;
		//cout << "You still have " << " more time to Try again" << endl;

		


	} while (errorCounter<3 && pin != userPin);

	if (errorCounter < 3)
		cout << "Loading ... ";
	else
		cout << "Blocked .....";

}
