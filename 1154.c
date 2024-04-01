#include<stdio.h>
int main()
{
    int age;
    float sum=0,count=0;
    while(1)
    {
        scanf("%d", &age);
        if(age < 0){
            break;
        }
        sum += age;
        count++;
    }
    float avg = sum / count;
    printf("%.2f\n", avg);

    return 0;
}
