n = int(input())

ls = 0
ts = 0
c = 0
for i in range(1, n+1):
	ts = int(input())
	if i == 1:
		ls = ts
	elif i > 1 and ls != ts :
		ls = ts
		c += 1
print(c)