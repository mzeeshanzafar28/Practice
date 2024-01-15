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
	for (j=1; j<=n-i+1; j++)
	{
		cout<<" ";
		if (j == n-i+1)
		{
			cout<<"*";
			for (int k=2; k<=i*2; k++)
			{
				cout<<" ";
			}
			cout<<"*";
				}
		}
		cout<<endl;
		
}
		
		
	getch();
	return 0;
}