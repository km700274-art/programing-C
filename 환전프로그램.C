#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
    int won;
    double dollar;

    scanf("%d", &won);
    dollar = won / 1221.0;
    printf("%d원은 %f달러입니다.\n", won,dollar);
    return 0;
}
