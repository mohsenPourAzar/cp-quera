import math

s = input()

for i in s:
    if i == 'e':
        l1 = (s[0:s.index('e')])
        l2 = (s[s.index('e')+1:len(s)+1])
        break

for item in l1:
    if item == '.':
        b1 = float(l1)
        if len(str(b1)) == 4:
            r = str(int(b1*100))+(int(l2)-2)*'0'
        elif len(str(b1)) == 5:
            r = str(int(b1*1000))+(int(l2)-3)*'0'
        elif len(str(b1)) == 6:
            r = str(int(b1*10000))+(int(l2)-4)*'0'
        elif len(str(b1)) == 7:
            r = str(int(b1*100000))+(int(l2)-5)*'0'
        elif len(str(b1)) == 8:
            r = str(int(b1*1000000))+(int(l2)-6)*'0'
        else:
            r = str(int(b1*10))+(int(l2)-1)*'0'
        break
else:
    if len(l2) < 5:
        b1 = int(l1)
        r = str(b1)+int(l2)*'0'

if len(l2) < 7:
    d = []
    for p in r:
        if 0 == int(p) or 6 == int(p) or 9 ==int(p):
            d.append(6)
        elif 1 == int(p):
            d.append(2)
        elif 2 == int(p) or 3 == int(p) or 5 == int(p):
            d.append(5)
        elif 4 == int(p):
            d.append(4)
        elif 7 == int(p):
            d.append(3)
        else:
            d.append(7)
        t = 0
    for h in d:
        t = t + h
    print(t)
else:
    powers = {'0':6,'1':2,'2':5,'3':5,'4':4,'5':6,'6':6,'7':3,'8':7,'9':6,}
    power = 0
    for c in l1:
         power = power + powers[c]
    power = power + int(l2) * powers['0']
    print(power)