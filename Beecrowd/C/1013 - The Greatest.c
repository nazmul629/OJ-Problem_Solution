#include <stdio.h>

int main(){
    
    int a,b,s,large ;
    scanf("%d %d %d",&a,&b,&s);

    if ((a>b) && (a>s)){
        large = a;
    }

    else if ((b>s) && (b>s)){
        large = b;
    }   
    
    else{
        large =s;
    }

    printf("%d eh o maior\n",large);

return 0;
}

