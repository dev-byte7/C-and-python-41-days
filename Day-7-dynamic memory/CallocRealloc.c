#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n=3, new_n=5;

    ptr = (int*)calloc(n, sizeof(int)); // calloc initializes to 0
    printf("After calloc (0 initialized): ");
    for(int i=0; i<n; i++) printf("%d ", ptr[i]);

    // resize to 5
    ptr = (int*)realloc(ptr, new_n * sizeof(int));
    printf("\nAfter realloc to 5, enter 2 more: ");
    for(int i=n; i<new_n; i++) scanf("%d", &ptr[i]);

    printf("Final array: ");
    for(int i=0; i<new_n; i++) printf("%d ", ptr[i]);

    free(ptr);
    return 0;
}
