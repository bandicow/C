#include <stdio.h>
#include <string.h>

void main()
{
    //     int a;

    //     printf("1~4�� �� 1 : ");
    //     scanf("%d", &a);

    //     switch (a)
    //     {
    //     case 1:
    //         printf("1�� ������ ��� �������! \n");
    //         break;
    //     case 2:
    //         printf("2�� ������ ��� 1� �ƴϸ�..! \n");
    //         break;
    //     case 3:
    //         printf("3�� ������ ��� ������! \n");
    //         break;
    //     case 4:
    //         printf("4�� ������ ��� �����! \n");
    //         break;

    //     default:
    //         printf("Ʋ�� ��� ���.. ����� �����ϼ���.");
    //         break;
    //     }

    // #���� 11 �ܼ� if���� Ȱ���� ������ ����
    //     int a, b;
    //     char ch;

    //     printf("ù ��° ���� �Է��ϼ��� : ");
    //     scanf("%d", &a);
    //     printf("����� ������ �����ϼ��� : ");
    //     scanf(" %c", &ch);
    //     printf("�� ��° ���� �Է��ϼ��� : ");
    //     scanf("%d", &b);

    //     if (ch == '+') // �Ҷ� ' '�� ���ϸ� �ȵ� " " <= �̰� �ȵ�
    //         printf("%d + %d = %d", a, b, a + b);
    //     if (ch == '-')
    //         printf("%d - %d = %d", a, b, a - b);
    //     if (ch == '*')
    //         printf("%d * %d = %d", a, b, a * b);
    //     if (ch == '/')
    //         printf("%d / %d = %d", a, b, a / b);

    // #���� 12
    //     int a, b;
    //     char ch;

    //     printf("ù ��° ���� �Է��ϼ��� : ");
    //     scanf("%d", &a);
    //     printf("����� ������ �����ϼ��� : ");
    //     scanf(" %c", &ch);
    //     printf("�� ��° ���� �Է��ϼ��� : ");
    //     scanf("%d", &b);

    //     if (ch == '+')
    //         printf("%d + %d = %d", a, b, a + b);
    //     else if (ch == '-')
    //         printf("%d - %d = %d", a, b, a - b);
    //     else if (ch == '*')
    //         printf("%d * %d = %d", a, b, a * b);
    //     else if (ch == '/')
    //         printf("%d / %d = %d", a, b, a / b);
    //     else
    //         printf("�����ڸ� �߸� �Է��Ͽ����ϴ�.");

// #���� 13
    int a, b;
    char ch;

    printf("������ ���ٷ� ��� ����� �Է��ϼ��� : ");
    scanf("%d %c %d", &a, &ch, &b);

    switch (ch)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    case '/':
        printf("%d / %d = %d", a, b, a / b);
        break;
    case '%':
        printf("%d %% %d = %d", a, b, a % b);
        break;
    default:
        printf("�����ڸ� �߸� �Է��߽��ϴ�.");
        break;
    }
}
