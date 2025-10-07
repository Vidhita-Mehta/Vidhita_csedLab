//insertion sort
//given array ko 2 parts mei socho ek sorted and ek unsorted   to unsorted mei traversal shuru kro aand place it in orddr in the unsorted
#include<iostream>
using namespace std;
int main ()
{
	int a[5]={3,2,5,4,1};
	for(int i=1;i<5;i++)//0 ko sorted maanre
	{
		int temp;
		temp=a[i];
		int j=i;
		while((j>0)&&(a[j-1]>temp))//comparison would go from i to 0
		{
			a[j]=a[j-1];//yaha pe compare unsorted ka first soreted se
			j=j-1;
		
						
		}
			a[j]=temp;
	}
	cout<<"The sorted array is:\n";
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
}
