/* example of encapsulation*/
#include<iostream>
using namespace std;

class thief
{
	private:
		string name,add;
		int mob;
	public:
		void input()
		{
			name="Akash";
			add="saswad";
			mob= 44444444;
			
			
		}	
		void output()
		{
			cout<<name<<endl;
			cout<<add<<endl;
			cout<<mob;
		}
};

class police:public thief
{
	
};
int main()
{
	thief t;
	t.input();
	t.output();
	
//	here is started encpsulatio he targer public class then they will get output
    police p;
    p.input();
    p.output();
	return 0;
	
}
