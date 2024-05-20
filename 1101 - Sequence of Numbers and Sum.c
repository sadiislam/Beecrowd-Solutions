#include<stdio.h>
main(){
    int m,n,i,j,temp,sum=0;
    for(i=0; i<100; i++){
        scanf("%d %d", &m, &n);
        if(m <= 0 || n <=0 ) break;
        if(m > n){
            temp = m;
               m = n;
               n = temp;
        }
        for(i=m; i<=n; i++){
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);
        sum = 0;
    }
    return 0;
}
