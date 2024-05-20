#include<stdio.h>
int main()
{
    double speed, time, distance, fuel;
    scanf("%lf %lf", &speed, &time);
    distance=speed * time;
    fuel = distance / 12;
    printf("%.3lf\n", fuel);
    return 0;
}
