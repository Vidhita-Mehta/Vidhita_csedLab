//Transpose of matrix
#include<iostream>
using namespace std;
int main()
{
	int a[3][3];
	int b[3][3];
	cout<<"Enter the array elements";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Enter the element of row"<<i<<" column"<<j<<endl;
			cin>>a[i][j];
		}
	}
	//transpose=rows with columns that is 01 gets interchanged with 10
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		b[j][i]=a[i][j];
		}
	}
	cout<<"original:"<<endl;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Transpose"<<endl;

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}
