#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *ptr;
    printf("Enter n: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int)); // allocates garbage values
    if(ptr == NULL) {
        printf("Memory not allocated\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) scanf("%d", ptr+i);

    printf("Elements are: ");
    for(int i=0; i<n; i++) printf("%d ", *(ptr+i));

    free(ptr); // must free
    printf("\nMemory freed\n");
    return 0;
}
