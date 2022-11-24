#include <iostream>
using namespace std;

int main()
{
	cout<<"\n\n\t\t      ADD, SUBTRACT, MULTIPLY, AND DIVIDE TWO NUMBERS USING ARITHEMATIC OPERATORS \n";
	cout<<"\t\t====================================================================================\n\n";
	int number1, number2, result;
	cout<<"\t\t\t\t Enter 1st number : ";
	cin>>number1;
	cout<<"\t\t\t\t Enter 2nd number : ";
	cin>>number2;
	cout<<"\n\n\t\t-----------------x----------------x--------------x---------------x------------\n\n";
	result = number1 + number2;
	cout<<"\t\t\t\t The Result of Number1 + Number2 is : "<<result<<"\n";
	result = number1 - number2;
	cout<<"\t\t\t\t The Result of Number1 - Number2 is : "<<result<<"\n";
	result = number1 * number2;
	cout<<"\t\t\t\t The Result of Number1 * Number2 is : "<<result<<"\n";
	result = number1 / number2;
	cout<<"\t\t\t\t The Result of Number1 / Number2 is : "<<result<<"\n";
	return 0;
}
