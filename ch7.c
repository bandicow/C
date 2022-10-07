#include <stdio.h>
#include <string.h>

void main()
{
    int a, b;

    while (1) // 무한루프
    {
        printf("더할 두 수 입력(멈추려면 ctrl+C) : ");
        scanf("%d %d", &a, &b);

        printf("%d + %d = %d \n", a, b, a + b);
    }

    do ~ while 조건식 조건문 순이라서 무조건 한번은 실행

    int a = 100;

    // while문
    while (a == 200)
    {
        printf("while문 내부에 들어 왔습니다.\n");
    }
    // do ~ while문
    do
    {
        printf("do ~ while문 내부에 들어 왔다!! \n");
    } while (a == 200);

    int menu;
    do
    {
        printf("\n 주문해라 손놈아 \n");
        printf(" 1. 아아 2. 뜨아 3. 다방커피 4. 그만시킬래.. ==> ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            printf("아이스 아메리카노 한잔 추가. \n");
            break;
        case 2:
            printf("뜨거운 아메리카노 한잔 추가. \n");
            break;
        case 3:
            printf("맛좋은 다방커피 한잔 추가. \n");
            break;
        case 4:
            printf("에게~ 이것밖에 안시켜? 준비는 해둘께. \n");
            break;
        }
    } while (menu != 4);

    int hap = 0;
    int i;

    for (i = 1; i <= 100; i++)
    {
        hap += i;
    }

    printf("1부터 100까지 합 : %d\n", hap);
    return;

    printf("프로그램 끝인데 이거 한번도 안뜰꺼임");

    # 예제 17 배수의 합계를 구하는 계산기

    int a, b, c;
    int i;
    int hap = 0;

    printf("합계의 시작값 ==> ");
    scanf("%d", &a);
    printf("합계의 끝값 ==> ");
    scanf("%d", &b);
    printf("배수 ==> ");
    scanf("%d", &c);

    i = a;
    while (i <= b)
    {
        if (i % c == 0)
            hap = hap + i;

        i++;
    }

    printf("%d부터 %d까지의 %d배수의 합계 ==> %d \n", a, b, c, hap);

    # 예제 18 입력한 문자열의 종류 구분
    char str[100];
    char ch;

    int upper, lower, num;
    int i;

    printf("문자열 입력(100자 이내) : ");
    scanf("%s", &str);

    upper = 0;
    lower = 0;
    num = 0; //한번에 써도되는거 따로 써봄
    i = 0;

    do
    {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            upper++;
        if (ch >= 'a' && ch <= 'z')
            lower++;
        if (ch >= '0' && ch <= '9')
            num++;

        i++;
    } while (ch != '\0'); // strd을 각각 한글자씩 뽑은 ch의 마지막이 \0(null)값 이여서 저게 나오면 끝나게 함

    printf("대문자 %d 개 , 소문자 %d 개, 숫자 %d 개", upper, lower, num);

    # 예제 19 입력한 숫자만큼 별 출력
    char str[100];
    char ch;

    int i, k;
    int star;

    printf("숫자를 여러 개 입력 : ");
    scanf("%s", str);

    i = 0;
    ch = str[i];
    while (ch != '\0')
    {
        star = (int)ch - 48;

        for (k = 0; k < star; k++)
            printf("*");

        printf("\n");
        i = i + 1;
        ch = str[i];
    }
}
