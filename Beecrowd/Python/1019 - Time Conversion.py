time = int(input())

if time>=3600:
    h = time//3600;
    time = time%3600
    
    print(f"{h}:",end="")
else:
    print(f"0:",end="")
    
if(time>=60):
    m = time//60;
    time = time%60
    print(f"{m}:{time}")
else:
     print(f"0:{time}")