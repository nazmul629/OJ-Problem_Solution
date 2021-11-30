#include <stdio.h>

int main()
{
    int t,i,j,sum=0,X,Y;
    
    scanf("%d",&t);
    for(i=0;i<t;i++){
        
        scanf("%d %d",&X,&Y);
        
        if(X %2==0){
            X+=1;
        }
    
    for (j=1;j<Y+1;j++){
         sum+=X;
         X+=2 ;
    }
     printf("%d\n",sum);

    sum=0;
    }
    
    
   return 0;
}
