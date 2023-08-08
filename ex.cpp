#include<iostream>
using namespace std;


	class person
	{
		private:
			
		 int run;
		 string msg;
		 
		 public:
		 	void play()
		 	{
		 		run=100;
		 		cout<<"today i runs score is "<<run<<endln ;
			 }
			 
			void walk()
			{
				msg="today i am waking 3 km";
			
				cout<<msg;
	        }	
	
	};
	
	int main()
	{
		person obj;
		obj.play();
		obj.walk();
		
		return 0;
	}
	
		 

