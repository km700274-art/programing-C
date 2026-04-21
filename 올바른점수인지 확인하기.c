#include <stdio.h>

main()
{
    int kor;

    printf("국어 점수를 입력하세요: ");
    scanf("%d", &kor);

    if (kor >= 0 && kor <= 100)
    {
        printf("올바른 점수입니다.\n");
    }
    else
    {
        printf("올바르지 않은 점수입니다.\n");
    }

    return 0;
}