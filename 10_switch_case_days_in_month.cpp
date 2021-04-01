#include<iostream>
using namespace std;

int main()
{
	//(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	int year, month;

	cout << "***********************************************" << endl;
	cout << ">>>>> Number of days in a month Calculator <<<<<" << endl;
	cout << "***********************************************" << endl<<endl;

	cout << "Enter Year  : ";
	cin >> year;
	cout << "SElect Month :"<<endl ;
	cout << "--------------" << endl;
	cout << "1 for January" << endl << "2 for February" << endl << "3 for March" << endl << "4 for April" << endl;
	cout << "5 for May" << endl << "6 for June" << endl << "7 for July" << endl << "8 for August" << endl;
	cout << "9 for September" << endl << "10 for October" << endl << "11 for November" << endl << "12 for December" << endl;
	cout << "--------------" << endl;
	cout << "Enter Selected Month : ";
	cin >> month;

	cout << endl << endl;
	cout << ">>>>> RESULT< <<<<" << endl;
	cout << "******************************" << endl;
	
	switch (month)
	{
	//February 29 days in leap year
	case 2: (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
		cout << "29 days month" : cout << "28 days month"<<endl; break;

	case 4:
	case 6:
	case 9:
	case 11:cout << "30 days month"<<endl; break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:cout << "31 days month"<<endl; break;
	default:cout << "Not Valid => < please check months on the top >"<<endl;
	
	}
	
	cout << "******************************" << endl;

	system("pause>0");
}