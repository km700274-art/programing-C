#include <stdio.h>
int main()
{
    int second; // 입력변수
    int hour, min, sec; // 출력변수
    int leftsec; // 중간변수

    printf("시간을 초 단위로 입력하세요: ");
    scanf("%d",&second);
    
    hour = second / 3600;
    leftsec = second % 3600;
    min = leftsec / 60;
    leftsec % 60; //복합대입연산자 사용
    sec = leftsec;

    printf("%d초는 %d시간 %d분 %d초입니다/n",second, hour, min, sec);
    return 0;
}
