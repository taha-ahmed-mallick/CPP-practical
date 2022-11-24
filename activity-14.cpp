#include <iostream>
using namespace std;

int main()
{
	cout<<"\n\n\t\t        CALCULATE THE TOTAL AND AVERAGE OF SIX NUMBERS \n";
	cout<<"\t\t==============================================================================\n\n";
	int number1, number2, number3, number4, number5, number6, total;
	float avg;
	cout<<"\t\t\t\t Enter 1st Number : ";
	cin>>number1;
	cout<<"\t\t\t\t Enter 2nd Number : ";
	cin>>number2;
	cout<<"\t\t\t\t Enter 3rd Number : ";
	cin>>number3;
	cout<<"\t\t\t\t Enter 4th Number : ";
	cin>>number4;
	cout<<"\t\t\t\t Enter 5th Number : ";
	cin>>number5;
	cout<<"\t\t\t\t Enter 6th Number : ";
	cin>>number6;
	cout<<"\n\n\t\t\t\t-------------x------------------x-----------------x-------------x------------\n\n";
	total = number1 + number2 + number3 + number4 +number5 + number6;
	cout<<"\t\t\t\t The Total is equal : "<<total<<"\n";
	avg = total / 6;
	cout<<"\t\t\t\t The Average is equal : "<<avg<<"\n\n\n";
	return 0;
}
