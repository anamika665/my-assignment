#include<iostream>
using namespace std;
int main()
{
	int a,b, temp;
	cout<<"Enter your value";
	cin>>a;
	cout<<"Enter your value";
	cin>>b;
	temp=a;
	a=b;
	b=temp;
	
	cout<<"The value of a"<<a<<endl;
	cout<<"The value of b"<<b<<endl;
	system("pause");
	return 0;
}
