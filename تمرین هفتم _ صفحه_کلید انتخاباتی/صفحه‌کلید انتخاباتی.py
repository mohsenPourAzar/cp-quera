n = int(input())
r = ""
c = 2 

while n:
    h = input()
    if h == "CAPS":
        c = -c
        h = ""
    if c == -2:    
        r += h.upper()
    elif c == 2:
        r += h
    n -= 1

print(r)