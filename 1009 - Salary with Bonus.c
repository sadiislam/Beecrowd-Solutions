#include<stdio.h>
int main()
{
    char emp_name;
    double salary, sold, total_salary;
    scanf("%s %lf %lf", &emp_name, &salary, &sold);
    total_salary = salary + (sold * 0.15);
    printf("TOTAL = R$ %.2lf\n", total_salary);
    return 0;
}
