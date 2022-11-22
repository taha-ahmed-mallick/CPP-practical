#include <iostream>
using namespace std;

int main()
{
	int number = 10;
	cout<<"\n\n\t\t PRE-INCREMENT AND POST-INCREMENT\n";
	cout<<"\t=======================================================\n\n";
	cout<<"\n\t\t The Original Number = "<<number<<"\n\n";
	cout<<"\t------------x-----------x---------x------------\n\n";
	cout<<" \t\tResult of Post-Increment \n";
	cout<<" \t\t------------------------";
//	----------------------(Post Increment)-----------------------------
	cout<<"\n\t\tThe number is : "<<number++<<"\n\n\n";
	cout<<"\t------------x-----------x---------x------------\n\n";
	cout<<" \t\tResult of Pre-Increment \n";
	cout<<" \t\t------------------------";
	number = 10; //-------------------------re-initialized to 10
//	----------------------(Pre Increment)-----------------------------
	cout<<"\n\t\tThe number is : "<<++number<<"\n\n\n";
	return 0;
}
