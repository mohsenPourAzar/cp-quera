s=int(input())
z = []
z.append(s)
x = 0
while s != 1 and x==0 :
	if s %2 == 0:
		s = int(s/2)
	else:
		s =s* 3
		s = int(s + 3)
	for i in range(len(z)):
		if z[i] == s:
			x = 1
	z.append(s)
if s == 1:
	print('Yes')
else:
	print('No')