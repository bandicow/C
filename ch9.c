#include <stdio.h>
#include <string.h>

void main()
{
    // char stack[5];
    // int top = 0;

    // stack[top] = 'A';
    // printf("%C 자동차가 터널에 들어감\n", stack[top]);
    // top++;

    // stack[top] = 'B';
    // printf("%C 자동차가 터널에 들어감\n", stack[top]);
    // top++;

    // stack[top] = 'C';
    // printf("%C 자동차가 터널에 들어감\n", stack[top]);
    // top++;
    // stack[top] = 'D';
    // printf("%C 자동차가 터널에 들어감\n", stack[top]);
    // top++;
    // stack[top] = 'E';
    // printf("%C 자동차가 터널에 들어감\n", stack[top]);
    // top++;
    // // stack[top] = 'F'; // 5대 밖에 못들어감
    // // printf("%C 자동차가 터널에 들어감\n", stack[top]);
    // // top++;

    // printf("\n");

    // top--;
    // printf("%C 자동차가 터널을 빠져나감 \n", stack[top]);
    // stack[top] = ' ';
    // top--;
    // printf("%C 자동차가 터널을 빠져나감 \n", stack[top]);
    // stack[top] = ' ';
    // top--;
    // printf("%C 자동차가 터널을 빠져나감 \n", stack[top]);
    // stack[top] = ' ';
    // top--;

    // char stack[5];
    // int top = 0;

    // char carName = 'A';
    // int select = 0;

    // while (select != 3)
    // {
    //     printf("%C <1> 자동차 넣기 <2> 자동차 빼기 <3> 끝 : ");
    //     scanf("%d", &select);

    //     switch (select)
    //     {
    //     case 1:
    //         if (top > 5)
    //         {
    //             printf("터널이 꽉 차서 차가 못 들어감\n");
    //         }
    //         else
    //         {
    //             stack[top] = carName++;
    //             printf(" %c 자동차가 터널에 들어감\n", stack[top]);
    //             top++;
    //         }
    //         break;

    //     case 2:
    //         if (top < 1)
    //         {
    //             printf("차가 한대도 없습니다.\n");
    //         }
    //         else
    //         {
    //             top--;
    //             printf("%c 자동차가 터널을 빠져나갔습니다\n", stack[top]);
    //             stack[top] = carName;
    //         }
    //         break;

    //     case 3:
    //         printf("현재 터널에 %d대가 있음 \n", top);
    //         printf("프로그램을 종료합니다.\n");
    //         break;

    //     default:
    //         printf("잘못 입력했습니다..\n");
    //     }
    // }
    // ##################################################
    // 메모리 주소
    // int a = 100;
    // int b = 200;
    // int aa[3] = {0, 0, 0};

    // printf("변수 a의 주소는 %d 입니다 \n", &a);
    // printf("변수 b의 주소는 %d 입니다 \n", &b); // 4byte 차이
    // printf("변수 aa의 주소는 %d 입니다 \n", &aa);
    // printf("변수 aa[0]의 주소는 %d 입니다 \n", &aa[0]);
    // printf("변수 aa[1]의 주소는 %d 입니다 \n", &aa[1]);
    // printf("변수 aa[2]의 주소는 %d 입니다 \n", &aa[2]);

    // 주소확인시 +1은 4바이트를 더하는것과 같다
    // int aa[3] = {10, 20, 30};

    // printf("&aa[0]는 %d aa+0은 %d \n", &aa[0], aa + 0);
    // printf("&aa[1]는 %d aa+1은 %d \n", &aa[1], aa + 1);
    // printf("&aa[2]는 %d aa+2은 %d \n", &aa[2], aa + 2);

    // #####################################
    // 진짜진짜 중요한 포인터

    // char ch;
    // char *p;
    // ch = 'A';
    // p = &ch;

    // printf("ch가 가지고 있는 값:ch => %c \n", ch);
    // printf("&ch가 가지고 있는 값 :ch => %d \n", &ch);
    // printf("*p가 가지고 있는 값 : p ==> %d \n", p);
    // printf("*p가 실제 가리키는 곳의 값 : *p ==> %c \n", *p);

    // char ch;
    // char *p;
    // char *q;

    // ch = 'A';
    // p = &ch;

    // q = p;

    // *q = 'Z';

    // printf("ch가 가지고 있는 값 :ch => %c \n", ch);

    // char s[8] = "Basic_C";
    // char *p;

    // p = s;

    // printf("p : %s\n", p);
    // printf("&s : %s \n\n", &s); //그냥 s랑 같음

    // printf("&s[3] : %s \n", &s[3]);
    // printf("p+3 : %s \n\n", p + 3);

    // printf("s[3] : %c\n", s[3]);
    // printf("*(p+3) : %c\n", *(p + 3));

    char s[8] = "Basic_C";
    char *p;
    int i;

    p = s;

    for (i = sizeof(s) - 2; i >= 0; i--) // sizeof(s) = 8
        printf("%c", *(p + i));          //  6 5 4 3 2 1 0

    printf("\n");
}