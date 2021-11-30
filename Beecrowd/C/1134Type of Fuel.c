#include<stdio.h>
int main()
{
    int n,alcool = 0,gas = 0,disel = 0, e, i;
 
    for(i = 0;i < 100;i++)
    {
        scanf("%d", &n);
        if (n >= 1 && n <= 3){
            if(n == 1)alcool++;
            else if(n == 2)gas++;
            else if(n == 3)disel++;
        }
        
        else if(n == 4)break;
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", disel);
    
    return 0;
}