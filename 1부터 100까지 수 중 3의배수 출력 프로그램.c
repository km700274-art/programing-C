#include <stdio.h>
int main(void)
{
    int i = 1;
    while(i <= 100)
    {
        if(i % 3 == 0)
        {
            printf("%d ", i);
        }
        i=i + 1;

    }
    return 0; 
}