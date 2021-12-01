X,Y = map(int,input().split())

if X ==1:
    price=Y*4.00
elif X==2:
    price = Y*4.50
elif X == 3:
    price = Y*5.00
elif X== 4:
    price = Y*2.00
elif X== 5:
    price = Y*1.50
print(f'Total: R$ {price:.2f}')