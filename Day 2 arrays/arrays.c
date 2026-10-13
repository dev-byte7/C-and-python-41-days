#include <stdio.h>

int main() {
    // Q1: Find max in array
    int arr[] = {3, 5, 1, 9, 2};
    int n = 5, max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }
    printf("Max: %d\n", max);

    // Q2: 2D Matrix Addition
    int a[2][2] = {{1,2},{3,4}};
    int b[2][2] = {{5,6},{7,8}};
    int sum[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
