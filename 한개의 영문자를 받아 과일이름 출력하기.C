#include <stdio.h>
int main(void)
{
    char fruit;
    printf("대소문자 관계없이 a, b, c, s, o 중 하나를 입력하세요: ");
    scanf(" %c", &fruit);
     switch (fruit)
    {
        case 'a':
        case 'A':
            printf("사과\n");
            break;
        case 'b':
        case 'B':
            printf("바나나\n");
            break;
        case 'c':
        case 'C':
            printf("체리\n");
            break;
        case 's':
        case 'S':
            printf("딸기\n");
            break;
        case 'o':
        case 'O':
            printf("오렌지\n");
            break;
        default:
            printf("저장되지 않은 과일입니다.\n");
            break;
    }

    return 0;
}