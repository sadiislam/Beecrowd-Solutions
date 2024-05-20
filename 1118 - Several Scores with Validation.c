#include<stdio.h>
int main()
{
    float numb, average, sum=0, count=0, new_calc;
    while(1)
    {
        while(1)
        {
            if(count == 2){
                break;
            }
            scanf("%f", &numb);
            if(numb >= 0 && numb <= 10){
                count++;
                sum += numb;
            }
            else{
                printf("nota invalida\n");
            }
        }
        count = 0;
        average = sum / 2.0;
        
        printf("media = %.2f\n", average);
        sum = 0;
        while(1)
        {
            scanf("%f", &new_calc);
            
            printf("novo calculo (1-sim 2-nao)\n");
        
            if(new_calc == 1 || new_calc == 2) break;
        }
        if(new_calc == 1) continue;
        else break;
    }
    return 0;
}



