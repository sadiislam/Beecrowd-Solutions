#include<stdio.h>
int main()
{
    int N, i, fact=1, n=0, digit;
    scanf("%d", &N);
    for(i=0; i<N; i++){
        for(i=1; i<N; i++){
            digit = (N - n);
            n++;
            fact *= digit;
        }
        printf("%d\n",fact);
    }
    return 0;
}


