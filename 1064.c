#include<stdio.h>
int main()
{
    int a, count=0;
    double c, sum=0, average;

    for(a=1; a<=6; a++)
    {
        scanf("%lf",&c);
        if(c > 0)
        {
            sum += c;
            count++;
        }
    }
    average = sum / count;

    printf("%d valores positivos\n%.1lf\n", count, average);
    return 0;
}



