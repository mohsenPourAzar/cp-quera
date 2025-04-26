l, r, d = [int(i) for i in input().split()]
D = []
def f(a,d):
	if a > d:
		D.append(a)
	if a % 2 == 0:
		a = int(a /2)
	else:
		a = a + d
	if a > d:
		
		return f(a,d)
	else:
		return a
for i in range(l,r+1):
	f(i,d)
print(len(set(D)))
	