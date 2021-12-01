import math
a,b,c  = map(float,input().split())
d = (b*b) - (4*a*c)

if(a==0 or d<0):
    print("Impossivel calcular")

else:
    d = math.sqrt(d)

    r1 = (-b + d) / (2*a)
    r2 = (-b -d)  / (2*a)


    print(f'R1 = {r1:.5f}')
    print(f'R2 = {r2:.5f}')
