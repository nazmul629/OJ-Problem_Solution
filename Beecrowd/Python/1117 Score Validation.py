count = 0
sum = 0
while count < 2:
    n = float(input())
    if n >= 0 and n <= 10:
        count =+ 1
        sum+= n

    if n < 0 or n > 10:
        print('nota invalida')
m = sum / 2
print('media = {:.2f}'.format(m))



#  T = True
# count = 0
# sum = 0 
# while T:
#     a= float(input())
    
#     if(a>=0 and a<=10):
#         count+=1;
#         sum+=a;
        
#     else:
#         print("nota invalida");

#     if count ==2:
#         b = sum/2
#         print(f'{b:.2f}')
#         T=False