#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 50;
    printf("Value = %d\n", *ptr);

    free(ptr);
    // Dangling pointer now
    // printf("%d", *ptr); // Accessing this causes undefined behavior

    ptr = NULL; // Good practice to avoid dangling pointer
    printf("Pointer freed and set to NULL\n");
    return 0;
}
