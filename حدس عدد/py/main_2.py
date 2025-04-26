import numpy
q = int(input())
x = [int(i) for i in input().split()]

def findCount(m, n):
 
    # Generating largest number of m digit
    num1 = 0
     
    for i in range(0, m):
        num1 = (num1 * 10) + 9
 
    # Generating largest number of m-1 digit
    num2 = 0
     
    for i in range(0, (m - 1)):
        num2 = (num2 * 10) + 9
 
    # returning number of dividend
    return int((num1 / n) - (num2 / n))
 
 
if 1 == x[0]:
	print(1000)
else:
	print(findCount(3, numpy.prod(x)))