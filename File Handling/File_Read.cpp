#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	int i;
	double d;
	string str1;
	string str2;
	ifstream infile("fdata.txt");
	infile>>ch;
	infile>>i;
	infile>>d;
	infile>>str1;
	infile>>str2;
	cout<<ch<<endl;
	cout<<i<<endl;
	cout<<d<<endl;
	cout<<str1<<endl;
	cout<<str2<<endl;
	return 0;
}
