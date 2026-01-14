#include<iostream>
using namespace std;
int main()
{
    float p,r,t,s;
	cout<<"Enter the principal value:";
	cin>> p;
		cout<<"Enter the rate value:";
	cin>> r;
		cout<<"Enter the time value:";
	cin>> t;
	s=p*r*t/100;
	cout<<"Simple interest:"<<s;
	system("pause");
	return 0;
}
