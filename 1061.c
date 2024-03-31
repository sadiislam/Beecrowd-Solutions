#include<stdio.h>
int main()
{
    int s_day, s_hour, s_min, s_sec, e_day, e_hour, e_min, e_sec;
    scanf("Dia %d", &s_day); scanf("%d : %d : %d\n", &s_hour, &s_min, &s_sec);
    scanf("Dia %d", &e_day); scanf("%d : %d : %d", &e_hour, &e_min, &e_sec);
    s_sec = e_sec - s_sec; s_min = e_min - s_min;
    s_hour = e_hour - s_hour; s_day = e_day - s_day;

    if(s_sec < 0){
        s_sec += 60;
        s_min--;
    }
    if(s_min < 0){
        s_min += 60;
        s_hour--;
    }
    if(s_hour < 0){
        s_hour += 24;
        s_day--;
    }
    printf("%d dia(s)\n", s_day);
    printf("%d hora(s)\n", s_hour);
    printf("%d minuto(s)\n", s_min);
    printf("%d segundo(s)\n", s_sec);
}
