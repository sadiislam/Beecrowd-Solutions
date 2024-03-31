#include<stdio.h>
int main(){
    int n, x, y, temp, sum;
    scanf("%d",&n);
    while(1){
                if(n == 0) break;
                scanf("%d%d",&x,&y);
                if(x > y){
                     temp = x;
                     x = y;
                     y = temp;
                }
                sum = 0;
                for(int i = x+1; i < y; i++){
                       if(i%2 != 0)
                        sum += i;
                }
                printf("%d\n", sum);
                n--;
    }
    return 0;
}
