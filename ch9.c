#include <stdio.h>
#include <string.h>

void main()
{
    // char stack[5];
    // int top = 0;

    // stack[top] = 'A';
    // printf("%C �ڵ����� �ͳο� ��\n", stack[top]);
    // top++;

    // stack[top] = 'B';
    // printf("%C �ڵ����� �ͳο� ��\n", stack[top]);
    // top++;

    // stack[top] = 'C';
    // printf("%C �ڵ����� �ͳο� ��\n", stack[top]);
    // top++;
    // stack[top] = 'D';
    // printf("%C �ڵ����� �ͳο� ��\n", stack[top]);
    // top++;
    // stack[top] = 'E';
    // printf("%C �ڵ����� �ͳο� ��\n", stack[top]);
    // top++;
    // // stack[top] = 'F'; // 5�� �ۿ� ����
    // // printf("%C �ڵ����� �ͳο� ��\n", stack[top]);
    // // top++;

    // printf("\n");

    // top--;
    // printf("%C �ڵ����� �ͳ��� �������� \n", stack[top]);
    // stack[top] = ' ';
    // top--;
    // printf("%C �ڵ����� �ͳ��� �������� \n", stack[top]);
    // stack[top] = ' ';
    // top--;
    // printf("%C �ڵ����� �ͳ��� �������� \n", stack[top]);
    // stack[top] = ' ';
    // top--;

    // char stack[5];
    // int top = 0;

    // char carName = 'A';
    // int select = 0;

    // while (select != 3)
    // {
    //     printf("%C <1> �ڵ��� �ֱ� <2> �ڵ��� ���� <3> �� : ");
    //     scanf("%d", &select);

    //     switch (select)
    //     {
    //     case 1:
    //         if (top > 5)
    //         {
    //             printf("�ͳ��� �� ���� ���� �� ��\n");
    //         }
    //         else
    //         {
    //             stack[top] = carName++;
    //             printf(" %c �ڵ����� �ͳο� ��\n", stack[top]);
    //             top++;
    //         }
    //         break;

    //     case 2:
    //         if (top < 1)
    //         {
    //             printf("���� �Ѵ뵵 �����ϴ�.\n");
    //         }
    //         else
    //         {
    //             top--;
    //             printf("%c �ڵ����� �ͳ��� �����������ϴ�\n", stack[top]);
    //             stack[top] = carName;
    //         }
    //         break;

    //     case 3:
    //         printf("���� �ͳο� %d�밡 ���� \n", top);
    //         printf("���α׷��� �����մϴ�.\n");
    //         break;

    //     default:
    //         printf("�߸� �Է��߽��ϴ�..\n");
    //     }
    // }
    // ##################################################
    // �޸� �ּ�
    // int a = 100;
    // int b = 200;
    // int aa[3] = {0, 0, 0};

    // printf("���� a�� �ּҴ� %d �Դϴ� \n", &a);
    // printf("���� b�� �ּҴ� %d �Դϴ� \n", &b); // 4byte ����
    // printf("���� aa�� �ּҴ� %d �Դϴ� \n", &aa);
    // printf("���� aa[0]�� �ּҴ� %d �Դϴ� \n", &aa[0]);
    // printf("���� aa[1]�� �ּҴ� %d �Դϴ� \n", &aa[1]);
    // printf("���� aa[2]�� �ּҴ� %d �Դϴ� \n", &aa[2]);

    // �ּ�Ȯ�ν� +1�� 4����Ʈ�� ���ϴ°Ͱ� ����
    // int aa[3] = {10, 20, 30};

    // printf("&aa[0]�� %d aa+0�� %d \n", &aa[0], aa + 0);
    // printf("&aa[1]�� %d aa+1�� %d \n", &aa[1], aa + 1);
    // printf("&aa[2]�� %d aa+2�� %d \n", &aa[2], aa + 2);

    // #####################################
    // ��¥��¥ �߿��� ������

    // char ch;
    // char *p;
    // ch = 'A';
    // p = &ch;

    // printf("ch�� ������ �ִ� ��:ch => %c \n", ch);
    // printf("&ch�� ������ �ִ� �� :ch => %d \n", &ch);
    // printf("*p�� ������ �ִ� �� : p ==> %d \n", p);
    // printf("*p�� ���� ����Ű�� ���� �� : *p ==> %c \n", *p);

    // char ch;
    // char *p;
    // char *q;

    // ch = 'A';
    // p = &ch;

    // q = p;

    // *q = 'Z';

    // printf("ch�� ������ �ִ� �� :ch => %c \n", ch);

    // char s[8] = "Basic_C";
    // char *p;

    // p = s;

    // printf("p : %s\n", p);
    // printf("&s : %s \n\n", &s); //�׳� s�� ����

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