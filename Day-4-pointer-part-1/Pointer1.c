//printing the value of number and pointer
#include <stdio.h>
void main() {
    int num;
    int *ptr;
  printf(" enter any number");
  scanf("%d",&num);
  ptr=&num;
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", ptr);
    printf("Value via pointer: %d\n", *ptr);
    
}
