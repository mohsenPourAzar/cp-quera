n = int(input())

x = 0
y = 0
for i in range(2,n+1):
	b =int(i % 4)
	if b == 2:
		x = -x + 1
		
	elif b == 3:
		y = -y + 1
		
	elif b == 0:
		x = -x
		
	elif b == 1:
		y = -y
		
print(x,y)