//swap two numbers using functions 
#include <stdio.h>
int swap(int *a, int *b)
{
   *a=*a+*b;
    *b=*a-*b;
    *b = *a-*b;
}
void main()
{
    int x , y ;
    printf("Before: x=%d y=%d\n", x, y);
  scanf("%d %d",&x,&y);
    swap(&x, &y);
    printf("After: x=%d y=%d\n", x, y);
    
}
