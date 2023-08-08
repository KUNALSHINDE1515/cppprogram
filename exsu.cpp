#include<iostream>

using namespace std;

 struct stu{
	int marks;//int 4bytes
	float avg;//float 4 bytes
	double salary;//8bytes
};

union str2{
	
	int marks;
	float avg;
	double salary;
};

int main()
{
	struct stu s;
	union str2 s2;
	
	cout<<"Structure size is :"<<sizeof(s)<<endl;
	cout<<"Union size is :"<<sizeof(s2)<<endl;
	return 0;
}
