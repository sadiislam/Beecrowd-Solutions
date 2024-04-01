#include<stdio.h>
int main()
{
    float a, average, c=0, d=0;
    while(1)
    {
        if(d == 2){
            break;
        }
        scanf("%f", &a);

        if(a >= 0 && a <= 10){
            d++;
            c += a;
        }
        else{
            printf("nota invalida\n");
        }
    }
    average = c / 2.0;

    printf("media = %.2f\n", average);
    return 0;
}



