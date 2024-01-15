#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<iomanip>

int main()
{
int num,flag = 0;
cout<<"Enter number : ";
cin>>num;

if (-2 <= num && num <= 2)
{
	cout<<"Prime"<<endl;
}
else
{
	for (int i=2; i<num; i++)
	{
		if (num%i == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		cout<<"Non-Prime"<<endl;
	}
	else{
	cout<<"Prime"<<endl;
	}
}

getch();
return 0;
}