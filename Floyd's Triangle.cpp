#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<iomanip>


int main()
{
int i,j,n,count=1;
cout<<"Enter n: ";
cin>>n;

for (i=1; i<=n; i++)
{
	for (j=1; j<=i; j++)
	{
		cout<<count<<" ";
		count++;
	}
	cout<<endl;
}


getch();
return 0;
}
