#include<stdio.h>
int main()
{
    int a, b, even=0, odd, positive=0, negative=0;
    for(a=1; a<=5; a++)
    {
        scanf("%d", &b);
        if(b%2 == 0 || b == 0){
            even++;
            odd = 5 - even;
        }
        if(b>0){
            positive++;
        }
        if (b<0){
            negative++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", even, odd, positive, negative);
    return 0;
}
