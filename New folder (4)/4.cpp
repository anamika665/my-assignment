#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter your value";
	cin>>a;
	cout<<"Enter your value";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"The value of a"<<a<<endl;
	cout<<"The value of b"<<b<<endl;
	system("pause");
	return 0;
}
