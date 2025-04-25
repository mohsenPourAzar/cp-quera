import math
a = int(input())
q = list(map(int,input().strip().split()))[:a]
def max_gcd_pair(S):
    s = set(S)
    m = max(S)
    res = 0
    i = m
    while(i > 0):
        a = i
        cnt = 0
        while (a<=m): 
            if a in s:   
               cnt += 1
            a += i
        if cnt >= 2: 
            res = i
            break
        i = i -1 
    return res
print(max_gcd_pair(q))