import math
t= int(input())

for i in range(0,t):
    count = 0
    n = int(input())
    if n>1:
        if(n == 0):
             print("Not Prime");
             continue;
        
        if(n == 1):
             print("Not Prime");
             continue;
        
        if(n == 2):
             print("Prime");
             continue;
        for i in range(2,int(math.sqrt(n)+1)):
            if n % i ==0:
                count+=1
            if (count ==2):
                    break;
        if count >= 1:
            print("Not Prime")
        else:
            print("Prime")
            
