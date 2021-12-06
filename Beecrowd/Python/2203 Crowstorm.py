import math
x1, y1, x2, y2, v, r1, r2 = map(float,input().split())
if  x1 !=EOFError  or y1 !=EOFError   or x2 !=EOFError or y2 !=EOFError  or v !=EOFError or r1  !=EOFError or r2 != EOFError:
    X = (x2-x1)**2
    Y = (y2-y1)**2
    dstnc = math.sqrt(X+Y)
    dstnc += v*1.5
    rnge = r1+r2
    if(dstnc>rnge):
        print("N")
    else:
        print("Y")