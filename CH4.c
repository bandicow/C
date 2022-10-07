#include <stdlib.h>
#include <string.h>

void main()
{
    printf("10|7=%d \n", 10 | 7); // 1010 0111 -> 1111 -> 15
    printf("123|456=%d \n", 123 | 456);
    printf("0xFFFF|0000=%d", 0xFFFF | 0000); // 0xFFFF = 0x10000 - 1

    printf("10^7=%d \n", 10 ^ 7); // 1010 0111 -> 1101 -> 13
    printf("123^456=%d \n", 123 ^ 456);
    printf("0xFFFF^0000=%d", 0xFFFF ^ 0000);

#예제 8 입력된 두 실수의 산술 연산
    float a, b;
    float result;

    printf("첫번째 값 ==>");
    scanf("%f", &a);

    printf("두 번째 값 ==>");
    scanf("%f", &b);

    result = a + b;
    printf("%5.2f + %5.2f = %5.2f \n", a, b, result);
    result = a - b;
    printf("%5.2f - %5.2f = %5.2f \n", a, b, result);
    result = a * b;
    printf("%5.2f * %5.2f = %5.2f \n", a, b, result);
    result = a / b;
    printf("%5.2f // %5.2f = %5.2f \n", a, b, result);
    result = (int)a % (int)b;
    printf("%d %% %d = %d", (int)a, (int)b, (int)result);

#예제 9 동전 교환기
    int money, c500, c100, c50, c10;

    printf("교환할 돈 삽입==>");
    scanf("%d", &money);

    c500 = money / 500;
    // money = money - 500 * c500;
    money = money % 500;
    printf("오백 원짜리 ==> %d 개 \n", c500);
    c100 = money / 100;
    money = money % 100;
    printf("백 원짜리 ==> %d 개 \n", c100);
    c50 = money / 50;
    money = money % 50;
    printf("오십 원짜리 ==> %d 개 \n", c50);
    c10 = money / 10;
    money = money % 10;
    printf("십 원짜리 ==> %d 개 \n", c10);

    printf("바꾸지 못한 잔돈 ==> %d 원", money);

#예제 10 윤년 계산 프로그램
    int year;

    printf("연도를 입력하시오 : ");
    scanf("%d", &year);

    if ((year % 4 == 0) && (year % 100 != 0))
        printf("%d 년은 윤년데스", year);
    else
        printf("%d 년은 언년이냐", year);
}
