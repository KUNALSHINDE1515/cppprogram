#include<iostream>

using namespace std;

int main()
{
	cout<<"Execution Starting..."<<endl;
	int a,b,c;
	cout<<"Enter Two Number:" ;
	cin>>a>>b;
	
	try{
	
	  if(b==0)
	  throw b;
	  c=a/b;
	  cout<<"Result :"<<c;	
	}
	catch(int x)
	{
		cout<<"Can not divided by x";
	}
	
	cout<<"REsult :"<<c;
	cout<<endl<<"Execetion ended ";
	
	return 0;
}
