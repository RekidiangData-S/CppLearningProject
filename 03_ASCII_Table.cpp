#include <iostream>
using namespace std;


int main()
{
    /*
    ASCII , abbreviated from American Standard Code for Information Interchange,
    is a character encoding standard for electronic communication. ASCII codes represent
    text in computers, telecommunications equipment, and other devices.

    N.B : See table in reource fold +> ASCII use 7 bits to represent one charater 2^7


    */

    //Casting Operator : convert one data type into an other
    cout << (int)'a' << endl;
    cout << int('a') << endl;

    char c1, c2, c3, c4, c5;
    cout << "Enter 5 letters : ";
    cin>> c1>> c2>> c3>> c4>>c5;
    cout << "ASCII Message " << int(c1)<<" " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5);

        
    system("pause>0");// to clean the console
}

