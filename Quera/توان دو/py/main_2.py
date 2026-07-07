n = int(input())
adad = 1
i = 0
j = 0
while i < n:
    while j < i:
        adad *= 2
        j += 1
    if n < adad:
        print(adad)
        break
    i += 1