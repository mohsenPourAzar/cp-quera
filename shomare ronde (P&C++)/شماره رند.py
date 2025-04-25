import collections

t = int(input())

s = []
l = []
while t:
    n = input()
    s.append(n)
    #**************************************
    
    # AddTekrari
    g = []
    for j in n:
            g.append(j)
    x = [item for item, count in collections.Counter(g).items() if count >= 4]
    #***************************************
    
    # BarAx
    for i in s:
        m = i[::-1]
    #*****************************************
        
    # AddMotevali
    r = []
    z = []
    for h in n:
        r.append(int(h))
    for d in range(len(r)-2):
        if (r[d] == r[d+1]) and (r[d+1] == r[d+2]):
            z.append(r[d])
        
        
    #*****************************************
    
    # Check
    if (len(x) >= 1) or (i == m) or (len(z) >= 1) :
        l.append(1)
    else:
        l.append(0)
    
    t = t-1


for f in l:
    if f == 1:
        print("Ronde!")
    else:
        print("Rond Nist")



                   


