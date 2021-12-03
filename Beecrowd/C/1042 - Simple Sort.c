#include <stdio.h>

int main()
{
    int X,Y,Z;
    scanf ("%d%d%d", &X,&Y,&Z);
    if(X<Y&&X<Z)
    {
        if(Y<Z)
            printf("%d\n%d\n%d\n",X,Y,Z);
        else printf("%d\n%d\n%d\n",X,Z,Y);
    }
    if(Y<X&&Y<Z)
    {
        if(X<Z)
            printf("%d\n%d\n%d\n",Y,X,Z);
        else printf("%d\n%d\n%d\n",Y,Z,X);
    }
    if(Z<Y&&Z<X)
    {
        if(Y<X)
            printf("%d\n%d\n%d\n",Z,Y,X);
        else printf("%d\n%d\n%d\n",Z,X,Y);
    }
    printf ("\n%d\n%d\n%d\n",X,Y,Z);
    return 0;
}
