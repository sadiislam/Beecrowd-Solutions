#include<stdio.h>
int main()
{
    int x, n, i, j, h, count;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &x);
        h = x / 2;
        count = 0;
        for(j=1; j<=h; j++){
            if(x%j == 0){
                count += j;
            }
        }
        if(count == x){
            printf("%d eh perfeito\n", x);
        }
        else{
            printf("%d nao eh perfeito\n", x);
        }
    }
    return 0;
}

