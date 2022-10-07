#include <stdio.h>
#include <string.h>

int coffee_machine(int button)
{
    printf("\n# 1.(자동으로) 뜨거운 물을 준비한다\n");
    printf("\n# 2.(자동으로) 종이컵을 준비한다\n");

    switch (button)
    {
    case 1:
        printf("# 3. (자동으로) 보통커피를 탄다\n");
        break;
    case 2:
        printf("# 3. (자동으로) 설탕커피를 탄다\n");
        break;
    case 3:
        printf("# 3. (자동으로) 블랙커피를 탄다\n");
        break;
    default:
        printf("# 3. (자동으로) 아무거나 탄다\n");
        break;
    }
    printf("# 4. (자동으로) 물을 붓는다\n");
    printf("# 5. (자동으로) 스푼을 저어서 잘 녹인다\n");

    return 0; // ret=coffee_machine(coffee) 행으로 돌아가기
}

void main()
{
    int coffee;
    int ret;

    printf("어떤 커피를 원하나? (1 : 보통커피 2 : 설탕커피 3 : 블랙커피) ==> ");
    scanf("%d", &coffee);

    ret = coffee_machine(coffee); //커피 자판기 누름 ,함수 호출

    printf("옛다 커피 나왔다");
}