#include <stdio.h>
int main(void)
{
    int num;
    int i=1;
    printf("자연수를 입력하세요: ");
    scanf("%d", &num);
    printf("%d의 약수: ", num);
    while(i <= num)
    {
        if(num % i == 0)
        {
            printf("%d ", i);
        }
        i=i+1;
    }
    return 0;
}
