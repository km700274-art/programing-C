#include <stdio.h>
int main()
{
    int 섭씨온도;
    printf("섭씨온도를 입력하세요: ");
    scanf("%d", &섭씨온도);
    int 화씨온도 = (섭씨온도 * 9 / 5) + 32;
    printf("화씨온도: %d\n", 화씨온도);
    printf("섭씨온도: %d\n", 섭씨온도);
    return 0;
}