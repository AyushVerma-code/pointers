#include<iostream.h>
#include<conio.h>

void swap(int *X,int *Y)
{
  int *T;
  T=X;
  X=Y;
  Y=T;

  cout<<*X<<endl<<*Y;
}

void main()
{
  int a,b;
  cout<<"\nEnter two values ";
  cin>>a>>b;

  cout<<"\nThe swapped values are ";
  swap(&a,&b);

}



