#include<iostream>
using namespace std;

class A
{
	
	int a ,b;
	public:
		void input()
		{
			a=10;b=30;
		}
	friend class B;
	
};

class B{
	
	int c;
	
	public:
		void add(A r)
		{
			c=r.a+r.b;
			cout<<c;
		}
};

int main()
{
	A a;
	a.input();
	B obj;
	obj.add(a);
	
	return 0;
}
