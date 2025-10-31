#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int) * 5);
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Memory allocated but not freed (Memory Leak Example)\n");
    // Forgot to free(ptr)
    return 0;
}
