import math
a = float(input())
b = float(input())
c = float(input())

delta = (b**2) - (4*a*c)

if a == 0 and b == 0:
    print("IMPOSSIBLE")
elif a == 0 and c != 0 and b != 0:
    x = -c / b
    print(format(x, ".3f"))
else:
    if delta > 0:
        x1 = (-b + math.sqrt(delta)) / (2 * a)
        x2 = (-b - math.sqrt(delta)) / (2 * a)
        print(format(x2, ".3f"))
        print(format(x1, ".3f"))
    elif delta == 0:
        x = (-b + math.sqrt(delta)) / (2 * a)
        print(format(x, ".3f"))
    else:
        print("IMPOSSIBLE")
