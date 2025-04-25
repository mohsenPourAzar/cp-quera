n = int(input())


# noinspection PyShadowingNames
def square(n):
    print(n * '*')
    for i in range(n-2):
        print('*' + (n-2) * ' ' + '*')
    print(n * '*')

square(n)