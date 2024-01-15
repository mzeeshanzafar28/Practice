#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<iomanip>


int main()
{
int i,j;
cout<<"Enter Numbers: ";
cin>>i>>j;
char k;
cout<<"Enter Operations: ";
cin>>k;
switch (k)
{
	case '+':
		cout<<i+j;
		break;
	case '-':
		cout<<i-j;
		break;
	case '*':
		cout<<i*j;
		break;
	case '/':
		cout<<i/j;
		break;
	default:
		cout<<"Invalid Operation, + , - , *, / are allowed"<<endl;
}


getch();
return 0;
}
