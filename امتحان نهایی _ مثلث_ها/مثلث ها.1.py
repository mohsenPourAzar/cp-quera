t = int(input())
V = []
for i in range(t):
	x1,y1= map(float, input().split())
	x2,y2 = map(float, input().split())
	x3,y3 = map(float, input().split())
	xp,yp = map(float, input().split())
	c1 = (x2-x1)*(yp-y1)-(y2-y1)*(xp-x1)
	c2 = (x3-x2)*(yp-y2)-(y3-y2)*(xp-x2)
	c3 = (x1-x3)*(yp-y3)-(y1-y3)*(xp-x3)
	if (c1<=0 and c2<=0 and c3<=0) or (c1>0 and c2>0 and c3>0):
		V.append(1)
	else:
		V.append(0)
for i in V:
	if i == 1:
		print("YES")
	else:
		print("NO")