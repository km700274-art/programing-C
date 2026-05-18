#include <stdio.h>
int main(void)
{
    int i=1;
    int sum=0;
    while(i<=100)
    {
        if(i%2==0)
        {
            sum= sum+i;
        }
        i=i + 1;
    }
    printf("1부터 100까지의 짝수의 합: %d\n", sum);
    return 0;
}