# noinspection PyShadowingNames
def nearestFibonacci(number):
    # Base Case
    if number == 0:
        print(0)
        return
    f = 0
    s = 1
    t= f + s
    while t <= number:
        f = s
        s = t
        t = f + s
    if abs(t - number) >= abs(s - number):
        ans = s
    else:
        ans = t
    return ans

def the_fiboonacci(N: int):
    f3 = 0
    f1 = 1
    f2 = 1
    count = 0
    if N == 1:
        count += 0
    else:
        while f3 < N:
            f3 = f1 + f2
            f2 = f1
            f1 = f3
            count+=1
        if f3 == N:
            pass
    return count

number = int(input())
number_2 = number
fibbonachi = []

while number != 0:
    near = nearestFibonacci(number_2)
    if number_2 - near < 0:

        number_2 -= 1
        pass
    else:
        fibbonachi.append(near)
        number = number - near
        number_2 = number

result = []
c = 0
for i in fibbonachi:
    result.append(the_fiboonacci(i)+1)
for i in result:
    result[c] = str(i)
    c+=1
print(' '.join(result))