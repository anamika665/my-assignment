#include<iostream>
using namespace std;

class Rectangle{
	public:
		int length,breadth;
		
	void input()
	{
		cout<<"Enter length and breadth";
		cin>>length>>breadth;
	}
   
   void display()
   {
   	cout<<"Area of rectangle"<<length*breadth;
   }
};
int main(){
	Rectangle area;
	area.input();
	area.display();
	
	return 0;
}

