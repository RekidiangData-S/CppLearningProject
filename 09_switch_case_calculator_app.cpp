#include <iostream>
using namespace std;

int main()
{
	float num1, num2;
	char operation ;
	cout << "******************************" << endl;
	cout << ">>>>>Rekidiang Calculator<<<<<" << endl;
	cout << "******************************" << endl<<endl;

	cout << "Enter First Number : " ;
	cin >> num1 ;
	cout << "Enter Operator "<<endl ;
	cout << " (+, -, *, / or %) : ";
	cin >> operation ;
	cout << "Enter Second Number : " ;
	cin>> num2;

	cout << endl<<endl;
	cout << "******************************" << endl;
	cout << ">>>>> RESULT< <<<<" << endl;
	
	switch (operation)
	{
	
	case '+': cout << num1<< " " << operation << " " << num2 << " " << "=" << " " << num1 + num2; break;
	case '-': cout << num1 << " " << operation << " " << num2 << " " << "=" << " " << num1 - num2; break;
	case '*': cout << num1 << " " << operation << " " << num2 << " " << "=" << " " << num1 * num2; break;
	case '/': cout << num1 << " " << operation << " " << num2 << " " << "=" << " " << num1 / num2; break;
	case '%': //modulo operator accept only int value
		bool isNum1Int, isNum2Int;
		isNum1Int = int(num1) == num1;
		isNum2Int = int(num2) == num2;

		if (isNum1Int && isNum2Int)
			cout << num1 << " " << operation << " " << num2 << " " << "=" << " " << (int)num1 % (int)num2; 
		else
			cout << "Not Valid => < modulo operatorator is use only int data type >" << endl;
		break;
	default:cout << "You select a non Valid Operator " << endl<<"Please select +, -, *, / or % operator" ;

	
	}
	cout << endl;
	cout << "******************************" << endl;

	system("pause>0");
}

