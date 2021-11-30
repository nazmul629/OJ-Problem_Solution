#include <stdio.h>

int main(){

    int Number,Hours;
    double Rate, Salary;
    
    scanf("%d",&Number);
    scanf("%d",&Hours);
    scanf("%lf",&Rate);

    Salary = (Hours * Rate);

    printf("NUMBER = %d\n",Number);
    printf("SALARY = U$ %.2lf\n",Salary);

    return 0;
}