import math
n = int(input())
m = input()+'O'

k = ''
g = ''
for i in m:
	if i == 'O':
		k += i
	if i == 'I':
		g += i
T = (n * 2) - len(m)
O = n - len(k)
I = n - len(g)
res = math.factorial(T) // (math.factorial(O)*math.factorial(I))

print(res)
