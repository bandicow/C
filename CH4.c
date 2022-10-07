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

#���� 8 �Էµ� �� �Ǽ��� ��� ����
    float a, b;
    float result;

    printf("ù��° �� ==>");
    scanf("%f", &a);

    printf("�� ��° �� ==>");
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

#���� 9 ���� ��ȯ��
    int money, c500, c100, c50, c10;

    printf("��ȯ�� �� ����==>");
    scanf("%d", &money);

    c500 = money / 500;
    // money = money - 500 * c500;
    money = money % 500;
    printf("���� ��¥�� ==> %d �� \n", c500);
    c100 = money / 100;
    money = money % 100;
    printf("�� ��¥�� ==> %d �� \n", c100);
    c50 = money / 50;
    money = money % 50;
    printf("���� ��¥�� ==> %d �� \n", c50);
    c10 = money / 10;
    money = money % 10;
    printf("�� ��¥�� ==> %d �� \n", c10);

    printf("�ٲ��� ���� �ܵ� ==> %d ��", money);

#���� 10 ���� ��� ���α׷�
    int year;

    printf("������ �Է��Ͻÿ� : ");
    scanf("%d", &year);

    if ((year % 4 == 0) && (year % 100 != 0))
        printf("%d ���� ���ⵥ��", year);
    else
        printf("%d ���� ����̳�", year);
}
