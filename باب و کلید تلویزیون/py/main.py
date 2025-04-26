n, x, k = [int(u) for u in input().split()]

D = []
for i in range(1,n+1):
	D.append(input())
	
for i in range(k):
    if x < n :
        x+=1
    elif x==n:
        x=0
        x+=1
#print((x + k) % n)
print(D[x-1])