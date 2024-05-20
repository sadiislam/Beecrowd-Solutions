#include<stdio.h>
int main(){
    long long int X[60];
    int i, N, c;
    X[0] = 0; X[1] = 1;
    for(i=2; i<61; i++){
        X[i] = X[i-1] + X[i-2];
    }
    scanf("%d", &c);
    for(i=0; i<c; i++){
        scanf("%d", &N);
        printf("Fib(%d) = %lld\n", N, X[N]);
    }
    return 0;
}
