#include <iostream>
using namespace std;


void main() {

	int grade, sum = 0;
	float numberOfClass = 10.0;

	for (int i = 0; i < numberOfClass; i++ ) {
		do {
			cout << "Enter grade " << i + 1 << ": ";
			cin >> grade;
		} while (grade < 1 || grade>5);
		sum += grade;

	}
	cout << "Total grade is   : " << sum << endl;
	cout << "average grade is : " << sum/ numberOfClass << endl;

	system("pause>0");
}
