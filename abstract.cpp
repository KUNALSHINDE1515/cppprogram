/* example of abstract class*/
#include<iostream>
using namespace std;

class animal
{
	public:
		virtual void sound()=0;
		void eat()
		{
			cout<<"Animal is eating.....!";
		}
};

class dog:public animal
{
	public:
		void sound()
		{
			cout<<"BHooooo.......Bhoooooo"<<endl;
			
		}
};

int main()
{
	dog d;
	d.sound();
	d.eat();
}
