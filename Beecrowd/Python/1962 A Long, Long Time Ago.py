T = int(input())
for i in range(T):
    year = int(input())
    if year>=2015:
        result = year-2015+1
        print(f"{result} A.C.") 
    elif year<=2015:
        result = 2015-year
        print(f"{result} D.C.")
        
