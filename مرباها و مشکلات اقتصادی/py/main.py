n, k = [int(i) for i in input().split()]
v = [int(i) for i in input().split()]
sv = sum(v)

print(n - (- (-sv // k)))