F = input()
s = ['a','e','i','o','u']
b = []
for i in F:
	for j in s:
		if i == j:
			b.append(1)
print(2**len(b))