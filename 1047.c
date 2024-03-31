#include<stdio.h>
int main()
{
    int s_hour, s_min, e_hour, e_min, duration;
    scanf("%d %d %d %d", &s_hour, &s_min, &e_hour, &e_min);

    duration = (e_hour*60 + e_min) - (s_hour*60 + s_min);

    if (duration > 0)
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration/60, duration%60);
    }
    else if (duration <= 0)
    {   duration = duration + (24 * 60);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration/60, duration%60);
    }
    else if (s_hour == e_hour && s_min == e_min)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    return 0;
}
