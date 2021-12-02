for i in range(int(input())):
    H,M,O =map(int,input().split())
    if H <10:
        H='0'+str(H)

    if M <10:
        M='0'+str(M)
    
    if O<1:
        print(f"{H}:{M} - A porta fechou!")
    else:
        print(f"{H}:{M} - A porta abriu!")
