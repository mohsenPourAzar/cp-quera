import math
n = int(input())

x = []
while n:
    r1,l1 = input().split()
    r = int(r1)
    l = int(l1)

    count = math.floor(math.sqrt(l)) - math.floor(math.sqrt(r - 1))
    x.append(count)
    n = n-1

for j in x:
    print(j)

