#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<iomanip>


int main()
{
int a,b;
cout<<"Enter a and b: ";
cin>>a>>b;

if (a<=2)
{
	cout<<"starting must be greater than 2"<<endl;
	return 1;
}

for (int i=a; i<=b; i++)
{
	int j;
	for (j=2; j<i; j++)
	{
		if (i%j == 0)
		{
			cout<<i<<" => non-prime"<<endl;
			break;
		}
	}
	if (j == i )
		{
			cout<<i<<" => prime"<<endl;
		}
}


getch();
return 0;
}
