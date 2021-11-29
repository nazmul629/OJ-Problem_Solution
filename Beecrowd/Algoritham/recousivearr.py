arr= [0,1]
first = 0 
second =1 

n = int(input())

for i in range(1,n):
    fib = first+second;
    arr.append(fib)
    first =second;
    second=fib 

print(arr[-1])