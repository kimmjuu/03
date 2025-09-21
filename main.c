#include <stdio.h>

int main(void) {
    int a, b;
    float result;

    printf("Enter numerator: "); //한글 작성 시 커맨더 창에서 글꼴 깨짐이 발생하여 영문으로 작성합니다
    scanf("%d", &a);

    printf("Enter denominator: ");
    scanf("%d", &b);

    result = (float)a / b;

    printf("The result of division is %f\n", result);

    return 0;
}
