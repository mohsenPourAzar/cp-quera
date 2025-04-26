import math
import collections
k = []
def primefactors(n):
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


n = int(input())
primefactors(n)

pfex = ''
x = list(set(k))
x.sort()

for item in x:
    if k.count(item) ==1:
        w = ''
    else:
        w = '^'+str(k.count(item))
    pfex += str(item) + w + '*'
pfex = pfex[0:-1]

print(pfex)