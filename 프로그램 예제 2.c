#include <stdio.h>
int main()
{
    char ch1, ch2;

    printf("첫 번째 문자를 입력하세요: ");
    scanf(" %c", &ch1);

    printf("두 번째 문자를 입력하세요: ");
    scanf(" %c", &ch2);

    if (ch1 == ch2)
    {
        printf("두 문자는 같습니다.\n");
    }
    else
    {
        printf("두 문자는 다릅니다.\n");
    }

    return 0;
}