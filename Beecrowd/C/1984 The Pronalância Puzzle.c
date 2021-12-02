#include <stdio.h>
#include <string.h>
int main()
{
    char num[50], temp;
    scanf("%s", num);
    int ln = strlen(num);
    int i, j;
    for(i=0, j=ln-1; i < ln/2; i++, j--)
    {
        temp = num[i];
        num[i]=num[j];
        num[j]=temp;
    }
    printf("%s\n", num);
    return 0;
}