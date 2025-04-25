s = input()
p = []
for i in range(len(s)):
	if s[i] == '=':
		if len(p):
			p.pop()
	else:
		p.append(s[i])
s = ''
for i in p:
	s += i
print(s)