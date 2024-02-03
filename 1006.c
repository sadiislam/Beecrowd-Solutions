#include <stdio.h>
int main()
{
    double a ,b ,c ,MEDIA;
    scanf("%lf%lf%lf",&a, &b, &c); //taking grades
    MEDIA = (a/10 *2) + (b/10 *3) + (c/10 *5); //calculating avarage
    printf("MEDIA = %.1lf\n",MEDIA);
    return 0;
}
