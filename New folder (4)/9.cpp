#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter your value";
	cin>>a;
	cout<<"Enter your value";
	cin>>b;
	float c=a/b;
	float d= (float)a/b;
	
	cout<< "Value without casting"<<c;
	cout<<"Value with casting"<<d;
	system("pause");
	return 0;
}
