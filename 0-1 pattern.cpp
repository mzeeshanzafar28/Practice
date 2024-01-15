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

for (i=1; i<=n; i++)
{
	for (j=1; j<=i; j++)
	{
		if ((i+j)%2 == 0)
		{
			cout<<" 1 ";
			}
		else{
			cout<<" 0 ";
		}
	}
	cout<<endl;
}

getch();
return 0;
}
