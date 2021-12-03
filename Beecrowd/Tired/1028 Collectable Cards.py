N = int(input())

if N>=1 and N<=3000:
    for i in range(N):
        a,b = map(int,input().split());
        find =1
        if (a<=1 and a>=1000) and (a<=1 and a>=1000):
            minm = min(a,b)
    
            for i in range(1,minm+1):
                if a%i == 0  and b%i ==0 :
                    find = i;
        print(find)