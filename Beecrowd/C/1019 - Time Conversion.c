                                                                           
#include <stdio.h>

int main()
{
    int time;
        
    scanf("%d", &time);
        
    int hours = time / 3600;
    time = time - (hours * 3600);
        
    int minutes = time / 60;
    time = time - (minutes * 60);
        
    printf("%d:%d:%d\n", hours, minutes, time);
        
 return 0;
}