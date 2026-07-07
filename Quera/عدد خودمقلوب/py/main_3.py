def add(n):
    m = n[::-1]
    return m   
n = input()
b = add(n)
if n == b:
    print("YES")
else:
    print("NO")
