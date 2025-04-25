st = [i for i in input().split()]


b = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
a = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' ''1', '2', '3', '4', '5', '6', '7', '8', '9']
c = ''
for i in range(len(st)):
	if b.count(st[i])==1:
		c += a[b.index(st[i])]
	else:
		if a.count(st[i])==1:
			c += st[i]

q = 1
while len(c) != 0:
	if len(c)==1:
		break
	if len(c)==2:
		if c[0] == c[1]:
			break
		q = 0
		break
	if c[0]==c[-1]:
		c = c[1:-1]
	else:
		q = 0
		break
if q == 0:
	print('NO')
else:
	print('YES')