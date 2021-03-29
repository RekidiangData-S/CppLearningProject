#include <iostream>
using namespace std;

int main()
{
	// See figures in resources fold for datails

	///////// Data type ////////
	cout << "DATA TYPE"<<endl;
	cout << "#################################" << endl<<endl;

	///////// Built-In data type ////////
	cout << "(A) Built-In data type"<<endl;
	cout << "******************************" << endl;
	cout << "(A-1) Integral type"<<endl;

	cout << "A-1_1 Integer" << endl;
	int yearOfBirth = 1995;
	cout << "Size of integer is " << sizeof(int) << " bytes" <<"Min value : "<<INT_MIN<<" <=> " << "Max value : " << INT_MAX<<endl;
	cout << "Size of Unsigned integer is " << sizeof(unsigned int) << " bytes " <<  "Max value : " << UINT_MAX << endl;
	cout << "A-1_2 Charactere" << endl<<endl;
	char gender = 'M';
	cout << "Size of char is " << sizeof(char) << " bytes" << endl;
	cout << "A-1_2 Boolean" << endl;
	bool isOlderThan = true;
	cout << "Size of bool is " << sizeof(bool) << " bit" << endl;

	cout << "(A-2) Floating type"<<endl;
	cout << "A-2_1 Float" << endl;
	cout << "Size of float is " << sizeof(float) << " bytes" << endl;
	float averageGrade = 8.5;
	cout << "A-2_1 Double" << endl << endl;
	double bankAccountBalance = 455666678512368858;
	cout << "Size of double is " << sizeof(double) << " bytes" << endl;

	///////// Derived data type ////////
	cout << "(B) Derived data type"<<endl<<endl;
	cout << "******************************" << endl;
	cout << "Array" << endl <<"Function"<<endl<<"Pointer"<< endl<<"Reference"<<endl<<endl;

	///////// User-Defined data type ////////
	cout << "(C) User-Defined data type"<<endl<<endl;
	cout << "******************************" << endl;
	cout << "Structure" << endl << "Union"<<endl << "Class" << endl << "Enumeration" << endl<<endl;

	///////// Data Type Overflow ////////
	cout << "Data Type Overflow " << endl ;
	cout << "******************************" << endl;
	int intMax = INT_MAX;
	cout << "integer Maximum value is        : " << intMax<<endl;
	cout << "integer Maximum value + 1 Equal : " << intMax+1<<endl;

	system("pause>0");
}