from math import sqrt


def func_sum(n):
    funcsum = 0
    for sum in str(n):
        funcsum = funcsum + int(sum)
    return funcsum
def prime_a(k):
    if k <= 1:
        return False
    if k <= 3:
        return True
    if k % 2 == 0 or k % 3 == 0:
        return False
    for j in range(5, int(sqrt(k) + 1), 6):
        if k % j == 0 or k % (j + 2) == 0:
            return False

    return True


# noinspection PySimplifyBooleanCheck
def n_p(z):
    if z <= 1:
        return 2
    prime = z
    found = False
    while not found:
        prime = prime + 1

        if prime_a(prime) == True:
            found = True

    return prime
n1 = int(input())
n2 = func_sum(n1)
prim_list = []

while len(prim_list) != n2:
    n3 = n_p(n1)
    n1 = n3
    prim_list.append(n3)
print(prim_list[-1])