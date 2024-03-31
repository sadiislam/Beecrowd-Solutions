#include<stdio.h>
int main()
{
    int a, numb, even_count=0;
    for(a=1; a<=5; a++)
    {
        scanf("%d",&numb);
        if(numb%2 == 0)
        {
           even_count++;
        }
    }
    printf("%d valores pares\n", even_count);
    return 0;
}




