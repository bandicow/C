#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main()
{

    // int aa[4];
    // int hap;
    // int i;

    // for (int i = 0; i <= 3; i++)
    // {
    //     printf("%d 번째 숫자 입력 : ", i + 1);
    //     scanf("%d", &aa[i]);
    // }

    // hap = aa[0] + aa[1] + aa[2] + aa[3];
    // printf("aa의 모든 합 : %d", hap);

    // # 배열의 활용 범위

    // int aa[4] = {100, 200, 300, 400};
    // int bb[] = {100, 200, 300, 400};
    // int cc[4] = {100, 200};
    // int dd[4] = {0};
    // int i;

    // for (i = 0; i <= 3; i++)
    //     printf("aa[%d]=>%d\t", i, aa[i]);
    // printf("\n");

    // for (i = 0; i <= 3; i++)
    //     printf("bb[%d]=>%d\t", i, bb[i]);
    // printf("\n");

    // for (i = 0; i <= 3; i++)
    //     printf("cc[%d]=>%d\t", i, cc[i]);
    // printf("\n");

    // for (i = 0; i <= 3; i++)
    //     printf("dd[%d]=>%d\t", i, dd[i]);
    // printf("\n");

    // printf("%d", aa[0]);

    // # 배열 aa를 짝수로 초기화 , 배열 bb에 역순으로 대입 -> 실패

    // int aa[100], bb[100];
    // int i;

    // for (i = 0; i <= 200; i++)
    // {
    //     if (i % 2 != 0)
    //         continue;
    //     aa[i] = i;
    //     printf("%d \t", aa[i]);
    // }
    // printf("\n");
    // for (i = 0; i <= 100; i++)
    // {
    //     bb[i] = aa[99 - i];
    //     printf("%d \t", bb[i]);
    // }

    // #################################################################

    // int aa[] = {10, 20, 30, 40, 50, 60}; // 배열 선언, 변수 개수 지정하지 않음
    // int count;                           // 배열 크기 저장

    // count = sizeof(aa) / sizeof(int); // 배열 크기 계산

    // printf("배열 aa[]의 사이즈는 %d 입니다. \n", sizeof(aa)); // 24
    // printf("배열 aa[]의 요소의 개수는 %d 입니다. \n", count); // 6

    // char ss[8] = "Basic_C";
    // int i;

    // ss[5] = '#';
    // // 아니 왜 #을 넣든 다른걸 넣든 P가 나오지 ㅋㅋ -> 한글자 "" 말고 '' 하니까 정상 입력됨.. 정말 C같네

    // for (i = 0; i < 8; i++)
    // {
    //     printf("%c \n", ss[i]);
    // }
    // printf("문자열 배열 ss ==> %s", ss);

    // #################################################################
    // char ss[5] = "abcd";
    // char tt[5];
    // int i;

    // for (i = 0; i < 5; i++)
    // {
    //     tt[i] = ss[3 - i];
    // }
    // tt[4] = '\0'; // 마지막에 널 문자 삽입 자동아닌가? 왜하지??

    // printf("거꾸로 출력한 결과 ==> %s \n", tt);
    // #################################################################
    // char ss[] = "XYZABC";
    // int len;

    // len = strlen(ss);

    // printf("문자열 \"%s\" 의 길이 ==> %d \n", ss, len); // 6

    // char ss[7] = "XYZ";
    // char xx[7] = "ABC";
    // char yy[3];
    // char zz[3];

    // strcat(ss, xx);
    // strcpy(yy, xx);
    // strcpy(zz, yy);

    // printf("이어진 문자열 ss의 내용 ==> %s \n", ss);                                      // 붙이기.. 차리리 이게 복사겠다
    // printf("xx 문자열 %s 복사한 yy의 내용 %s 을 복사한 zz의 내용 ==> %s \n", xx, yy, zz); //복사가 아니라 이전인가? 전에 있던 내용이 사라짐 ㅋㅋ
    // printf("두 문자열 비교함수 strcmp ss,xx 비교 ==> %d", strcmp(ss, xx));                // 0 같음 , 1 다름

    // #################################################################

    // char ss[10];
    // char tt[20];
    // int r1, r2;

    // puts("첫 번째 문자열 : ");
    // gets(ss);

    // puts("두 번째 문자열 : ");
    // gets(tt);

    // r1 = strlen(ss);
    // r2 = strlen(tt);

    // printf("첫번째 문자열 길이 ==> %d \n", r1);
    // printf("두번째 문자열 길이 ==> %d \n", r2);

    // if (strcmp(ss, tt) == 0)
    //     puts("두 문자열의 내용 같음");
    // else
    //     puts("두 문자열의 내용 다름");
    // #################################################################

    // int aa[3][4];
    // int i, j;
    // int val = 1;

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         aa[i][j] = val;
    //         val++;
    //     }
    // }

    // printf("aa[0][0]부터 aa[2][3]까지 출력 \n");

    // for (i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("%3d", aa[i][j]);
    //     }
    //     printf("\n");
    // }

    // # 예제 20 입력된 문자열을 반대 순서로 출력
    // char str[10];
    // int i;
    // int ch;

    // printf("문자열을 입력하세요 : ");
    // scanf("%s", str);

    // ch = strlen(str);

    // puts("내용을 거꾸로 출력 ==> ");
    // for (i = ch; i >= 0; i--)
    // {
    //     printf("%c", str[i]);
    // }

    // # 예제 21 대문자와 소문자 변환

    // char in[100], out[100];
    // int i, len;
    // int diff = 'a' - 'A'; // 아스키 코드 a~z (97~122) A~Z (65~90) 차이 32

    // printf("문자열을 입력하세요 :");
    // scanf("%s", in);

    // len = strlen(in);

    // for (i = 0; i < len; i++)
    // {
    //     if (('A' <= in[i]) && (in[i] <= 'Z'))
    //         out[i] = in[i] + diff;
    //     else if ((in[i] >= 'a') && ('z' >= in[i]))
    //         out[i] = in[i] - diff;
    //     else
    //         out[i] = in[i];
    // }
    // out[i] = '\0';

    // printf("변환된 문자 => %s \n", out);

    // # 예제 22 구구단의 결과를 2차원 배열에 저장
    // int i, j;
    // int gugu[9][9];

    // for (i = 0; i < 9; i++)
    //     for (j = 0; j < 9; j++)
    //         gugu[i][j] = (i + 1) * (j + 1);

    // for (i = 0; i < 9; i++)
    // {
    //     for (j = 0; j < 9; j++)
    //     {
    //         printf("%dX%d = %2d \t", i + 1, j + 1, gugu[i][j]);
    //     }
    //     printf("\n");
    // }

    // # 예제 23 문자열 내 특정 문자의 변환
    char str[100];
    char ch1, ch2;
    int i;

    printf("문장 입력 : ");
    // gets(str); // scanf로 하니까 안됨
    scanf("%s%*c", &str); // % %와c 사이의 *는 버림의 의미로 문자 하나(개행문자)를 꺼내버림으로써 /n이 남아 있는 것을 방지해 for문 동작이됨

    printf("기존 문자와 새로운 문자 : ");
    scanf("%c %c", &ch1, &ch2);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == ch1)
            str[i] = ch2;
    }
    printf("변환된 결과 ==> %s \n", str); // scanf로 하면 for문이 안먹었지만 위의 방법으로 해결
}
