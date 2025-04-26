number = str()
for x in range(1,5000) :
    number = number + str(x)

k = int(input())
#print(number)
print(number[k-1])