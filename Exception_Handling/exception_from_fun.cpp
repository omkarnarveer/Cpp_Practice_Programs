#include<iostream>
using namespace std;
void test(int x)
{
	cout<<"Inside Function: "<<x<<endl;
	if(x)
	{
		throw x;
	}
}	
int main()
{
cout<<"START"<<endl;
try
{
	test(1);
	test(0);
	test(2);
}
catch(int x)
{
	cout<<"Caught an int exception: "<<x<<endl;
}
return 0;
}
