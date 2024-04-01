#include <stdio.h>
int main()
{
    int T, time, i, PA, PB;
    double G1, G2;
    scanf("%d", &T);
    for(i=0; i<T; i++)
    {
        time = 0;
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        while(PA <= PB)
        {
            PA = PA + ((PA * G1) / 100);
            PB = PB + ((PB * G2) / 100);

            time++;
            if (time > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (time <= 100)
            printf("%d anos.\n", time);
    }
    return 0;
}
