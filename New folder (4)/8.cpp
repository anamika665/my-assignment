#include<iostream>
using namespace std;
int main(){

  float r,b,h,a,d,c;const float PI=3.14;
  cout<<"Enter your value of Radius";
  cin>>r;
  cout<<"Enter your value of Breadth";
  cin>>b;
  cout<<"Enter your value of Height";
  cin>>h;
  
  a=b*h;
  d=0.5*b*h;
  c= PI * r *r;
  cout<<"Area of Rectangle:"<<a<<endl;
  cout<<"Area of Traingle:"<<d<<endl;
  cout<<"Area of Circle:"<<c<<endl;
  system("pause");
  return 0;	
}

