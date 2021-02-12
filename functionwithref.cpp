#include<iostream.h>
#include<conio.h>

float &min(float &a,float &b) 
{
  if(a<b)
  {
    return a;
  }

  else
    return b;
}

void main()
{
  int x,y;

  cout<<"\nEnter two values ";
  cin>>x>>y;
  float *m;
  *m=min(x,y);

  cout<<"\nThe minimum value is "<<*m;

}
