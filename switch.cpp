#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<iomanip>


int main()
{
char ch;
cout<<"Enter your choice: ";
cin>>ch;

switch (ch)
{
	case 'a':
		cout<<"a is pressed"<<endl;
		break;
	case 'v':
		cout<<"v is pressed"<<endl;
		break;
	case 'f':
		cout<<"f is pressed"<<endl;
		break;
	default:
		cout<<"this wasn't a part of the game"<<endl;
}

getch();
return 0;
}
