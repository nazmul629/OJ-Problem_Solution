a =int(input())
b =int(input())

if (a%2==0 and b%2==1) or (b%2==0 and a%2==1):
    print(0)
else:
    print(1)