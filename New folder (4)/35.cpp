#include<iostream>
using namespace std;
int main()
{
	int a,b,i,j;
	int A[5][5],B[5][5],SUM[5][5];
	cout<<"Enter numbers of rows and colounm";
	cin>>a>>b;
	
	cout<<"Enter number of 1st element";
	for(i=0;i<a;i++)
	{
	for (j=0;j<b;j++)
	{
	cin>>A[i][j];
}
}
cout<<"Enter number of 2nd element";
	for(i=0;i<a;i++)
	{
	for (j=0;j<b;j++)
	{
	cin>>B[i][j];
}
}
	for(i=0;i<a;i++)
	{
	for (j=0;j<b;j++)
	{
SUM[i][j]=A[i][j]+B[i][j];
}
}
cout<<"SUM OF TWO MATRICES";
	for(i=0;i<a;i++)
	{
	for (j=0;j<b;j++)
	{
	cout<<SUM[i][j]<<"";
}
cout<<endl;
}
return 0;
}
