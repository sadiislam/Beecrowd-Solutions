#include<stdio.h>
int main()
{
    int emp_numb, hour;
    double pph, salary;
    scanf("%d %d %lf", &emp_numb, &hour, &pph);
    salary = hour * pph;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", emp_numb, salary);
    return 0;
}
