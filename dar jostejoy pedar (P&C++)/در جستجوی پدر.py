import math
   
#************************************************************

def primefactors(n):
    k = []
    if n >1:
        for i in range(2, n):
            if (n % i) == 0:
                break
    while n % 2 == 0:
        k.append(int(2)),
        n = n / 2
    for i in range(3,int(math.sqrt(n))+1,2):
        while (n % i == 0):
            k.append(int(i))
            n = n / i
    if n > 2:
        k.append(int(n))
    x = sum(list(set(k)))
    return x
#**********************************************************
def sumd(n):
    s=[]
    n = str(n)
    r = 0
    for i in n:
        s.append(int(i))
    y = sum(s)
    return y
#**************************************************************
t = int(input())

for i in range(t):
        n = int(input())
        for i in range(4,n+1):
            if n == sumd(i) + primefactors(i) + i:
                print("Yes")
                break
            else:
                continue
        else:
            print("No")