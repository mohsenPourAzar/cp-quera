num_input = input().split()
a11 = int(num_input[0])
a22 = int(num_input[1])
a33 = int(num_input[2])
A = []
for i in range(a11):
	a = list(map(int,input().strip().split()))[:a22]
	A.append(a)	
B = []
for j in range(a22):
	b = list(map(int,input().strip().split()))[:a33]
	B.append(b)
	
res = [[0 for x in range(a33)]for y in range (a11)]

for v in range(a11):
	for j in range(a33):
		res[v][j] = 0
		for x in range(a22):		
			res[v][j] += (A[ v][x] *B[ x][j])		
for i in res:
	for h in i:
		print(h,end=' ')
	print()
		