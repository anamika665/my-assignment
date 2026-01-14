#include<iostream>
using namespace std;
int main()
{
	int i,a[5],max;
	for(i=0;i<5;i++)
	{
		cout<<"Enter your number";
		cin>>a[i];
}
max=a[0];
for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<"Largest element in array"<<max;
	return 0;
}

