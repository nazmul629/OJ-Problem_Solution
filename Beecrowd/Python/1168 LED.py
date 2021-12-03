tabela = (6,2,5,5,4,5,6,3,7,6)
n = int(input())

for _ in range(n):
    result = 0
    valor = input()
    for v in valor:
        result += tabela[int(v)]
    print(f"{result} leds" )
