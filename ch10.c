#include <stdio.h>
#include <string.h>

int coffee_machine(int button)
{
    printf("\n# 1.(�ڵ�����) �߰ſ� ���� �غ��Ѵ�\n");
    printf("\n# 2.(�ڵ�����) �������� �غ��Ѵ�\n");

    switch (button)
    {
    case 1:
        printf("# 3. (�ڵ�����) ����Ŀ�Ǹ� ź��\n");
        break;
    case 2:
        printf("# 3. (�ڵ�����) ����Ŀ�Ǹ� ź��\n");
        break;
    case 3:
        printf("# 3. (�ڵ�����) ��Ŀ�Ǹ� ź��\n");
        break;
    default:
        printf("# 3. (�ڵ�����) �ƹ��ų� ź��\n");
        break;
    }
    printf("# 4. (�ڵ�����) ���� �״´�\n");
    printf("# 5. (�ڵ�����) ��Ǭ�� ��� �� ���δ�\n");

    return 0; // ret=coffee_machine(coffee) ������ ���ư���
}

void main()
{
    int coffee;
    int ret;

    printf("� Ŀ�Ǹ� ���ϳ�? (1 : ����Ŀ�� 2 : ����Ŀ�� 3 : ��Ŀ��) ==> ");
    scanf("%d", &coffee);

    ret = coffee_machine(coffee); //Ŀ�� ���Ǳ� ���� ,�Լ� ȣ��

    printf("���� Ŀ�� ���Դ�");
}