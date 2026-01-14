#include<iostream>
using namespace std;
int main()
{
	int a,*p;
	cout<<"enter your number:";
	cin>>a;
	p=&a;
	cout<<"Address of"<<a<<":"<<&a<<endl;
	return 0;
}
