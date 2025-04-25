sum = 0
count = 0
n = int(input())

for i in range(1,n+1):
    for j in range(1,i+1):
        if i % j == 0:
            sum += j
            count +=1
            
print(count, sum)