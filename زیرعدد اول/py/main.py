def prime(add):
    t=True
    i=2;
    while i<=add**.5:
        if(add%i==0):
            t=False
            break
        i+=1
    return t
n=int(input())
a=[2,3,5,7]
n-=4
j=2;
while n>0:
    i=0
    b=[]
    while i<len(a):

        add=a[i]
        add*=10
        if(prime (add+1)):
            b.append(add+1)
        if(prime (add+3)):
            b.append(add+3)
        if(prime (add+7)):
            b.append(add+7)
        if(prime (add+9)):
            b.append(add+9)
        i+=1 
    a=b.copy()
    n-=len(a)
    j+=1
n+=len(a)-1
print(a[n])