#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,l,j,result;
    char num[200];
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        result = 0;
        scanf("%s",&num);
        l = strlen(num);
        for(j = 0;j < l;j++){
            if(num[j] == '1')result += 2;
            else if(num[j] == '2' || num[j] == '3' || num[j] == '5')result += 5;
            else if(num[j] == '0' || num[j] == '9' || num[j] == '6')result += 6;
            else if(num[j] == '4')result += 4;
            else if(num[j] == '7')result += 3;
            else if(num[j] == '8')result += 7;
        }
        printf("%d results\n",result);
    }
    return 0;