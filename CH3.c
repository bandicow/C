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
    // 10진수 16진수 8진수 실수 %c는 맨 끝 한글자만 출력 글자

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

    printf("\a\a\a 삐 3! \n"); //소리안남..
    printf("%s\n", "---------");

    int a, b;
    float c, d;

    a = 100;
    b = a;

    c = 111.1f;
    d = c;

    printf("%d,%d\n", a, b);
    printf("%f,%3.1f\n", c, d);

    변수를 만들고 아래에 같은 변수로 다른값을 넣으면 갱신되버림

        int a,
        b, c;
    a = 10;
    b = a;
    c = b;
    printf("%d,%d,%d\n", a, b, c);
    a = 20;
    b = a;
    printf("%d %d %d\n", a, b, c);

    bit 0, 1 / bite 8bit = 1bite = 2 ^ 8 = 2진수(0 ~11111111) = 10진수(0 ~255) = 16진수(0 ~FF)10진수 09 = 2진수 1001(8421) = 16진수 9 /// 10진수 10 = 1010 = A /// 10진수 15 = 2진수 1111 = 16진수 F = 4bit = bite X

                                                                                                                                 ##진수 변환 2진수->10진수 1001 0011->1 *
                                                                                                                                 2 ^
                                                                                                                             7(128) + 0 + 0 + 1 * 2 ^ 5(16) + 0 + 0 + 2 + 1 = 147##진수 변환 2진수->16진수->10진수 1001 0011->(1001->9(16진수), *16 ^ 0 = 144) + (0011->3(16진수), *16 ^ 0 = 3) = 147(10진수)##10진수->2진수로 변환 13 / 2 = 6(1) / 2 = 3(0) / 2 = 1(1)->1 = > 여기서 나머지만 거꾸로 하기 !1101 입니다 그렇다면 15는
           ? 7(1)3(1)1(1)1->1111 !##16진수->2진수로 변환(16->10->2) 10진수 15 = 16진수 F,
                    16 = 10 17 = 11, 19 = 13 13(X)19(d)->몫 9 나머지 1 = > 9(X) = 9(d)->몫 4 나머지 1 -- > 쭉해서 11001 나옴->10011(2진수)####진수를 쓰는 이유는 바로 메모리 쓰기가 편해서 !!!!####

                                                                                                           int a = 100,
                    b = 200;
    float c = 200;
    float result;
    float result2;

    result = a / b;
    result2 = a / c;
    printf("%d/%d=%f \n", a, b, result);
    printf("%d/%d=%f", a, c, result2);
    ##결과 0.5 나오는데 a, b가 정수라서 실수 0.5 안나오고 0이 버림##즉 정수 정수 = 정수, 값이 잘 나오려면 정수 실수, 실수 실수로 해야 값이 나옴

                                                                                                                     float a = 0.1111111111111111111111111111111111111111111111111;
    double b = 0.1111111111111111111111111111111111111111111111111;
    ->이게 값을 더 많이 받음

        printf("%30.25f \n", a);
    printf("%30.25lf \n", b);

    char a, b, c;
    a = 'A';

    printf(" %c \n", a);
    printf(" %d \n", a); // 아스키 코드로 A는 65

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
    str[6] = '\0'; //널(null) 문자인 '\0', 안붙으면 뒤에 쓰레기 문자가 붙는다 , 중간에 붙으면 실수되는거같은데
    //널 문자는 문자열 끝에 자동적으로 붙는 특수문자입니다, 널 문자로 인해 문자열의 길이도 자동적으로 +1??

    printf("str => %s\n", str);
    printf("str[7] => %s\n", str[7]);
    printf("str[50] => %s\n", str[50]);

    int *pt1 = &temp;
    이와같이 코드를 입력하면 temp의 주소값을 포인터pt1에 넣으라는 명령이 된다.

        예제 4 int a;

    printf("정수 입력 ㄱㄱ ==>");
    scanf("%d", &a);

    printf("10진수 ==> %d \n", a);
    printf("16진수 ==> %X \n", a);
    printf("8진수 ==> %o \n", a);

    예제 5

        int data,
        type;

    printf("입력 진수 골라 <1> 10 , <2> 16 , <3> 8 ==>");
    scanf("%d", &type);
    printf("정수 입력 ㄱㄱ ==>");

    if (type == 1)
        scanf("%d", &data);
    if (type == 2)
        scanf("%X", &data);
    if (type == 3)
        scanf("%o", &data);

    printf("10진수 ==> %d \n", data);
    printf("16진수 ==> %X \n", data);
    printf("8진수 ==> %o \n", data);

    예제 6 int a = 1000000;
    char str[102] = "abcdefghijklmnopqrstuvwxyz";
    printf("char str[102]의 크기 \t\t ==> %d \n", sizeof(str));
    printf("int a(1000000)의 크기 \t\t ==> %d \n", sizeof(a));
    printf("int 형의 크기 \t\t\t ==> %d \n", sizeof(int));
    printf("unsigned int 형의 크기 \t\t ==> %d \n", sizeof(unsigned int));
    printf("short 형의 크기 \t\t ==> %d \n", sizeof(short));
    printf("unsigned short 형의 크기 \t ==> %d \n", sizeof(unsigned short));
    printf("long int 형의 크기 \t\t ==> %d \n", sizeof(long int));
    printf("unsigned long int 형의 크기 \t ==> %d \n", sizeof(unsigned long int));
    printf("float 형의 크기 \t\t ==> %d \n", sizeof(float));
    printf("double 형의 크기 \t\t ==> %d \n", sizeof(double));
    printf("long double 형의 크기 \t\t ==> %d \n", sizeof(long double));
    printf("char 형의 크기 \t\t\t ==> %d \n", sizeof(char));
    printf("unsigned char 형의 크기 \t ==> %d \n", sizeof(unsigned char));

    예제 7 char text[10];
    int i;

    printf("문자열 입력 ==>");
    scanf("%s", &text);

    printf("text의 크기 %d \n", sizeof(text));

    for (i = sizeof(text) - 1; i >= 0; i--)
    {
        printf("%c i=%d", text[i], i);
    }
}
