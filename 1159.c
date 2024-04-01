#include<stdio.h>
main()
{
    int i, j, x, sum=0;
    while(1){
        scanf("%d", &x);
        if(x%2 != 0){
            x++;
        }
        else if(x == 0){
            break;
        }
        sum=0;
        for(i=0; i<5; i++){
            sum += x;
            x += 2;
        }
        printf("%d\n", sum);
    }
    return 0;
}


