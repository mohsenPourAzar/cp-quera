k = int(input())

def class_cod(k):
    i = 1
    n = ''
    while i!=k+1:
        n = n + str(i)
        i = i+1
    print(n[k-1])

class_cod(k)