#include<iostream>

using namespace std;

int main()
{
	int a[2][2],i,j;
	cout<<"EnterArray of Element: "<<endl;
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			cin>>a[i][j];
		}
		
	}
		cout<<"Array of Element is:";
		
		for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cout<<a[i][j]<<ends;
		}
		
		cout<<endl;
		
	}
	return 0;
}
