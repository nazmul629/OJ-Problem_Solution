conditons = True 
alcool = 0
gas = 0 
disel = 0 

while conditons :
    T = int(input())
    if T == 4:
        conditons = False;
    else:
        if T == 1:
           alcool +=1 
        if T == 2:
           gas +=1 
        if T == 3:
           disel +=1 
print("MUITO OBRIGADO")
print(f"Alcool: {alcool}")
print(f"Gasolina: {gas}")
print(f"Diesel: {disel}")