#include <stdio.h>
#include <stdlib.h>

int main() {
    int bytes;
    void *ptr;

    printf("Enter number of bytes to allocate: ");
    scanf("%d", &bytes);

    ptr = malloc(bytes);
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Memory of %d bytes allocated successfully.\n", bytes);
    free(ptr);
    return 0;
}
