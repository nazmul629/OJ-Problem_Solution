#include <stdio.h>

int main()
{
    int i,t, H,M,O;

    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d %d",&H,&M,&O);
        if (H <10){
           printf("0%d:", H);
        }
        else printf("%d:", H);
    
        if(M <10){
        printf("0%d", M);
        }
        else printf("%d", M);
        
    if (O<1)
        printf(" - A porta fechou!\n");
    else
        printf(" - A porta abriu!\n");
        
    }

    return 0;
}
