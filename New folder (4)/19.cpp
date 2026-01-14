#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter your year";
	cin>>a;
	if(a%400==0) 
	{
	cout<<"Leaf year";
}
     else if(a%100==0)
	   {	   
    cout<<"Not a leap year";
	}
     else if (a%4==0)
	   {	   
    cout<<"Is a leap year";
	}
    else 
	   {	   
    cout<<"Not a leap year";
	}
    
    return 0;
    
}

