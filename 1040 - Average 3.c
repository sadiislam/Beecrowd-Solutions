#include<stdio.h>
int main()
{
    double n1,n2,n3,n4,average,extra_score,re_average;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    average = (n1*2 + n2*3 + n3*4 + n4) / 10;

    if(average>=7){
        printf("Media: %.1lf\nAluno aprovado.\n",average);
    }
    else if(average<5){
        printf("Media: %.1lf\nAluno reprovado.\n",average);
    }
    else if(average>=5 && average<6.9){
        printf("Media: %.1lf\nAluno em exame.\n",average);
        scanf("%lf",&extra_score);
        printf("Nota do exame: %.1lf\n",extra_score);
        re_average = (average + extra_score) / 2;

        if(re_average>=5){
            printf("Aluno aprovado.\n");
        }
        else if(re_average<=4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",re_average);
    }

    return 0;
}
