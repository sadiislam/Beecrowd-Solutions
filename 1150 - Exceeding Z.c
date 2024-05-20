#include<stdio.h>
int main()
{
    int x, z, i, sum=0, count=0;
    scanf("%d %d", &x, &z);
    while(x >= z){
        scanf("%d", &z);
    }
    for(i=x; i<z; i++)
    {
        sum += i;   //asc_sum
        count++;     //how many asc_int need to over z
        if(sum > z){
            break;
        }
    }
    printf("%d\n",count);
    return 0;
}
