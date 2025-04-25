n = int(input())
A = []
for i in range(n):
	a = list(map(int,input().strip().split()))[:n]
	A.append(a)
 
def s(a):
    return a[0] if len(a) == 1 else [*a.pop(0)
										 , *[elem.pop() for elem in a]
										 , *a.pop()[::-1]
										 , *[elem.pop(0) for elem in a[::-1]]]+ s(a) if len(a) else []
def is_square(x):
    return x**.5 % 1 == 0

S = s(A)
d = 0
v = 0
for h in range(len(S)):
	d += S[h]
	if is_square(d):
		v += 1
print(v)
	