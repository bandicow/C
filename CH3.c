#include <stdio.h>
#include <string.h>

int main()
{
    printf("100+100 \n");
    printf("%d\n", 100 + 100);

    printf("%d\n", 100, 200);
    printf("%d %d\n", 100);

    printf("%d %f %f\n", 100, 200, 3.0);

    printf("%d %x %o %f %c %s \n", 10, 10, 10, 10, '0112', "10");
    // 10���� 16���� 8���� �Ǽ� %c�� �� �� �ѱ��ڸ� ��� ����

    printf("%s\n", "---------");

    printf("%d\n", 123);
    printf("%d5\n", 123);
    printf("%05d\n", 123);
    printf("%s\n", "---------");
    printf("%f\n", 123.45);
    printf("%7.1f\n", 123.45);
    printf("%7.3f\n", 123.45);
    printf("%s\n", "---------");
    printf("%s\n", "Basic-C");
    printf("%10s\n", "Basic-C");

    printf("%s\n", "---------");

    printf("\a\a\a �� 3! \n"); //�Ҹ��ȳ�..
    printf("%s\n", "---------");

    int a, b;
    float c, d;

    a = 100;
    b = a;

    c = 111.1f;
    d = c;

    printf("%d,%d\n", a, b);
    printf("%f,%3.1f\n", c, d);

    ������ ����� �Ʒ��� ���� ������ �ٸ����� ������ ���ŵǹ���

        int a,
        b, c;
    a = 10;
    b = a;
    c = b;
    printf("%d,%d,%d\n", a, b, c);
    a = 20;
    b = a;
    printf("%d %d %d\n", a, b, c);

    bit 0, 1 / bite 8bit = 1bite = 2 ^ 8 = 2����(0 ~11111111) = 10����(0 ~255) = 16����(0 ~FF)10���� 09 = 2���� 1001(8421) = 16���� 9 /// 10���� 10 = 1010 = A /// 10���� 15 = 2���� 1111 = 16���� F = 4bit = bite X

                                                                                                                                 ##���� ��ȯ 2����->10���� 1001 0011->1 *
                                                                                                                                 2 ^
                                                                                                                             7(128) + 0 + 0 + 1 * 2 ^ 5(16) + 0 + 0 + 2 + 1 = 147##���� ��ȯ 2����->16����->10���� 1001 0011->(1001->9(16����), *16 ^ 0 = 144) + (0011->3(16����), *16 ^ 0 = 3) = 147(10����)##10����->2������ ��ȯ 13 / 2 = 6(1) / 2 = 3(0) / 2 = 1(1)->1 = > ���⼭ �������� �Ųٷ� �ϱ� !1101 �Դϴ� �׷��ٸ� 15��
           ? 7(1)3(1)1(1)1->1111 !##16����->2������ ��ȯ(16->10->2) 10���� 15 = 16���� F,
                    16 = 10 17 = 11, 19 = 13 13(X)19(d)->�� 9 ������ 1 = > 9(X) = 9(d)->�� 4 ������ 1 -- > ���ؼ� 11001 ����->10011(2����)####������ ���� ������ �ٷ� �޸� ���Ⱑ ���ؼ� !!!!####

                                                                                                           int a = 100,
                    b = 200;
    float c = 200;
    float result;
    float result2;

    result = a / b;
    result2 = a / c;
    printf("%d/%d=%f \n", a, b, result);
    printf("%d/%d=%f", a, c, result2);
    ##��� 0.5 �����µ� a, b�� ������ �Ǽ� 0.5 �ȳ����� 0�� ����##�� ���� ���� = ����, ���� �� �������� ���� �Ǽ�, �Ǽ� �Ǽ��� �ؾ� ���� ����

                                                                                                                     float a = 0.1111111111111111111111111111111111111111111111111;
    double b = 0.1111111111111111111111111111111111111111111111111;
    ->�̰� ���� �� ���� ����

        printf("%30.25f \n", a);
    printf("%30.25lf \n", b);

    char a, b, c;
    a = 'A';

    printf(" %c \n", a);
    printf(" %d \n", a); // �ƽ�Ű �ڵ�� A�� 65

    b = 'a';
    c = b + 5;

    printf(" %c \n", b);
    printf(" %d \n", b); // A~Z 65~90 a~z 97~122
    printf(" %c \n", c);

    c = 'z';
    printf(" %d \n", c); //

    char str1[10];
    char str2[10];
    char str3[10] = "COPYRIGHT";

    strcpy(str1, "ALONE");
    strcpy(str2, str3);

    printf("%s,%s,%s\n", str1, str2, str3);

    char str[10] = "0123456789";

    printf("str => %s\n", str);

    str[0] = 'T';
    str[1] = 'I';
    str[2] = 'K';
    str[3] = 'T';
    str[4] = 'O';
    str[5] = 'K';
    str[6] = '\0'; //��(null) ������ '\0', �Ⱥ����� �ڿ� ������ ���ڰ� �ٴ´� , �߰��� ������ �Ǽ��Ǵ°Ű�����
    //�� ���ڴ� ���ڿ� ���� �ڵ������� �ٴ� Ư�������Դϴ�, �� ���ڷ� ���� ���ڿ��� ���̵� �ڵ������� +1??

    printf("str => %s\n", str);
    printf("str[7] => %s\n", str[7]);
    printf("str[50] => %s\n", str[50]);

    int *pt1 = &temp;
    �̿Ͱ��� �ڵ带 �Է��ϸ� temp�� �ּҰ��� ������pt1�� ������� ����� �ȴ�.

        ���� 4 int a;

    printf("���� �Է� ���� ==>");
    scanf("%d", &a);

    printf("10���� ==> %d \n", a);
    printf("16���� ==> %X \n", a);
    printf("8���� ==> %o \n", a);

    ���� 5

        int data,
        type;

    printf("�Է� ���� ��� <1> 10 , <2> 16 , <3> 8 ==>");
    scanf("%d", &type);
    printf("���� �Է� ���� ==>");

    if (type == 1)
        scanf("%d", &data);
    if (type == 2)
        scanf("%X", &data);
    if (type == 3)
        scanf("%o", &data);

    printf("10���� ==> %d \n", data);
    printf("16���� ==> %X \n", data);
    printf("8���� ==> %o \n", data);

    ���� 6 int a = 1000000;
    char str[102] = "abcdefghijklmnopqrstuvwxyz";
    printf("char str[102]�� ũ�� \t\t ==> %d \n", sizeof(str));
    printf("int a(1000000)�� ũ�� \t\t ==> %d \n", sizeof(a));
    printf("int ���� ũ�� \t\t\t ==> %d \n", sizeof(int));
    printf("unsigned int ���� ũ�� \t\t ==> %d \n", sizeof(unsigned int));
    printf("short ���� ũ�� \t\t ==> %d \n", sizeof(short));
    printf("unsigned short ���� ũ�� \t ==> %d \n", sizeof(unsigned short));
    printf("long int ���� ũ�� \t\t ==> %d \n", sizeof(long int));
    printf("unsigned long int ���� ũ�� \t ==> %d \n", sizeof(unsigned long int));
    printf("float ���� ũ�� \t\t ==> %d \n", sizeof(float));
    printf("double ���� ũ�� \t\t ==> %d \n", sizeof(double));
    printf("long double ���� ũ�� \t\t ==> %d \n", sizeof(long double));
    printf("char ���� ũ�� \t\t\t ==> %d \n", sizeof(char));
    printf("unsigned char ���� ũ�� \t ==> %d \n", sizeof(unsigned char));

    ���� 7 char text[10];
    int i;

    printf("���ڿ� �Է� ==>");
    scanf("%s", &text);

    printf("text�� ũ�� %d \n", sizeof(text));

    for (i = sizeof(text) - 1; i >= 0; i--)
    {
        printf("%c i=%d", text[i], i);
    }
}
