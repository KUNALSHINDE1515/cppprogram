#include<iostream>

using namespace std;

int main(){
	
	int age;
	cout<<"Enter the age: ";
	cin>>age;
	
	if(age>=18)
	
	goto vote;
	else
	goto notvote;
	
	vote:
		cout<<"You are eligible for the vote.....!";
		return 0;
	notvote:
		cout<<"You are not eligible for the vote .....!!!";
	return 0;
	
}
