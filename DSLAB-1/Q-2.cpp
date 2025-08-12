//Removing the duplicate elements in an array
#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int n=10;
	cout<<"ENter the array elements";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			
			if(arr[i]==arr[j])
			{	cout<<"works";
			for(int k=j;k<n-1;k++)
			{
				arr[k]=arr[k+1];
			}
			n--;
			}
	}
		}
	cout<<"Array after removing duplicates"<<endl;
	for(int i=0;i<n;i++)
	cout<<arr[i]<<endl;
}

