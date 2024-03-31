#include<stdio.h>
main(){
    int i, n, j=0, p;
    for(i=1; i<=100; i++){
        scanf("%d", &n);
        if(n > j){
            j = n;
            p = i;
        }
    }
    printf("%d\n%d\n", j, p);
    return 0;
}


