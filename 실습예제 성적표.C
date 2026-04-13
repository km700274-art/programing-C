#include <stdio.h>
int main() 
{
    int 국어, 수학, 영어;
    int avg;

    printf("국어 점수: ");
    scanf("%d", &국어);
    printf("영어 점수: ");
    scanf("%d", &영어);
    printf("수학 점수: ");
    scanf("%d", &수학);

    avg = (국어 + 영어 + 수학) / 3.0;

    printf("평균: %d\n", avg);

    return 0;
}