taka = float(input())
notas = int(taka)

moedas = (taka-notas) *100

n100 = notas/100
notas= notas%100
n50 = notas/50
notas = notas%50
n20 = notas/20
notas = notas%20
n10 = notas/10
notas = notas%10
n5 = notas/5
notas = notas%5
n2 = notas/2
notas = notas%2
m1 = notas/1
notas = notas%1
m50 = moedas/50
moedas = moedas%50
m25 = moedas/25
moedas = moedas%25
m10 = moedas/10
moedas = moedas%10
m05 = moedas/5
moedas = moedas%5
m01 = moedas/1

print('NOTAS:')
print(f"{int(n100)} nota(s) de R$ 100.00")
print(f"{int(n50)} nota(s) de R$ 50.00")
print(f"{int(n20)} nota(s) de R$ 20.00")
print(f"{int(n10)} nota(s) de R$ 10.00")
print(f"{int(n5)} nota(s) de R$ 5.00")
print(f"{int(n2)} nota(s) de R$ 2.00")

print('MOEDAS:')
print(f"{int(m1)} moeda(s) de R$ 1.00")
print(f"{int(m50)} moeda(s) de R$ 0.50")
print(f"{int(m25)} moeda(s) de R$ 0.25")
print(f"{int(m10)} moeda(s) de R$ 0.10")
print(f"{int(m05)} moeda(s) de R$ 0.05")
print(f"{int(m01)} moeda(s) de R$ 0.01")

