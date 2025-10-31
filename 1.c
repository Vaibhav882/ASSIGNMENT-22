#include <stdio.h>
#include <stdlib.h>

char* inputString() {
    char ch;
    int size = 1;
    char *str = (char*)malloc(size * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    int i = 0;
    printf("Enter string: ");
    while ((ch = getchar()) != '\n' && ch != EOF) {
        str[i++] = ch;
        size++;
        str = (char*)realloc(str, size * sizeof(char));
        if (str == NULL) {
            printf("Memory reallocation failed\n");
            exit(1);
        }
    }
    str[i] = '\0';
    return str;
}

int main() {
    char *str = inputString();
    printf("You entered: %s\n", str);
    free(str);
    return 0;
}
