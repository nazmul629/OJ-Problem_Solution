
x = float(input())

# while x!=0:
#     print(f"N[{i}] = {x:.4f}")
#     i=+1
#     x = x//2

for i in range(0,100, 1):

    print(f"N[{i}] = {x:.4f}")
    x = x /2
    if x<=0:
        break;
