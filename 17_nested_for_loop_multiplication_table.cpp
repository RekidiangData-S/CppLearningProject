#include<iostream>
using namespace std;

void main() {
	//Multiplication table
	for (int i = 1; i <= 10; i++) {
		cout << "Multiplication Table by " << i << endl << endl;
		for (int j = 1; j <= 10; j++) {
			cout << i << "*" << j << "= " << i * j << endl;
		}
		cout << endl;
		
	}


	system("pause>0");
}