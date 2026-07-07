k = int(input())
n = 1
def func(x):
    counter = 0
    for i in range(1, x+1):
        if x % i == 0:
            counter = counter+1
    return counter
while n:
    good = int((n*(n+1))/2)
    if func(good) >= k:
        print(good)
        break
    n = n + 1
