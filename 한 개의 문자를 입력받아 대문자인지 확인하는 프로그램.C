#include <stdio.h>

int main()
{
    char ch;

    printf("문자를 입력하세요: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("대문자입니다.\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("소문자입니다.\n");
    }
    else
    {
        printf("영문 대문자나 소문자가 아닙니다.\n");
    }

    return 0;
}