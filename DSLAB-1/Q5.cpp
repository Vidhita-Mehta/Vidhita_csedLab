// sum of every row and every column
#include<iostream>
using namespace std;
int main()
{
	int a[3][3];
		cout<<"Enter the array elements";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Enter the element of row"<<i<<" column"<<j<<endl;
			cin>>a[i][j];
		}
	}
	int b[1][3];int rows=0;
		
	for(int i=0;i<3;i++)
	{	rows=0;
		for(int j=0;j<3;j++)
		{
		
	rows=rows+a[i][j];
			}
	b[0][i]=rows;	
	}
	for(int j=0;j<3;j++)
	cout<<b[0][j]<<" ";
}
