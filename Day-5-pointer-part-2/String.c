#include <stdio.h>
void main()
{
    char str[] = "BVRITW";
    char *ptr = str;

    printf("String using pointer: ");
    while(*ptr!= '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\nLength using pointer method is done in loop\n");
    
}
