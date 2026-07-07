m = int(input())
b = 8
c = ((b*m)//2)
print(4*m*' '+'*')
for i in range(1,m+1):
	for j in range(1,4):
		c -= 1
		x = c*' '+'*'+(2*j-1)*' '+'*'
		if i >1:
			xn = (i-1)*((6-(2*j-1))*' '+'*'+(2*j-1)*' '+'*')
			print('{}{}'.format(x,xn))
		else:
			print(x)
	c -= 1
	print(c*' '+(b*i+1)*'*')