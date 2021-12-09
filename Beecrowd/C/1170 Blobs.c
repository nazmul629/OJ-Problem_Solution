#include <stdio.h>
int main()
{
    int t,i,count = 0;
    float x;
    
    
    scanf("%d",&t);
    for(i = 0; i< t;i++){
            scanf("%f",&x);
       
            while(x > 1){
                    x=x/2;
                    count++;
            }
            printf("%d dias\n", count);
            count = 0;
    }
    
    return 0;
}