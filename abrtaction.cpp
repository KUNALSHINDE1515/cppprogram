#include<iostream>
using namespace std;
class mybank {
	
	private:
		int  atmpin,balance;
	public : 
	    string bname,IFSC;
	    int accNumber;
	void input()
	{
		atmpin=2001;
		balance=555555;
		bname="HDFC";
		IFSC="HDFC002145";
		accNumber=1245789625;
	}
	
	void output()
	{
		cout<<"My Bank details is:"<<endl;
		cout<<"ATM PIN IS :"<<atmpin<<endl;
		cout<<"BALANCE IS :"<<balance<<endl;
		cout<<"BANK NAME IS :"<<bname<<endl;
		cout<<"IFSC CODE IS :"<<IFSC<<endl;
		cout<<"ACCOUNT NUMBER IS :"<<accNumber<<endl;
	}
};
int main()
{
	mybank m;
	m.input();
	m.output();
	
	cout<<"Rohit is tring to access my account details...."<<endl;
//		cout<<"ATM PIN IS :"<<m.atmpin<<endl;
//		cout<<"BALANCE IS :"<<m.balance<<endl; /*does not access sensitive information with abstract class.*/
		cout<<"BANK NAME IS :"<<m.bname<<endl;
		cout<<"IFSC CODE IS :"<<m.IFSC<<endl;
		cout<<"ACCOUNT NUMBER IS :"<<m.accNumber<<endl;
	
	
	return 0;
	
	
}
