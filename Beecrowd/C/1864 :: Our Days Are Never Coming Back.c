#include <stdio.h>
int main()
{
    int n,i,c,d;
    char ara[40]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    
    scanf("%d", &n);
    for(i=0; i<n; i++)
        printf("%c", ara[i]);
    printf("\n");
    return 0;
}