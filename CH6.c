#include <stdio.h>
#include <string.h>

void main()
{
    int hap = 0;
    int i;
    int num1, num2, num3;

    printf("���۰�, ����, ������ �Է� : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    for (i = num1; i <= num2; i = i + num3)
    {
        hap = hap + i;
    }

    printf("%d���� %d���� %d�� ������ ���� �� : %d", num1, num2, num3, hap);

    int i;
    int dan;

    printf("�� �� ?");
    scanf("%d", &dan);

    for (i = 1; i <= 9; i++)
    {
        printf(" %d X %d = %d \n", dan, i, dan * i);
    }

    int i, k;

    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 3; k++)
            printf("��ø for���� (i�� : %d, k�� = %d) \n", i, k);
    }

    # ���� 14 ������ ��� tlqkf
    int i, k;

    for (i = 2; i <= 9; i++)
        printf("#��%d��# ", i);

    for (i = 1; i <= 9; i++)
    {
        printf("\n");
        for (k = 2; k <= 9; k++)
        {
            printf("%d X %d = %d ", k, i, i * k);
        }
    }

    # ���� 15 �ƽ�Ű�ڵ�ǥ ���
    int i;

    for (i = 0; i <= 127; i++)
    {
        if (i % 16 == 0)
        {
            printf("-------------- \n");
            printf("10���� 16���� ���� \n");
            printf("-------------- \n");
        }
        printf("%5d  %5x %5c \n", i, i, i);
    }

    # ���� 16 �Է� ���� �ݴ��~
    char ch[100];
    int ch_cnt; // �Է��� ���� ����
    int i;

    printf("������ �� ���ڸ� �Է� (100�� ����) : ");
    scanf("%s", ch);

    ch_cnt = strlen(ch);

    printf("�Է��� ���ڿ� ==> %s \n", ch);

    printf("��ȯ�� ���ڿ� ==> ");

    for (i = ch_cnt; i >= 0; i--)
    {
        printf("%c", ch[i]);
    }
}