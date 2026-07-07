import math
x = int(input())
n = int(input())

y=0
for i in range(0,n):
    y = y + (x**i)/math.factorial(i)
print(format(y,'.3f'))
