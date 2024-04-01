#include<stdio.h>
int main()
{
    int n, a[80], i;
    scanf("%d", &n);
    a[0] = 0;
    a[1] = 1;
    for(i=2; i<n; i++)
    {
        a[i] = a[i-2] + a[i-1];
    }
    printf("0");
    for(i=1; i<n; i++)  //for printing
    {
        printf(" %d", a[i]);
    }
    printf("\n");
    return 0;
}

