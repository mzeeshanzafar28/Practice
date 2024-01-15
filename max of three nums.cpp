//Maximum of three given numvers
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<iomanip>


int main()
{
int a,b,c;
cout<<"Enter a,b,c : ";
cin>>a>>b>>c;
if (a > b && a > c)
{
	cout<<"a is greatest"<<endl;
}
else if (b > c && b > a) 
{
	cout<<"b is greatest"<<endl;
}
else if (c > a && c > b)
{
	cout<<"c is greatest"<<endl;
}
else
{
	cout<<"All Equal"<<endl;
}


getch();
return 0;
}
