#include<stdio.h>
int main()
{
    int n,i,z=1;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("%d %d %d PUM\n", z, z+1, z+2);
        z+=4;
    }
    return 0;
}
