#include <iostream>
using namespace std;

int main()
{
	/////// Variable ///////
	int annualSalary = 5685;

	/////// output and input ///////
	cout << "Enter your annual salary : ";
	cin >> annualSalary;

	int monthlySalary = annualSalary / 12;
	cout << "***************************" << endl;
	cout << "Your Monthly Salary is : " << monthlySalary<<endl;
	cout << "In 10 years you will earn  : " << annualSalary*10<<endl<<endl;
	cout << ">>>>>>> THANK YOU <<<<<<<<<<<<";

	system("pause>0");


}