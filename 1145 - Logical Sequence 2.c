#include<stdio.h>
int main()
{
    int x, y, i, count_line=0;
    scanf("%d %d", &x, &y);
    for(i=1; i<=y; i++)
    {
        printf("%d", i);
        count_line++;
        if(count_line == x){
            printf("\n");
            count_line=0;
        }
        else{
            printf(" ");
        }
    }
    return 0;
}
