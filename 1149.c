#include<stdio.h>
int main()
{
    int a, n, sum=0, i;
    scanf("%d %d", &a, &n);

    while(n < 1){
        scanf("%d", &n);
    }
    for(i=0; i<n; i++){
        sum = sum + a;
        a++;
    }
    printf("%d\n", sum);

    return 0;
}
