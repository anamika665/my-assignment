#include<iostream>
using namespace std;
struct Student{
	int roll;
	char name[50];
	float marks;
};
int main()
{
Student s;
 cout<<"Name";
 cin>> s.name;
 cout<<"Roll Number";
 cin>>s.roll;
 cout<<"Marks";
 cin>>s.marks;
 
 cout<<"STUDENT DETAILS:"<<endl;
 cout<<"NAME"<<s.name<<endl;
 cout<<"Roll Number"<<s.roll<<endl;
 cout<<"Marks"<<s.marks<<endl;
 
 return 0;
}
 
 
 
