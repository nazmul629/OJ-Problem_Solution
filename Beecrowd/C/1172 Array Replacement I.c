#include <stdio.h>
#include <math.h>
int main ()
{
    int i, arr[10], j;
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(j=0;j<10;j++){
        printf("X[%d] = ",j);{
        if(arr[j]<1){
            printf("%d\n",1);
            }
        else{
            printf("%d\n",arr[j]);
            }
        }
    }
    return 0 ;
}
