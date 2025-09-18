#include <stdio.h>

int main(void) {
    int input_int;
    float input_float;

    printf("Enter an integer : ");
    scanf("%d", &input_int);

    printf("Enter a float : ");
    scanf("%f", &input_float);

    printf("integer : %d, float : %f\n", input_int, input_float);

    return 0;
}
