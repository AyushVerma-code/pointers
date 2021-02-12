#include<iostream.h>
#include<conio.h>

void main()
{
  int *p;
  p=NULL;
  p=new int;

  cout<<"\nEnter a number ";

  cin>>*p;
  cout<<*p<<" * "<<"5"<<" = ";

  *p=*p*5;
  cout<<*p;

  delete p;
}
