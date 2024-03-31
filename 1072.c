#include<stdio.h>
int main(){
    int i,n,x,count=0;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &x);
        if(x >= 10 && x <= 20){
            count++;
        }
    }
    printf("%d in\n%d out\n", count, i-count);
    return 0;
}
