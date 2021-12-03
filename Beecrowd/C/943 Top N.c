
#include <stdio.h>
int main()
{   
  int K;
  scanf("%d",&K);
    if(K ==1 )
        printf("Top 1\n");

    else if(K<=3)
        printf("Top 3\n");
    else if(K<=5)
        printf("Top 5\n");
        
    else if(K<=10)
        print("Top 10\n");
    else if(K<=25)
        print("Top 25\n");
    else if(K <= 50)
        print("Top 50\n");
    else if(K <= 100 )
        print("Top 100\n");


    return 0;
}

