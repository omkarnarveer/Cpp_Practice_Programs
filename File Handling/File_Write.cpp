#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	char ch='X';
	int i=77;
	double d=6.02;
	string str1="Computer";
	string str2=" Engineering";
	ofstream outfile("fdata.txt");
	outfile<<ch;
	outfile<<i;
	outfile<<d;
	outfile<<str1;
	outfile<<str2;
	cout<<"File Written"<<endl;
	return 0;
}
