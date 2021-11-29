#include <stdio.h>
int main()
{   
  double a,b,av;
  scanf("%lf",&a);
  scanf("%lf",&b);
  
   av = ((a*3.5) + (b*7.5)) / (3.5+7.5);
   printf("MEDIA = %.5lf\n",av);

    return 0;
}