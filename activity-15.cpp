#include <iostream>
using namespace std;

int main()
{
	int number;
	cout<<"\n\n\t\t\t\t CHECK WETHER A NUMBER IS POSITIVE, NEGATIVE OR ZERO \n";
	cout<<"\t\t\t=============================================================\n";
	cout<<"\t\t\t\t\t\t Enter a number : ";
	cin>>number;
	if (number > 0)
	{
		cout<<"\n\n\t\t\t\t\t\t The Number is Positive.\n\n";
	}
	else if (number < 0)
	{
		cout<<"\n\n\t\t\t\t\t\t The Number is Negative.\n\n";
	}
	else
	{
		cout<<"\n\n\t\t\t\t\t\t The Number is Zero.\n\n";
	}
	return 0;
}
