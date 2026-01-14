#include<iostream>
using namespace std;
int main()
{
	int i,j,a[5][5],b[5][5],add[5][5];
	
	for(i=0;i<5;i++)
	{for(j=0;j<5;j++)
	{
		cout<<"Enter your number";
		cin>>a[i][j];
	}
}
    for(i=0;i<5;i++){
     for(j=0;j<5;j++)
	{
      cout<<"Enter your number";
		cin>>b[i][j];		
}
}
for(i=0;i<5;i++){
     for(j=0;j<5;j++)
	{
   add[i][j]=a[i][j]+b[i][j];
}
}

   cout<<"Addition"<<add[i][j];
return 0;
}

