length = int(input())
arr = list(map(int, input().split()))
myarr = arr[:length]

minimum = min(myarr)
ind = myarr.index(minimum)
print(f"Menor valor: {minimum}");
print(f"Posicao: {ind}");
