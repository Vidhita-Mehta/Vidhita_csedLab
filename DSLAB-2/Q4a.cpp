//(a) Write a program to concatenate one string to another string. 
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	string name2;
	cout<<"Enter the first string :-"<<endl;
	getline(cin,name);
	cout<<"Second string";
	getline(cin,name2);
name=name+" "+name2;
cout<<name;
	
}
