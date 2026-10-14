#include<stdio.h>
void main()
{
  int a,b,*p1,*p2;
  p1=&a;
  p2=&b;
  printf(" enter the values");
  scanf("%d%d",&a,&b);
  printf(" sum of two numbers=%d",*p1+*p2);
    
}
