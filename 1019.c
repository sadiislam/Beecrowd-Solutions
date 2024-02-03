#include<stdio.h>
int main()
{
    int dur, hours, minutes, rem, seconds;
    scanf("%d", &dur);
    hours = dur / 3600; //hour
    rem = dur % 3600;
    minutes = rem / 60; //minute
    seconds = rem % 60; //second

    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}
