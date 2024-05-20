#include<stdio.h>
int main(){
    int x,y;
    double a,b,c,d,e;
    scanf("%d %ld",&x,&y);

    if(x==1){
        a=4*y;
        printf("Total: R$ %.2lf\n",a);
    }
    else if(x==2){
        b=4.5*y;
        printf("Total: R$ %.2lf\n",b);
    }
    else if(x==3){
        c=5*y;
        printf("Total: R$ %.2lf\n",c);
    }
    else if(x==4){
        d=2*y;
        printf("Total: R$ %.2lf\n",d);
    }
    else if(x==5){
        e=1.5*y;
        printf("Total: R$ %.2lf\n",e);
    }

    return 0;
}

