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

if (n<3)
{
	cout<<"n must be greater than or equal to 3"<<endl;
	return 1;
}
k=n;
for (i=1; i<=n; i++)
{
	for (j=1; j<=k; j++)
	{
		cout<<j<<" ";
	}
	k--;
	cout<<endl;
}


getch();
return 0;
}
