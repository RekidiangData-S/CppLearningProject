#include<iostream>
#include<iomanip>

using namespace std;

void main() {

	int width, height;

	cout << "height : ";
	cin >> height;

	cout << "width : ";
	cin >> width;
	
	char symbol;
	cout << "symbol : ";
	cin >> symbol;

	for (int h = 0; h < height; h++)
	{
		for (int w = 0; w < width; w++)
		{
			cout << setw(3) << symbol;

		}
		cout << endl;

	}

	system("pause>0");


}
