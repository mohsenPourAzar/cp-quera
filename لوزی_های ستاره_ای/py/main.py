# noinspection PyShadowingNames
from math import ceil


# noinspection PyShadowingNames
def star(n):
    yield from range(1, n)
    yield from range(n, 0, -1)


# noinspection PyShadowingNames
def diamond_star(n):
    for j in star(n):
        # noinspection PyTypeChecker
        yield ('*'*(2*j-1)).center(2*n-1)


# noinspection PyShadowingNames
def double_diamond(n, h=2):
    for lines in zip(*(diamond_star(n)for _ in range(h))):
        yield''.join(lines)

n = int(input())

print('\n'.join(double_diamond(ceil(n/2))))