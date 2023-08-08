/* example of Function templates*/
#include<iostream>
using namespace std;

template< class A>
void print(A x ,A y)
{
	cout<<x<<" "<<y<<endl;
	
}
int main()
{
	print(100,400);
	print('a','b');
	print(45.11,98.11);
	
	return 0;
}
