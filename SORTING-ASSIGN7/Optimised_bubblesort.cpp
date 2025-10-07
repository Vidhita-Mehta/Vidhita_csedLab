//Optimised bubble sort
#include<iostream>
using namespace std;
int main()
{
	int a[5]={5,4,3,2,1};
	for(int i=0;i<4;i++)
	{
		int x=1;
		for(int j=0;j<4-i;j++)
		{
			if(a[j]>a[j+1])
			{
			x=0;
			int temp;
			temp=a[j+1];
			a[j+1]=a[j];
			a[j]=temp;
				
			}
		
		}
			if(x==1)
			break;
	}
	cout<<"The final sorted is \n";
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
	
}
