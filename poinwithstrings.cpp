#include<iostream.h>
#include<conio.h>
 void main()
 {

	char ar[]="ashok";
	clrscr();
	char *p=ar;
	cout<<ar[0]<<"/n";
	cout<<ar[2]<<"/n";
	cout<<ar<<"/n";
	cout<<p<<"/n";
	cout<<*ar<<"/n";
	cout<<*p<<"/n";
	cout<<*p++<<"/n";
	cout<<*p<<"/n";
	//error cout<<*ar++<<"/n";
	cout<<++*p<<"/n";
	cout<<*++p<<"/n"
	;cout<<(*p)++<<"/n";
	cout<<*p<<"/n";
	cout<<p<<"/n";
	getch();



 }
