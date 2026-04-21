#include <stdio.h>


int main()
{
    int age;
    int fee;

    printf("나이를 입력하세요: ");
    scanf("%d", &age);

    if (age >= 7 && age <= 18)
    {
        fee = 10000 * 1 / 5;
        printf("입장료는 %d원입니다.\n", fee);
    }
    else if (age >= 65)
    {
        fee = 10000 / 10;
        printf("입장료는 %d원입니다.\n", fee);
    }
    else if (age >= 0 && age <= 6)
    {
        printf("무료입니다.\n");
    }
    else
    {
        printf("입장료는 10000원입니다.\n");
    }

    return 0;
}