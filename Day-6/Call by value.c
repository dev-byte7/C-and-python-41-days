#include <stdio.h>
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function: a=%d b=%d\n", a, b);
}
int main() {
    int x=10, y=20;
    printf("Before: x=%d y=%d\n", x, y);
    swapByValue(x, y); // passes copy only
    printf("After call by value: x=%d y=%d (NO CHANGE)\n", x, y);
    return 0;
}
