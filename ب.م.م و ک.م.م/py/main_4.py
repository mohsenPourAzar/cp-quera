string = input()
n, m = sorted([int(i) for i in string.split(" ")])

from math import gcd
print(gcd(n, m), (n*m)//gcd(n, m))