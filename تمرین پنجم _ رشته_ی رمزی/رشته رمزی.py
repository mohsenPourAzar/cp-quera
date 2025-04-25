A = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
     'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
n = int(input())
k = int(input())
s = input()
h = []
h.append(str(s))
def lastTOfirst(s):
    e = s[-1]
    t = e + s[0:-1]
    return t

def replace(t):
    g = []
    for i in t:
        for j in A:
            if i == j:
                
                if i == 'z':
                    g.append(A[0])
                else:
                    g.append(A[A.index(j)+1])
    f=''
    for c in g:
        f = f + c
    h.append(f)
for g in range(k):
    a = lastTOfirst(h[g])
    replace(a)
print(h[-1])