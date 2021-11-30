#include <stdio.h>
int main()
{   
    double x,y,distance;

    scanf("%lf %lf",&x,&y);
    distance = x*y; 
    printf("%.3lf\n",distance/12);

    return 0;
}
