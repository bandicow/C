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

����� 1��° ���� //

int main()
{
    int a, b, c, d;
    int result;

    printf("ù ��° ����� ���� �Է��ϼ��� ==>");
    scanf("%d", &a);
    printf("ù ��° ����� ���� �Է��ϼ��� ==>");
    scanf("%d", &b);
    printf("ù ��° ����� ���� �Է��ϼ��� ==>");
    scanf("%d", &c);
    printf("ù ��° ����� ���� �Է��ϼ��� ==>");
    scanf("%d", &d);

    result = a + b + c + d;

    printf("%d + %d + %d + %d = %d ", a, b, c, d, result);
    return 0;
}

����� 2��° ���� //

void main()
{
    int a, b, c;
    int result;

    printf("ù ��° ����� ���� �Է��ϼ��� ==>");
    scanf("%d", &a);
    printf("<1>���� <2>���� <3>���� <4>������ ==>");
    scanf("%d", &b);
    printf("�� ��° ����� ���� �Է��ϼ��� ==>");
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

����� 3��° ���� //

int main()
{
    int a, b;
    char k;
    int result;

    printf("ù ��° ����� �� ==>");
    scanf("%d", &a);
    printf("+ - * / ==>");
    scanf(" %c", &k);
    printf("�� ��° ����� �� ==>");
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
        printf("0���� ������ �ȵ˴ϴ�.");
return 0;
}