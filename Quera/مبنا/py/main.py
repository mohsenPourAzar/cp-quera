a1 ,c1 = input().split()
a = str(a1)
c = int(c1)
b = 10
dig={0: '0', 1: '1', 2: '2', 3: '3', 4: '4', 5: '5', 6: '6', 7: '7', 8: '8', 9: '9', 10: 'A', 11: 'B', 12: 'C', 13: 'D', 14: 'E', 15: 'F', 16: 'G', 17: 'H', 18: 'I', 19: 'J'}
d=0
for i in range(len(str(a))):
    for fv in dig:
        if dig[fv]== a[::-1][i]:
            d+= fv * (b ** i)

if a == '0':
    f = 0
else:
    f = ""
    while d > 0:
        f += dig[d % c]
        d = int(d / c)
        
result = f[::-1]

s=[]
for i in str(result):
    s.append(int(i))
    
ls = len(s)
d = []
def evenodd(s, ls):
    e = 0
    o = 0
    for i in range(ls):
        if i % 2 ==0:
            e += s[i]
            
        else:
            o += s[i]
    d.append(e)
    d.append(o)

evenodd(s, ls)

if int(d[0]) == int(d[1]):
    print("Yes")
else:
    print("No")