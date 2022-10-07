#include <stdio.h>
#include <string.h>

void main()
{
    int hap = 0;
    int i;
    int num1, num2, num3;

    printf("시작값, 끝값, 증가값 입력 : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    for (i = num1; i <= num2; i = i + num3)
    {
        hap = hap + i;
    }

    printf("%d에서 %d까지 %d씩 증가한 값의 합 : %d", num1, num2, num3, hap);

    int i;
    int dan;

    printf("몇 단 ?");
    scanf("%d", &dan);

    for (i = 1; i <= 9; i++)
    {
        printf(" %d X %d = %d \n", dan, i, dan * i);
    }

    int i, k;

    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 3; k++)
            printf("중첩 for구문 (i값 : %d, k값 = %d) \n", i, k);
    }

    # 예제 14 구구단 출력 tlqkf
    int i, k;

    for (i = 2; i <= 9; i++)
        printf("#제%d단# ", i);

    for (i = 1; i <= 9; i++)
    {
        printf("\n");
        for (k = 2; k <= 9; k++)
        {
            printf("%d X %d = %d ", k, i, i * k);
        }
    }

    # 예제 15 아스키코드표 출력
    int i;

    for (i = 0; i <= 127; i++)
    {
        if (i % 16 == 0)
        {
            printf("-------------- \n");
            printf("10진수 16진수 문자 \n");
            printf("-------------- \n");
        }
        printf("%5d  %5x %5c \n", i, i, i);
    }

    # 예제 16 입력 문자 반대로~
    char ch[100];
    int ch_cnt; // 입력한 문자 개수
    int i;

    printf("영문자 및 숫자를 입력 (100자 이하) : ");
    scanf("%s", ch);

    ch_cnt = strlen(ch);

    printf("입력한 문자열 ==> %s \n", ch);

    printf("변환된 문자열 ==> ");

    for (i = ch_cnt; i >= 0; i--)
    {
        printf("%c", ch[i]);
    }
}