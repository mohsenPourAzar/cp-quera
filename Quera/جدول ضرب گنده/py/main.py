number = int(input())
a = 1
while a < number + 1:
	b = 1
	while b < number + 1:
		c = a*b
		print(c, end=" ")
		b += 1
	print()
	a += 1