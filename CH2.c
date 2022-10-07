#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int a, b;
    int result;

    scanf("%d", &a);
    scanf("%d", &b);

    result = a + b;

    printf("%d + %d = %d \n", a, result);
}

여기는 1번째 예제 //

int main()
{
    int a, b, c, d;
    int result;

    printf("첫 번째 계산할 값을 입력하세요 ==>");
    scanf("%d", &a);
    printf("첫 번째 계산할 값을 입력하세요 ==>");
    scanf("%d", &b);
    printf("첫 번째 계산할 값을 입력하세요 ==>");
    scanf("%d", &c);
    printf("첫 번째 계산할 값을 입력하세요 ==>");
    scanf("%d", &d);

    result = a + b + c + d;

    printf("%d + %d + %d + %d = %d ", a, b, c, d, result);
    return 0;
}

여기는 2번째 예제 //

void main()
{
    int a, b, c;
    int result;

    printf("첫 번째 계산할 값을 입력하세요 ==>");
    scanf("%d", &a);
    printf("<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈 ==>");
    scanf("%d", &b);
    printf("두 번째 계산할 값을 입력하세요 ==>");
    scanf("%d", &c);

    if (b == 1)
    {
        result = a + c;
        printf("%d + %d = %d", a, c, result);
    }
    else if (b == 2)
    {
        result = a - c;
        printf("%d - %d = %d", a, c, result);
    }
    else if (b == 3)
    {
        result = a * c;
        printf("%d * %d = %d", a, c, result);
    }
    else if (b == 4)
    {
        result = a / c;
        printf("%d / %d = %d", a, c, result);
    }
}

여기는 3번째 예제 //

int main()
{
    int a, b;
    char k;
    int result;

    printf("첫 번째 계산할 값 ==>");
    scanf("%d", &a);
    printf("+ - * / ==>");
    scanf(" %c", &k);
    printf("두 번째 계산할 값 ==>");
    scanf("%d", &b);

    if (k == '+')
    {
        result = a + b;
        printf("%d + %d = %d \n", a, b, result);
    }
    else if (k == '-')
    {
        result = a - b;
        printf("%d - %d = %d \n", a, b, result);
    }
    else if (k == '*')
    {
        result = a * b;
        printf("%d * %d = %d \n", a, b, result);
    }
    else if (k == '/')
    {
        result = a / b;
        printf("%d / %d = %d \n", a, b, result);
    }
    else if (b == 0)
        printf("0으로 나누면 안됩니다.");
return 0;
}