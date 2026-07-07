string = input()
n, m = sorted([int(i) for i in string.split(" ")])

n1, m1 = n, m
while m > 0:
    #print(m, n)
    b = n % m
    n = m
    m = b
print(n, n1 * m1//n)