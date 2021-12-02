for i  in range(int(input())):
    n = input()
    st2 ='' 
    for i in n:
        if i>='a' and i<='z' or i>='A' and i<='Z':
            i = chr(ord(i)+3)
        st2 += i
    print(st2[::-1])