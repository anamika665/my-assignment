#include<iostream>
using namespace std;
int main()
{
   int a,b,c,d,z;
   cout<<"ENTER NUMBERS";
   cin>>a>>b>>c>>d;
   
   while(z=(a+b)*(d-c)+(a+d) )
   {
   if(z=0)
   break;
   
   cout<<"THE ALGEBRIC EXPRESSION:"<<z<<endl;
   return 0;
}
}
