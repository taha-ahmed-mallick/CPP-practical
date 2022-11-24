#include <iostream>
using namespace std;

int main()
{
	float fh, cel;
	cout<<"\n\n\t\t\t CONVERT TEMPERATUE FROM FAHRENHIET TO CELSIUS \n";
	cout<<"\t\t================================================================\n\n";
	
	cout<<"\t\t Enter the value in Fahrenheit : ";
	cin>>fh;
	
	cel=((fh * 5.0) - (5.0 * 32)) / 9;
	
	cout<<"\n\n\t\t The value in Fahrenheit is : "<<fh<<"\n\n";
	cout<<"\t\t The value in Celsius is : "<<cel<<"\n\n";
	return 0;
}
