k = int(input())

k1 = input()

S = []
for v in range(k):
	k2 = input()
	j = k1[v]
	for i in k2:
		if i == j:
			S.append(k2.index(j))
			break
d = 0
for t in S:
	if t <5:
		d += t
	else:
		d += (9 - t)
print(d)