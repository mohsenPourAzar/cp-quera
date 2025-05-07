n = input()
number = int(n)
reverse_num = 0
while number > 0:
    temp = number % 10
    reverse_num = reverse_num * 10 + temp
    number = number // 10
v = str(reverse_num)
if v != n:
    print("NO")
else:
    print("YES")