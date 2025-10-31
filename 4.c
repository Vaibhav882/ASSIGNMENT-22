#include <stdio.h>
#include <stdlib.h>

int main() {
    char *text;
    int size = 100;

    text = (char*)malloc(size * sizeof(char));
    if (text == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter some text: ");
    fgets(text, size, stdin);

    printf("You entered: %s\n", text);
    free(text);
    return 0;
}
