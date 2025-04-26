s = input()
print(s)

for i in range(1, len(s)):
	a = s[i] * i
	b = s[i:]
	print(a + b)