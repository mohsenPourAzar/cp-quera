number = int(input())
result = 0
for item in range(1, number):
    if number % item == 0:
        result += item
if result == number:
    print("YES")
else:
    print("NO")