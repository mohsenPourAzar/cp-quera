import math

n = int(input())
def calculate_nCr(n, r):
 return math.factorial(n) // (math.factorial(r) * math.factorial(n - r))
A = 0
for i in range(1,n+1):
	a = 1
	for h in range(1,i+1):
		a *= calculate_nCr(i, h)
	A += a

print(A)