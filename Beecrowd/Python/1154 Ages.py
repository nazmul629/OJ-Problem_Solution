# t = True
# count= 0 
# sum = 0

# while t==True:
    
#     x = int(input())
#     if x >=0:
#         count+=1
#         sum+=x

#     if x<0:
#         t = False
# print(sum)
# print(f'{sum/count:.2f}')
t = True
count= 0 
sum = 0

while t==True:
    
    x = int(input())
    if x<=0:
        t = False
    else:
        count+=1
        sum+=x


print(sum)
print(f'{sum/count:.2f}')



