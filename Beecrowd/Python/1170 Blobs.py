t = int(input())

if t>=1 and t<=1000:
    for i in range(t):
        x = float(input())
        count = 0 
        while x >1:
            x = x/2
            count+=1
        print("")
        count=0