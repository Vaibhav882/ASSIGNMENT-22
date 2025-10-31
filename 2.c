#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *arr, sum = 0;

    printf("Enter number of data values: ");
    scanf("%d", &n);

    arr = (float*)malloc(n * sizeof(float));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d values:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    printf("Average = %.2f\n", sum / n);
    free(arr);
    return 0;
}
