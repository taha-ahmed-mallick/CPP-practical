#include <iostream>
using namespace std;

int main()
{
	cout<<"\n\n\t\t\t    CALCULATE TOTAL, PERCENTAGE AND GRADE \n";
	cout<<"\t\t===========================================================================\n\n";
	int math, english, urdu, computer, science, total, percent;
	
	cout<<" \t\t\t\t Enter Marks for Maths: ";
	cin>>math;
	cout<<" \t\t\t\t Enter Marks for English: ";
	cin>>english;
	cout<<" \t\t\t\t Enter Marks for Urdu: ";
	cin>>urdu;
	cout<<" \t\t\t\t Enter Marks for Computer: ";
	cin>>computer;
	cout<<" \t\t\t\t Enter Marks for Science: ";
	cin>>science;
	
	cout<<"\n\n\t\t------------x--------------------x----------------x----------------x-----------\n\n";
	cout<<"\t\t\t\t (Note Each Subject carries 100 marks)\n\n";
	total=math+english+urdu+computer+science;
	cout<<" \t\t\t\t The Total is equal to: "<<total<<"\n";
	
	percent = total*100/500;
	
	cout<<"\t\t\t\t The Percentage is equal to: "<<percent<<"%\n\n";
	
	if (percent >= 80)
	{
		cout<<"\t\t\t\t The Grade is A1 \n\n\n";
	}
	else if (percent >= 70)
	{
		cout<<"\t\t\t\t The Grade is A \n\n\n";
	}
	else if (percent >= 60)
	{
		cout<<"\t\t\t\t The Grade is B \n\n\n";
	}
	else if (percent >= 50)
	{
		cout<<"\t\t\t\t The Grade is C \n\n\n";
	}
	else if (percent >= 40)
	{
		cout<<"\t\t\t\t The Grade is D \n\n\n";
	}
	else if (percent >= 33)
	{
		cout<<"\t\t\t\t The Grade is E \n\n\n";
	} else {
		cout<<"\t\t\t\t Out of Range \n\n\n";
	}
	return 0;
}
