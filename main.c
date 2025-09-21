#include <stdio.h>

int main(void) {
    char c;
    
    printf("enter a character : ");
    scanf("%c", &c);

    char next = c + 1;

    printf("The next character of %c (%d) is %c (%d)\n", c, c, next, next);

    return 0;
}
