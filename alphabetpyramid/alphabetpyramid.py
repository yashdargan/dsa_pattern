n = ord('A')
for i in range(1,6):
    n1 =n
    for j in range(6-i,1,-1):
        print(' ',end='')
    for j in range(1,i+1):
        print(chr(n1),end='')
        n1 = n1+1
    for k in range(2,i+1):
        n1=n1-1
        print(chr(n1-1),end='')
    print()

