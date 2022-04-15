#include <stdio.h>

int main() {
    printf("Type some text and press enter: ");
    char c = getc(stdin);
    printf("Echo: ");
    while (c != '\n') {
        printf("%c", c);
        c = getc(stdin);
    }
    printf("\n");
}