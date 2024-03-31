#include<stdio.h>
int main(){
    int i, n, amount, total=0, c=0, r=0, s=0;
    double l, p, g;
    char type;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d %c",&amount,&type);
        total = amount + total;

        if(type == 'C'){
            c = amount + c;
        }
        else if(type == 'R'){
            r = amount + r;
        }
        else if(type == 'S'){
            s = amount + s;
        }
    }
    l = ((c*1.0) * 100) / total;
    p = ((r*1.0) * 100) / total;
    g = ((s*1.0) * 100) / total;
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n", total, c, r, s, l, p, g);

    return 0;
}
