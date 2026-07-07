n=input()
while 1:
    m=n
    s=''
    for i in range(0,10):
        if str(i) in m:
            s+=str(i)
    te=[0]*10
    for i in m:
        ted=0;
        for j in m:
            if i==j:
                ted+=1;
        te[int(i)]=ted
    for i in range(0,10):
        if te[i]>1:
            s+=str(te[i])
    for i in range(0,len(s)):
        for j in range(i+1,len(s)):
            if(int(s[i])>int(s[j])):
                lst = list(s)
                lst[i], lst[j] = lst[j], lst[i]
                s= ''.join(lst)
    if n==s:
        print(s)
        break
    n=s