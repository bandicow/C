#include <stdio.h>
#include <string.h>

//여기는 20번째 예제 //

// void main()
// {
//     char ss[100];
//     char tt[100];
//     int count, i;

//     printf("문자열을 입력하세요 : ");
//     scanf("%s", ss);

//     count = strlen(ss);

//     for (i = 0; i < count; i++)
//     {
//         tt[i] = ss[count - (i + 1)];
//     }
//     tt[count] = '\0';

//     printf("내용을 거꾸로 출력 ==> %s \n", tt);
// }

// void main()
// {
//     char ch;
//     char *p;
//     char *q;

//     ch = 'A';
//     p = &ch;

//     q = p;

//     *q = 'Z';

//     printf("ch가 가지고 있는 값: ch ==> %c \n\n", ch);
// }

// ---------------------------

// void func1()
// {
//     printf("void 형 함수는 돌려줄 게 없음.\n");
// }

// int func2()
// {
//     return 100;
// }

// void main()
// {
//     int a;

//     func1();

//     a = func2();
//     printf("int 형 함수에서 돌려준 값 ==> %d\n", a);
// }

// --------------------------------------

// void func1(int a)
// {
//     a = a + 1;
//     printf("전달 a => %d \n", a);
// }

// void main()
// {
//     int a = 10;

//     func1(a);
//     printf("실행 후 a => %d \n", a);
// }
