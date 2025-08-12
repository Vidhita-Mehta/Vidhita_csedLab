//matrix multiplication
#include<iostream>
using namespace std;
int main()
{
	int a[3][3];int b[3][3];
	
	cout<<"Enter the array elements";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Enter the element of row"<<i<<" column"<<j<<endl;
			cin>>a[i][j];
		}
	}
	cout<<"Enter the array elements";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Enter the element of row"<<i<<" column"<<j<<endl;
			cin>>b[i][j];
		}
	}
	int c[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{	c[i][j]=0;
			for(int k=0;k<3;k++)
			{
		c[i][j]=c[i][j]+a[i][k]*b[k][j];}
	}}
	for(int i=0;i<3;i++)
	{	
		for(int j=0;j<3;j++)
		{
			
	cout<<c[i][j]<<" ";
	}
	cout<<endl;
	}
}
