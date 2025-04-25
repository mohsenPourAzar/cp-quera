c1 = int(input())
d1 = int(input())
c2 = int(input())
d2 = int(input())
c3 = int(input())
d3 = int(input())
s = []
if d1 <= c1 :
	s.append(d1)
if d2 <= c2:
	s.append(d2)
if d3 <= c3:
	s.append(d3)
if d1 > c1:
	s.append(c1)
if d2 > c2:
	s.append(c2)
if d3 > c3:
	s.append(c3)
print(sum(s))