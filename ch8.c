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
    //     printf("%d ��° ���� �Է� : ", i + 1);
    //     scanf("%d", &aa[i]);
    // }

    // hap = aa[0] + aa[1] + aa[2] + aa[3];
    // printf("aa�� ��� �� : %d", hap);

    // # �迭�� Ȱ�� ����

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

    // # �迭 aa�� ¦���� �ʱ�ȭ , �迭 bb�� �������� ���� -> ����

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

    // int aa[] = {10, 20, 30, 40, 50, 60}; // �迭 ����, ���� ���� �������� ����
    // int count;                           // �迭 ũ�� ����

    // count = sizeof(aa) / sizeof(int); // �迭 ũ�� ���

    // printf("�迭 aa[]�� ������� %d �Դϴ�. \n", sizeof(aa)); // 24
    // printf("�迭 aa[]�� ����� ������ %d �Դϴ�. \n", count); // 6

    // char ss[8] = "Basic_C";
    // int i;

    // ss[5] = '#';
    // // �ƴ� �� #�� �ֵ� �ٸ��� �ֵ� P�� ������ ���� -> �ѱ��� "" ���� '' �ϴϱ� ���� �Էµ�.. ���� C����

    // for (i = 0; i < 8; i++)
    // {
    //     printf("%c \n", ss[i]);
    // }
    // printf("���ڿ� �迭 ss ==> %s", ss);

    // #################################################################
    // char ss[5] = "abcd";
    // char tt[5];
    // int i;

    // for (i = 0; i < 5; i++)
    // {
    //     tt[i] = ss[3 - i];
    // }
    // tt[4] = '\0'; // �������� �� ���� ���� �ڵ��ƴѰ�? ������??

    // printf("�Ųٷ� ����� ��� ==> %s \n", tt);
    // #################################################################
    // char ss[] = "XYZABC";
    // int len;

    // len = strlen(ss);

    // printf("���ڿ� \"%s\" �� ���� ==> %d \n", ss, len); // 6

    // char ss[7] = "XYZ";
    // char xx[7] = "ABC";
    // char yy[3];
    // char zz[3];

    // strcat(ss, xx);
    // strcpy(yy, xx);
    // strcpy(zz, yy);

    // printf("�̾��� ���ڿ� ss�� ���� ==> %s \n", ss);                                      // ���̱�.. ������ �̰� ����ڴ�
    // printf("xx ���ڿ� %s ������ yy�� ���� %s �� ������ zz�� ���� ==> %s \n", xx, yy, zz); //���簡 �ƴ϶� �����ΰ�? ���� �ִ� ������ ����� ����
    // printf("�� ���ڿ� ���Լ� strcmp ss,xx �� ==> %d", strcmp(ss, xx));                // 0 ���� , 1 �ٸ�

    // #################################################################

    // char ss[10];
    // char tt[20];
    // int r1, r2;

    // puts("ù ��° ���ڿ� : ");
    // gets(ss);

    // puts("�� ��° ���ڿ� : ");
    // gets(tt);

    // r1 = strlen(ss);
    // r2 = strlen(tt);

    // printf("ù��° ���ڿ� ���� ==> %d \n", r1);
    // printf("�ι�° ���ڿ� ���� ==> %d \n", r2);

    // if (strcmp(ss, tt) == 0)
    //     puts("�� ���ڿ��� ���� ����");
    // else
    //     puts("�� ���ڿ��� ���� �ٸ�");
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

    // printf("aa[0][0]���� aa[2][3]���� ��� \n");

    // for (i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("%3d", aa[i][j]);
    //     }
    //     printf("\n");
    // }

    // # ���� 20 �Էµ� ���ڿ��� �ݴ� ������ ���
    // char str[10];
    // int i;
    // int ch;

    // printf("���ڿ��� �Է��ϼ��� : ");
    // scanf("%s", str);

    // ch = strlen(str);

    // puts("������ �Ųٷ� ��� ==> ");
    // for (i = ch; i >= 0; i--)
    // {
    //     printf("%c", str[i]);
    // }

    // # ���� 21 �빮�ڿ� �ҹ��� ��ȯ

    // char in[100], out[100];
    // int i, len;
    // int diff = 'a' - 'A'; // �ƽ�Ű �ڵ� a~z (97~122) A~Z (65~90) ���� 32

    // printf("���ڿ��� �Է��ϼ��� :");
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

    // printf("��ȯ�� ���� => %s \n", out);

    // # ���� 22 �������� ����� 2���� �迭�� ����
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

    // # ���� 23 ���ڿ� �� Ư�� ������ ��ȯ
    char str[100];
    char ch1, ch2;
    int i;

    printf("���� �Է� : ");
    // gets(str); // scanf�� �ϴϱ� �ȵ�
    scanf("%s%*c", &str); // % %��c ������ *�� ������ �ǹ̷� ���� �ϳ�(���๮��)�� �����������ν� /n�� ���� �ִ� ���� ������ for�� �����̵�

    printf("���� ���ڿ� ���ο� ���� : ");
    scanf("%c %c", &ch1, &ch2);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == ch1)
            str[i] = ch2;
    }
    printf("��ȯ�� ��� ==> %s \n", str); // scanf�� �ϸ� for���� �ȸԾ����� ���� ������� �ذ�
}
