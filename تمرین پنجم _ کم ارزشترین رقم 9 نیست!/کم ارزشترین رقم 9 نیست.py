import math

n = int(input())  

r = math.factorial(n)
r = str(r)
s = len(r)-1
if n == 1:
    print(1)
else:
    while s:
        if int(r[s]) == 0 :
            s = s - 1
            continue
        else:
            print(r[s])
            break
 
