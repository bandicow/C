#include <stdio.h>
#include <string.h>

void main()
{
    //     int a;

    //     printf("1~4중 택 1 : ");
    //     scanf("%d", &a);

    //     switch (a)
    //     {
    //     case 1:
    //         printf("1을 선택한 당신 욕심쟁이! \n");
    //         break;
    //     case 2:
    //         printf("2를 선택한 당신 1등만 아니면..! \n");
    //         break;
    //     case 3:
    //         printf("3을 선택한 당신 깍쟁이! \n");
    //         break;
    //     case 4:
    //         printf("4를 선택한 당신 사랑해! \n");
    //         break;

    //     default:
    //         printf("틀을 벗어난 당신.. 빅브라더 조심하세요.");
    //         break;
    //     }

    // #예제 11 단순 if문을 활용한 간단한 계산기
    //     int a, b;
    //     char ch;

    //     printf("첫 번째 수를 입력하세요 : ");
    //     scanf("%d", &a);
    //     printf("계산할 연산자 선택하세요 : ");
    //     scanf(" %c", &ch);
    //     printf("두 번째 수를 입력하세요 : ");
    //     scanf("%d", &b);

    //     if (ch == '+') // 할때 ' '로 안하면 안됨 " " <= 이거 안됨
    //         printf("%d + %d = %d", a, b, a + b);
    //     if (ch == '-')
    //         printf("%d - %d = %d", a, b, a - b);
    //     if (ch == '*')
    //         printf("%d * %d = %d", a, b, a * b);
    //     if (ch == '/')
    //         printf("%d / %d = %d", a, b, a / b);

    // #예제 12
    //     int a, b;
    //     char ch;

    //     printf("첫 번째 수를 입력하세요 : ");
    //     scanf("%d", &a);
    //     printf("계산할 연산자 선택하세요 : ");
    //     scanf(" %c", &ch);
    //     printf("두 번째 수를 입력하세요 : ");
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
    //         printf("연산자를 잘못 입력하였습니다.");

// #예제 13
    int a, b;
    char ch;

    printf("수식을 한줄로 띄어 쓰기로 입력하세요 : ");
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
        printf("연산자를 잘못 입력했습니다.");
        break;
    }
}
