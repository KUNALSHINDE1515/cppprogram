/* class template ex*/
#include<iostream>
using namespace std;

template<class A>
class print
{
	public:
		print(A x, A y)
		{
			cout<<x<<" "<<y<<endl;
		}
};
int main()
{
	print <char>obj('k','s');
	
	return 0;
}
