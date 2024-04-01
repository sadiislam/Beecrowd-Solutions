#include<stdio.h>
main()
{
    int n, i, j, x, y, sum=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &x, &y);
        if(x%2 == 0){
            x++;
        }
        sum = 0;
        for(j=0; j<y; j++){
            sum += x;
            x += 2;
        }
        printf("%d\n", sum);
    }
    return 0;
}

