n = int(input())
s = [int(i) for i in input().split()]
a = max(s)
print(s.index(a) + 1)