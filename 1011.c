#include<stdio.h>
int main()
{
   double vol, radius;
   scanf("%lf", &radius);
   vol = (4.0/3) * 3.14159 * pow(radius,3);
   printf("VOLUME = %.3lf\n", vol);
   return 0;
}
