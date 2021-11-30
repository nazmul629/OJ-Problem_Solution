#include <stdio.h>

int main(){
    char name[30];
    double salary,value,result;
    fgets(name, sizeof(name), stdin);
    scanf("%lf %lf",&salary,&value);
    result = salary + value* .15;

    printf("TOTAL = R$ %.2lf\n",result);

return 0;
}