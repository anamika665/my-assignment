#include<iostream>
using namespace std;

class Arithmetic{
	public:
		int a,b;
		
	void input()
	{
		cout<<"Enter two number";
		cin>>a>>b;
	}
   
   void display()
   {
   	cout<<"ADDITION"<<a+b<<endl;
   	cout<<"SUBTRACTION"<<a-b<<endl;
   	cout<<"MULTIPLICATION"<<a*b<<endl;
   	cout<<"DIVISON"<<a%b<<endl;
   }
};
int main(){
	Arithmetic op1;
	op1.input();
	op1.display();
	 
	return 0;
}

