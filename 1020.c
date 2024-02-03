#include<stdio.h>
int main()
{
    int age, years, months, rem, days;
    scanf("%d", &age);
    years = age / 365;
    rem = age % 365;
    months = rem / 30;
    days = rem % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);
    return 0;
}

