#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<iomanip>


int main()
{
int i,j,k,n;
cout<<"Enter n: ";
cin>>n;
cout<<endl<<endl;
for (i=1; i<=n; i++)
{
	for (j=1; j<=n; j++)
	{
		if (j <= i)
		{
			cout<<"*";
		}
		else{
			cout<<" ";
		}
	}
	for (k=n; k>=1; k--)
	{
		if (k <= i)
		{
			cout<<"*";
		}
		else{
			cout<<" ";
		}
	}
	
	
		cout<<endl;
}
// PART 2
for (i=n; i>=1; i--)
{
	for (j=1; j<=n; j++)
	{
		if (j <= i)
		{
			cout<<"*";
		}
		else{
			cout<<" ";
		}
	}
	for (k=n; k>=1; k--)
	{
		if (k <= i)
		{
			cout<<"*";
		}
		else{
			cout<<" ";
		}
	}
	
		cout<<endl;
}


getch();
return 0;
}
