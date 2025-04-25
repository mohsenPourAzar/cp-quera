x = int(input())

z = 1
for y in range(x, 10**100):
    if (2**z) < x:
        z += 1
    elif 2**z > x:
        print(2**z)
        exit()
