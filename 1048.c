#include<stdio.h>
int main(){
    double present_salary, inc_rate;
    scanf("%lf", &present_salary);

    if (present_salary >= 0 && present_salary <= 400){
        inc_rate = 15;
    }
    else if (present_salary > 400 && present_salary <= 800){
        inc_rate = 12;
    }
    else if (present_salary > 800 && present_salary <= 1200){
        inc_rate = 10;
    }
    else if (present_salary > 1200 && present_salary <= 2000){
        inc_rate = 7;
    }
    else if (present_salary > 2000){
       inc_rate = 4;
    }
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %%\n",(present_salary+(present_salary*inc_rate)/100), (present_salary*inc_rate)/100, inc_rate);

    return 0;
}

