#include <stdio.h>

int main()
{
    int employeeNumber;
    int age;
    char jobCode;
    int inputSeconds;

    int maxWorkHour;
    int maxWorkSeconds;
    int paySeconds;

    int hour;
    int minute;
    int second;

    int payMinute;
    int wagePerMinute;

    int grossPay;
    int tax;
    int netPay;

    printf("사원번호를 입력하세요: ");
    scanf("%d", &employeeNumber);

    printf("나이를 입력하세요: ");
    scanf("%d", &age);

    printf("직급코드를 입력하세요(R/S/A): ");
    scanf(" %c", &jobCode);

    printf("근무시간을 초 단위로 입력하세요: ");
    scanf("%d", &inputSeconds);

    if (age < 18) {
        printf("\n18세 미만은 고용불가입니다.\n");
        return 0;
    }
    else if (age >= 18 && age < 25) {
        maxWorkHour = 7;
    }
    else if (age >= 25 && age < 55) {
        maxWorkHour = 9;
    }
    else if (age >= 55 && age < 65) {
        maxWorkHour = 5;
    }
    else {
        maxWorkHour = 3;
    }

    maxWorkSeconds = maxWorkHour * 60 * 60;

    if (jobCode == 'R' || jobCode == 'r') {
        wagePerMinute = 5000;
    }
    else if (jobCode == 'S' || jobCode == 's') {
        wagePerMinute = 3000;
    }
    else if (jobCode == 'A' || jobCode == 'a') {
        wagePerMinute = 1000;
    }
    else {
        printf("\n잘못된 직급코드입니다.\n");
        return 0;
    }

    hour = inputSeconds / 3600;
    minute = (inputSeconds % 3600) / 60;
    second = inputSeconds % 60;

    if (inputSeconds > maxWorkSeconds) {
        paySeconds = maxWorkSeconds;
    }
    else {
        paySeconds = inputSeconds;
    }

    if (paySeconds % 60 == 0) {
        payMinute = paySeconds / 60;
    }
    else {
        payMinute = paySeconds / 60 + 1;
    }

    grossPay = payMinute * wagePerMinute;

    if (grossPay < 100000) {
        tax = grossPay * 5 / 100;
    }
    else if (grossPay >= 100000 && grossPay < 1000000) {
        tax = grossPay * 10 / 100;
    }
    else if (grossPay >= 1000000 && grossPay < 2000000) {
        tax = grossPay * 15 / 100;
    }
    else {
        tax = grossPay * 20 / 100;
    }

    netPay = grossPay - tax;

    printf("\n%d번 사원의 최대근무시간은 %d시간입니다.\n", employeeNumber, maxWorkHour);

    if (jobCode == 'R' || jobCode == 'r') {
        printf("%d시간 %d분 %d초 근무자로 최고등급직원입니다.\n", hour, minute, second);
    }
    else if (jobCode == 'S' || jobCode == 's') {
        printf("%d시간 %d분 %d초 근무자로 우수등급직원입니다.\n", hour, minute, second);
    }
    else if (jobCode == 'A' || jobCode == 'a') {
        printf("%d시간 %d분 %d초 근무자로 기본등급직원입니다.\n", hour, minute, second);
    }

    printf("세전급여액은 %d원, 세금은 %d원으로 세후급여액은 %d원입니다.\n", grossPay, tax, netPay);

    return 0;
}