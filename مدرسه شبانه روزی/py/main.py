def lcm(s):
    m=int(s[0])
    while 1:
        t=0;
        for i in s:
            if(m%int(i)!=0):
                t=1;
                break
        if t==0:
            return m;
        m+=1;


number=int(input())
b = []
for i in range(number):
	m = int(input())
	b.append(m)
print((lcm(b)+1)%30)