import numpy as np 
def generate_primes(n, k1):
    is_prime = np.ones(n+1,dtype=bool)
    is_prime[0:2] = False
    for i in range(int(n**0.5)+1):
        if is_prime[i]:
            is_prime[i**2::i]=False
    a = np.where(is_prime)[0]
    dlist = []
    for d in a:
        if len(str(d)) == int(k1):
            dlist.append(d)
    return dlist

def primeCheck(n):
    if n==1 or n==0 or (n % 2 == 0 and n > 2):
        return False
    else:
        for i in range(3, int(n**(1/2))+1, 2):
            if n%i == 0:
                return False
        return True
    
    
k = int(input())
k1 = str(k)
total_list = generate_primes(10**k,k1)
plist = []
for l in total_list:
    cheklist = []
    for b in range(1,k):
        a = int(l/(10**b))
        if primeCheck(a) == True:
            cheklist.append(1)
    if len(cheklist) == k-1:
        plist.append(l)
for d in plist:
    print(d)
