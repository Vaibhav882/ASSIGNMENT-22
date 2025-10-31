#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *arr, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (float*)malloc(n * sizeof(float));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%f", &arr[i]);

    max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    printf("Largest element = %.2f\n", max);
    free(arr);
    return 0;
}
