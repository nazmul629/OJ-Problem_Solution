#include <stdio.h>
int main()
{   
  double a,b,c,result;
  scanf("%lf",&a);
  scanf("%lf",&b);
  scanf("%lf",&c);
  
   result = (a/10 * 2 + b/10*3 + c/10*5);
   printf("MEDIA = %.1lf\n",result);

    return 0;
}