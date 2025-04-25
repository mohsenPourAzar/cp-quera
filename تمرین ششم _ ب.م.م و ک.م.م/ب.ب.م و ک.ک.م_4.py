string = input()
n, m = sorted([int(i) for i in string.split(" ")])

bmm = 1
for i in range(m, 0, -1):
    if n % i == 0 and m % i == 0:
        bmm = i
        break
kmm = m
while True:
   if kmm % m == 0 and kmm % n == 0:
       break
   kmm += 1
print(bmm, kmm)