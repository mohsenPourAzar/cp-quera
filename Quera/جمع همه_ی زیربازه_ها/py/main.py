n = int(input())

a = list(map(int,input().strip().split()))[:]

D = 0
for h in range(n):
	i = a[h]
	D += i
print(D)