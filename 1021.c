#include<stdio.h>
int main()
{
    double n;
    int a,a1,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11;
    scanf("%lf",&n);
    a = n * 100; //cz 2 digit after decimal
    b1=a/10000; //100
    a1=a%10000;
    b2=a1/5000; //50
    a1=a1%5000;
    b3=a1/2000;  //20
    a1=a1%2000;
    b4=a1/1000;  //10
    a1=a1%1000;
    b5=a1/500;  //5
    a1=a1%500;
    b6=a1/200;  //2
    a1=a1%200;
    b7=a1/100;  //1
    a1=a1%100;
    b8=a1/50;  //0.50
    a1=a1%50;
    b9=a1/25;  //0.25
    a1=a1%25;
    b10=a1/10;  //0.10
    a1=a1%10;
    b11=a1/5;  //0.05
    a1=a1%5;
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n",b1,b2,b3,b4,b5,b6);
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",b7,b8,b9,b10,b11,a1);
    return 0;
}


