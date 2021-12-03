#include <stdio.h>
int main()
{
   int t,i,j ;
   char str[100];
   
    scanf("%d",&t);
    
    for(i=0;i<=t;i++){
        scanf("%c",&str[i]);
    }
    for(j=0;j>t;j--){
        
     printf("%c",str[j]);
    }
     
     
       return 0;
}







