dig={0: '0', 1: '1', 2: '2', 3: '3', 4: '4', 5: '5', 6: '6', 7: '7', 8: '8', 9: '9', 10: 'A', 11: 'B', 12: 'C', 13: 'D', 14: 'E', 15: 'F', 16: 'G', 17: 'H', 18: 'I', 19: 'J'}

a=input()
b=int(input())
c=int(input())


d=0
for i in range(len(a)):
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
s = f[::-1]

if s == f:
    print("YES")
else:
    print("NO")        
