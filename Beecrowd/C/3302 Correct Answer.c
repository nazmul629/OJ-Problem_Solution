#include <stdio.h>
int main()
{
  int i,j,e,t;
    scanf("%d",&t);
    int arr[t];
    for(i=0;i<t;i++){
        scanf("%d",&arr[i]);
    }
    for(j=0;j<t;j++){
      printf("resposta %d: %d\n",j+1,arr[j]);
    }
    
    return 0;
}