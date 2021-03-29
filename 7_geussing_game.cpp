#include<iostream>
using namespace std;

int main()
{
	int hostUserNum, guestUserNum;
	cout << "Host Turn : ";
	cin >> hostUserNum;
	system("cls");
	cout << "Guest Turn : ";
	cin >> guestUserNum;
	/*
	if (hostUserNum == guestUserNum)
		cout << "Correct !!";

	else
		cout << "Failed !!!";
	*/

	//Ternary operator
	(hostUserNum == guestUserNum) ? cout << "Correct !!": cout << "Failed !!!";

	system("pause>0");

}
