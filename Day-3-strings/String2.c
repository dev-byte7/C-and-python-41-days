// reverse of a string
#include<stdio.h>
#include<string.h>
void main()
{
  char str[30],temp;
  int len;
  printf("enter any sring");
  scanf("%s",str);
  len=strlen(s1);
  for(i=0;i<len/2;i++)
    {
      temp=str[i];
      str[i]=str[len-1-i];
      str[len-1-i]=temp;
     }
  printf(" reverse of a string =%d",str);
}
