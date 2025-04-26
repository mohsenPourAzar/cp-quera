import math

num1,num2 = input().split(" ")
num1 = int(num1)
num2 = int(num2)

bbm = math.gcd(num1, num2)



result_kmm = (num1 * num2) // bbm

print(bbm,int(result_kmm))