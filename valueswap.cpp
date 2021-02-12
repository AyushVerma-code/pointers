#include<iostream.h>
#include<conio.h>

void swap(int*,int*);

void main()
{
  clrscr();

  int a,b;
  cout<<"\n\nEnter the first integer ";
  cin>>a;
  cout<<"\nEnter the second integer ";
  cin>>b;

  swap(&a,&b);

  cout<<"\nSwapped values are ";
  cout<<"\na = "<<a;
  cout<<"\nb = "<<b;
  getch();
}
void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
