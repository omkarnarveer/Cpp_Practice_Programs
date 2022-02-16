#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter two values=\n";
	cin>>a>>b;
	cout<<"Divison of "<<a<<" and "<<b<<" ";
	try
	{
		if(b!=0)
		{
			c=a/b;
			cout<<"answer is: "<<c<<endl;
		}
		else 
		throw(b);
	}
	
		catch(int x)
		{
		cout<<"Exception Caught:\nDivided by Zero"<<endl;
		}
return 0;
}
