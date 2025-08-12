//Bubble Sort
#include<iostream>
using namespace std;
int main()
{
	int a[10];
	cout<<("Enter array elemets");
	for(int i=0;i<10;i++)
	{
		cin>>(a[i]);
	}
		for(int i=0;i<9;i++)
	{	int max=0;
		for(int j=0;j<9-i;j++)
		{
		if(a[j]>a[j+1])
		{
		max=a[j];
			a[j]=a[j+1];
			a[j+1]=max;
		}
			
		}
	}
	printf("Ascending Order");
		for(int i=0;i<10;i++)
	{
		
	cout<<(a[i]);
	}
	
}
