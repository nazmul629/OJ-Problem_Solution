for _ in range(int(input())):
    sum = 0 
    X,Y = map(int,input().split());

    if(X %2==0):
        X+=1

    
    for i  in range(1,Y+1):
        sum+=X;
        X+=2 ;
    print(sum)
    
    X=0;
    Y=0;
    sum=0;
