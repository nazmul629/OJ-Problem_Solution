
a_l=0
b_l = 0 
d_m =0
match = 0
while True:
  a,b = map(int,input().split())
  if a>b:
    a_l+=1
  elif b>a:
    b_l+=1
  else:
    d_m +=1
    
  next  = int(input())
  print("Novo grenal (1-sim 2-nao)")

  match+=1
  if next !=1:
    break
print(f"{match} grenais")
print(f"Inter:{a_l}")
print(f"Gremio:{b_l}")
print(f"Empates:{d_m}")
print("Inter venceu mais")

