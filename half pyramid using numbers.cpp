#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<iomanip>


int main()
{
int i,j,n;
cout<<"Enter n: ";
cin>>n;

for (i=1; i<=n; i++)
{
	for (j=1; j<=i; j++)
	{
		cout<<j<<" ";
	}
	cout<<endl;
}


getch();
return 0;
}
