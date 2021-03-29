#include <iostream>
using namespace std;

int main()
{
	//1) Arithmetic operator 
	//1.1) Binary operatar : perform calculation on two operand => +, -, *, /, % 
	cout << "1) Arithmetic operator "<<endl;
	cout << "***********************************"<< endl;
	cout << "1.1) Binary operatar : perform calculation on two operand => +, -, *, /, % " << endl<<endl;
	cout<< "Addition        => 2 + 5   = "   << 2 + 5 << endl;
	cout <<"Subtraction     => 8 - 5   = "   << 8 - 5 << endl;
	cout <<"Multiplication  => 2 * 5   = "   << 2 * 5 << endl;
	cout<< "Division        => 5 / 2   = "   << 5 / 2 << endl;
	cout << "Division Exact => 5 / 2.0 = " << 5 / 2.0 << endl; // both or one of the operator must be a float type
	cout << "Modulo         => 5 % 2   = "   << 5 % 2 << endl<<endl;

	//1.2) Unary operatar => increment (++), decrement(--)
	cout << "1.2) Unary operatar => increment (++), decrement(--)" << endl << endl;
	
	// 1.2.1) post and pre increment operator
	cout << "1.2.1) post and pre increment operator"<<endl;
	int counter1 = 3;
	int counter2 = 4;
	cout << "counter1 = " << counter1 << endl;
	cout << "counter2 = " << counter2 << endl<<endl;
	cout<<"Post-increment => counter1++ = " <<counter1++ <<endl;
	cout << "Check Post-increment => counter1 = " << counter1 << endl;
	cout<<"Pre-Increment  => ++counter2 = " << ++counter2 <<endl<<endl;

	// 1.2.2) post and pre decrement operator
	cout << " 1.2.2) post and pre decrement operator" << endl;

	counter1 = 2;
	counter2 = 3;
	cout << "counter1 = " << counter1 << endl;
	cout << "counter2 = " << counter2 << endl << endl;
	cout << "Post-decrement => counter1-- = " << counter1-- << endl;
	cout << "Check Post-decrement => counter1 = " << counter1 << endl;
	cout << "Pre-decrement  => --counter2 = " << --counter2 << endl << endl;

	//2)Relational Operator => <, >, <=, >=, ==, !=  (,)also
	cout << "2) Relational Operator => <, >, <=, >=, ==, != , (,)also" << endl;
	cout << "***********************************" << endl;

	cout << "Grander than       => (2 > 5)  = " << (2 > 5) << endl;
	cout << "Less than          => (8 < 5)  = " << (8 < 5) << endl;
	cout << "Grander than equal => (2 >= 5) = " << (2 >= 5) << endl;
	cout << "Less than equal    => (8 <= 5) = " << (8 <= 5) << endl;
	cout << "Equal              => (2 == 5) = " << (2 == 5) << endl;
	cout << "Not equal          => (8 != 5) = " << (8 != 5) << endl<<endl;
	cout << "Also (,)              => int a=2, b=3 "<<endl<<endl;

	//3)Logical Operator => and(&&), or(||), not(!), 
	cout << "3) Logical Operator => and(&&), or(||), not(!)" << endl;
	cout << "***********************************" << endl;

	cout << "And => (2 > 5 && 5<2)  = " << (2 > 5 && 5 < 2) << endl;
	cout << "Or  => (2 > 5 || 5<2)  = " << (2 > 5 || 5 < 2) << endl;
	cout << "Not => !(2 > 5 || 5<2) = " << !(2 > 5 || 5 < 2) << endl<<endl;

	//4)Assignment Operator =, +=, -+,*=, /=, %= 
	
	cout << "4) Assignment Operator =, +=, -+,*=, /=, %= " << endl;
	cout << "***********************************" << endl;

	int num ;
	cout << "assign value         => num = 10 = " << (num = 10) << endl;
	cout << "Add and assing       => num += 2 = " << (num += 2) << endl;
	cout << "Subtract and assign  => num -=2  = " << (num -= 2) << endl;
	cout << "Multiply and assing  => num *= 2 = " << (num *= 2) << endl;
	cout << "Divid and assign     => num /=2  = " << (num /= 2) << endl;
	cout << "Modulo and assign    => num %=2  = " << (num % 2) << endl<<endl;
	
	//arithmetic < relational < logical < assignment
	cout << "***********************************" << endl;
	cout << "Operator Priority" << endl;
	cout << "arithmetic >> relational >> logical >> assignment"<<endl;
	cout << "***********************************" << endl;


	system("pause>0");
}