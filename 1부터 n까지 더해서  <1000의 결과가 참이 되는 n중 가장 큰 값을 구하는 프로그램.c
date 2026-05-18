#include <stdio.h>

int main(void)
{
    int n = 1;
    int sum = 0;

    while (sum + n < 1000)
    {
        sum = sum + n;
        n++;
    }

    printf("가장 큰 n: %d\n", n - 1);
    printf("그때의 합: %d\n", sum);

    return 0;
}