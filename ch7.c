#include <stdio.h>
#include <string.h>

void main()
{
    int a, b;

    while (1) // ���ѷ���
    {
        printf("���� �� �� �Է�(���߷��� ctrl+C) : ");
        scanf("%d %d", &a, &b);

        printf("%d + %d = %d \n", a, b, a + b);
    }

    do ~ while ���ǽ� ���ǹ� ���̶� ������ �ѹ��� ����

    int a = 100;

    // while��
    while (a == 200)
    {
        printf("while�� ���ο� ��� �Խ��ϴ�.\n");
    }
    // do ~ while��
    do
    {
        printf("do ~ while�� ���ο� ��� �Դ�!! \n");
    } while (a == 200);

    int menu;
    do
    {
        printf("\n �ֹ��ض� �ճ�� \n");
        printf(" 1. �ƾ� 2. �߾� 3. �ٹ�Ŀ�� 4. �׸���ų��.. ==> ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            printf("���̽� �Ƹ޸�ī�� ���� �߰�. \n");
            break;
        case 2:
            printf("�߰ſ� �Ƹ޸�ī�� ���� �߰�. \n");
            break;
        case 3:
            printf("������ �ٹ�Ŀ�� ���� �߰�. \n");
            break;
        case 4:
            printf("����~ �̰͹ۿ� �Ƚ���? �غ�� �صѲ�. \n");
            break;
        }
    } while (menu != 4);

    int hap = 0;
    int i;

    for (i = 1; i <= 100; i++)
    {
        hap += i;
    }

    printf("1���� 100���� �� : %d\n", hap);
    return;

    printf("���α׷� ���ε� �̰� �ѹ��� �ȶ㲨��");

    # ���� 17 ����� �հ踦 ���ϴ� ����

    int a, b, c;
    int i;
    int hap = 0;

    printf("�հ��� ���۰� ==> ");
    scanf("%d", &a);
    printf("�հ��� ���� ==> ");
    scanf("%d", &b);
    printf("��� ==> ");
    scanf("%d", &c);

    i = a;
    while (i <= b)
    {
        if (i % c == 0)
            hap = hap + i;

        i++;
    }

    printf("%d���� %d������ %d����� �հ� ==> %d \n", a, b, c, hap);

    # ���� 18 �Է��� ���ڿ��� ���� ����
    char str[100];
    char ch;

    int upper, lower, num;
    int i;

    printf("���ڿ� �Է�(100�� �̳�) : ");
    scanf("%s", &str);

    upper = 0;
    lower = 0;
    num = 0; //�ѹ��� �ᵵ�Ǵ°� ���� �ẽ
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
    } while (ch != '\0'); // strd�� ���� �ѱ��ھ� ���� ch�� �������� \0(null)�� �̿��� ���� ������ ������ ��

    printf("�빮�� %d �� , �ҹ��� %d ��, ���� %d ��", upper, lower, num);

    # ���� 19 �Է��� ���ڸ�ŭ �� ���
    char str[100];
    char ch;

    int i, k;
    int star;

    printf("���ڸ� ���� �� �Է� : ");
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
