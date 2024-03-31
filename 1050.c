#include<stdio.h>
int main()
{
    int numb;
    scanf("%d",&numb);

    if(numb == 61){
        printf("Brasilia\n");
    }
    else if(numb == 71){
        printf("Salvador\n");
    }
    else if(numb == 11){
        printf("Sao Paulo\n");
    }
    else if(numb == 21){
        printf("Rio de Janeiro\n");
    }
    else if(numb == 32){
        printf("Juiz de Fora\n");
    }
    else if(numb == 19){
        printf("Campinas\n");
    }
    else if(numb == 27){
        printf("Vitoria\n");
    }
    else if(numb == 31){
        printf("Belo Horizonte\n");
    }
    else{
        printf("DDD nao cadastrado\n");
    }

    return 0;
}
