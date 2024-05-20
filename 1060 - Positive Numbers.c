#include<stdio.h>
int main()
{
    int a,count=0;
    double c;

    for(a=1; a<=6; a++)
    {
        scanf("%lf",&c);
        if(c>0)
            count++; //counting
    }
    printf("%d valores positivos\n", count);

    return 0;
}
