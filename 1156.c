#include<stdio.h>
int main()
{
    float dividend, divisor=1, quotient, S=0;
    for(dividend=1; dividend<=39; dividend+=2)
    {
        quotient = dividend / divisor;
        S += quotient;
        divisor *= 2;
    }
    printf("%.2f\n", S);
    return 0;
}
