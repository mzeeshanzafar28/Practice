#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<iomanip>


int main()
{
int n;
cout<<"Enter n: ";
cin>>n;
if (n<3)
{
	cout<<"n must be greater than or equal to 3"<<endl;
	return 1;
}
cout<<endl<<endl;
int i,j,k;
for (i=1; i<=n; i++)
{
	for (j=1; j<=n-i; j++)
	{
		cout<<" ";
	}
	for (k=1; k<=i; k++)
	{
	cout<<"*";
	}
	cout<<endl;
}


getch();
return 0;
}
