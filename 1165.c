#include<stdio.h>
int main(){
    int x, n, i, j;
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        scanf("%d", &x);

        for(j=2; j<x; j++)
            {
            if(x%j == 0){
                printf("%d nao eh primo\n", x);
                break;
            }
        }
        if (j == x){
            printf("%d eh primo\n", x);
        }
    }
    return 0;
}

