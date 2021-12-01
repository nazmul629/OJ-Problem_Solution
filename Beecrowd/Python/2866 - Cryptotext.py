for i in range(int(input())):
    change=''
    txt =input()
    if len(txt)>=2 and len(txt)<=99: 
        for i in txt:
            if i.islower():
                change+=i
        print(change[::-1])