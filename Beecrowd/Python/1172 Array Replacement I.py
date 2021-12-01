arr =[]
for i in range(10):
    n = int(input())
    arr.append(n)
for i in range(len(arr)):
    print(f"X[{i}] = ",end="")
    if arr[i] <1:
        print(1)
    else:
        print(arr[i])