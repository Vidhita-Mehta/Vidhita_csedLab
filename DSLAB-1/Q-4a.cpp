//reversing the arrray elements
#include<iostream>
using namespace std;
int main()
{
	cout<<"enter the size of array";
	int n;
		cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	int mid;
	mid = (n)/2;
	for(int i=0;i<mid;i++)
	{
		int temp;
		temp=a[i];
		a[i]=a[(2*mid)-i];
		a[(2*mid)-i]=temp;
	}
	cout<<"Reversed arrays";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	
	}
