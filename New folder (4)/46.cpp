#include<iostream>
using namespace std;

class Number{
	public:
		int a,b;
		
	void input()
	{
		cout<<"Enter two number";
		cin>>a>>b;
	}
   
   void display()
   {
   	if(a>b)
   	cout<<"First number is greater";
   	else if(b>a)
   	cout<<"Second number is greater";
   	else
   	cout<<"Both are equal";
   }
};
int main(){
	Number n;
	n.input();
	n.display();
	 
	return 0;
}

