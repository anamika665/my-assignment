#include<iostream>
using namespace std;

class Employee{
	public:
		char name[100];
		int Salary,emp_id,mob;
		
	void read()
	{
		cout<<"Enter name";
		cin>>name;
		cout<<"Enter emplo. id";
		cin>>emp_id;
		cout<<"Salary";
		cin>>Salary;
		cout<<"Mobile. Number";
		cin>>mob;
	}
   
   void display()
   {
   	cout<<"Enter name:"<<name<<endl;
	cout<<"Enter emplo. id:"<<emp_id<<endl;
	cout<<"Salary:"<<Salary<<endl;
	cout<<"Mobile. Number:"<<mob<<endl;
   }
};
int main(){
	Employee e1;
	e1.read();
	e1.display();
	 
	return 0;
}

