//missing number in a sorted array
#include<iostream>
using namespace std;
int main()
{
	int a[10];
	cout<<"Enter the array elements";
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element to be found";
	int n;
	cin>>n;
	for(int i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			cout<<"Element found at position = "<<i+1;
			break;
		}
	}
}
