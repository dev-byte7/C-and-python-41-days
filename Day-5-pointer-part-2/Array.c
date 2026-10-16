#include <stdio.h>
void main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // arr itself is base address

    printf("Array elements using pointer:\n");
    for(int i=0; i<5; i++) {
        printf("arr[%d] = %d, address = %p\n", i, *(ptr + i), (ptr + i));
    }
    
}
