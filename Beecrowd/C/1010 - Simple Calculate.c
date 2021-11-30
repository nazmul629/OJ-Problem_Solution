#include <stdio.h>

int main(){
    int code1, qunt1,code2, qunt2;
    float price1,price2,total;

    scanf("%d %d %f",&code1,&qunt1,&price1);
    scanf("%d %d %f",&code2,&qunt2,&price2);

        float t1 = qunt1* price1 ;
        float t2 =qunt2*price2;
        
        total = (t1+ t2);

printf("VALOR A PAGAR: R$ %.2f\n",total);

return 0;
}