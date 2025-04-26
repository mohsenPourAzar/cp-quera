t = int(input())

for i in range(t):
	q = 0
	m = int(input())
	for j in range(m,0,-1):
		c = sum(int(digit) for digit in str(j))
		if j + c == m:
			q +=1
			break
	if q != 0:
		print('Yes')
	else:
		print('No')
