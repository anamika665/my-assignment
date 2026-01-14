#include<iostream>
using namespace std;

class Student{
	public:
		int roll;
		float marks;
		
	void input()
	{
		cout<<"Enter roll number and marks";
		cin>>roll>>marks;
	}
   
   void display()
   {
   	cout<<"Roll number"<<roll<<endl;
	   cout<<"Marks"<<marks<<endl;
   }
};
int main(){
	Student s1;
	s1.input();
	s1.display();
	
	return 0;
}

