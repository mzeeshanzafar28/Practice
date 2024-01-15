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

if (n<3)
{
	cout<<"n must be greater than equal to 3"<<endl;
	return 1;
}
cout<<endl<<endl;
for (i=1; i<=n; i++)
{
int m=i;
	for (j=1; j<=n-i; j++)
	{
		cout<<"  ";
	}
	for (j=1; j<=i; j++)
	{
		cout<<m<<" ";
		m--;
		if (m == 1)
		{
			cout<<m<<" ";
			for (j=2; j<=i; j++)
			{
				cout<<j<<" ";
			}
		}
	}
	cout<<endl;
}

getch();
return 0;
}
