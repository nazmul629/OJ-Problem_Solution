code1, qunt1, price1 = input().split(" ")
code2, qunt2, price2 = input().split(" ")

total = (int(qunt1)* float(price1) + int(qunt2)* float(price2))

print(f'VALOR A PAGAR: R$ {total:.2f}')