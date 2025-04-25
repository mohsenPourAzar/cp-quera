def c_n(x, n):
    if x > n :
        return 0
    x = 1 + c_n(x * 10, n) +c_n(x * 10 + 1, n)
    return x

print(c_n(1, int(input())));
