/* write a program to check a year is leapyear or not*/

#include<iostream>
using namespace std;
int main()
{
	int year;
	
	cout<<"Enter the year to you have check leap year or not :";
	cin>>year;
	if(year % 400 ==0)
	{
		cout<<year<<" is a leap year.";
	}
	
	else if(year %100 ==0){
		cout<<year<<" is not a leap year";
	}
	else if(year % 4 ==0)
	{
		cout<<year<<" is a leap year.";
	}
	
	else{
		cout<<year<<" is not a lear year.";
	}
	return 0;
}
