

#include <stdio.h>

int main()

{
    int x = 1, a_l=0, b_l=0 ,d_m=0 ,match=0,a,b,next;
    
    while(x == 1){  
     scanf("%d %d",&a,&b);
     
        if(a>b){
            a_l++;
            }    
            
        else if (b>a){
            b_l++;
         }
            
        else if (a==b){
            d_m++;
        }
        scanf("%d",&next);
        printf("Novo grenal (1-sim 2-nao)\n");
        
        match++;
        
        if(next !=1)
            break;
    }
    printf("%d grenais\n",match);
    printf("Inter:%d\n",a_l);
    printf("Gremio:%d\n",b_l);
    printf("Empates:%d\n",d_m);
    printf("Inter venceu mais\n");
    return 0;
        
}
