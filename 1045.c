#include<stdio.h>
int main(){
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);

    if (A >= (B + C) ||  B >= (A + C) || C >= (B + A)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (A*A == (B*B + C*C) || B*B == (A*A + C*C) || C*C == (B*B + A*A)){
        printf("TRIANGULO RETANGULO\n");
    }
    else if (A*A > (B*B + C*C) || B*B > (A*A + C*C) || C*C > (B*B + A*A)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (A*A < (B*B + C*C) || B*B < (A*A + C*C) || C*C < (B*B + A*A)){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (A==B && B==C){
        printf("TRIANGULO EQUILATERO\n");
    }
    if ((A==B || B==C || A==C) && (A!=C || B!=A || A!=B)){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
