def add(n):
    for x in n :
        p = ""
        for i in range(0 , int(x)) :
            p = p + str(x)
        print("{0}: {1}".format(x,p))
n = input()
add(n)