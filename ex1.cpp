#include<iostream>

using namespace std;

struct kunal{
	
	int roll;
	char name;
	float marks;
};

int main(){
	
	struct kunal k;
	
	cout<<"Enter student roll NO :";
	cin>>k.roll;
	
	cout<<"Enter student Name :";
	cin>>k.name;
	
	cout<<"Enter student Marks :";
	cin>>k.marks;
	
	cout<<k.roll<<ends<<k.name<<ends<<k.marks;
	
	return 0;
	
	
}
