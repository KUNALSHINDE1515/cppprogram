#include<iostream>
using namespace std;

class kunal{
	
	private:
		 string tv;
	public:
		void show()
		{
			tv="IPL FINAL 2023";
		}
		
	friend	void rohit(kunal k);
};

void rohit(kunal k)
{

 cout<<"I am watching match"<<k.tv;
 
 };
 
 int main()
 {
 	kunal a;
 	a.show();
 	rohit(a);
 	
 	return 0;
 	
 }
