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

int i,j,k=n;

for (i=1; i<=n; i++)
{
	for (j=k; j>=1; j--)
	{
		cout<<"*";
	}
	cout<<endl;
	k--;
	
}



getch();
return 0;
}
