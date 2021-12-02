#include <stdio.h>

int main(){
    int arr[1000],i,a,j,t;

    scanf("%d",&t);
    if(t>=1 && t<=1000){
        for(i=0;i<t;i++){
            scanf("%d",&arr[i]);
        }
       
       for(j=0;j<t;j++){
           
         if(arr[j]%2==0)
                printf("0\n");
            else
                printf("1\n");
       }
    }
    return 0;

}