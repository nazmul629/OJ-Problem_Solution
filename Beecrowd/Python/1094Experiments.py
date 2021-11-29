
c =0;
r =0;
s =0;

for i in range(int(input())):
    A, T = map(str,input().split())
    A= int(A) 
    if A<=15:
        if T =='C':
            c+=A

        if T =='R':
            r+=A 

        if T =='S':
            s+=A
total = c+r+s 

c_r =(c*100)/total
s_r =(s*100)/total
r_r =(r*100)/total

print(f"Total: {total} cobaias")
print(f"Total de coelhos: {c}")
print(f"Total de ratos: {r}")
print(f"Total de sapos: {s}")

print(f"Percentual de coelhos: {c_r:.2f} %")
print(f"Percentual de ratos: {r_r:.2f} %")
print(f"Percentual de sapos: {s_r:.2f} %")

