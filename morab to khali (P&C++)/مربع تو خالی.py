def draw(b , d) :
    for i in range(1,b +1) :
        s = ''
        for j in range(1,b +1) :
            if i <= (b - d)/2  or (b - d)/2 + d < i :
                s = s + '* '
            else :

                if j <= (b - d)/2  or (b- d)/2 + d< j  :
                    s = s + '* '
                else :
                    s = s + '  '
        print(s)


a = int(input())
b = int(input())

if a <= b :
    print("Wrong order!")
else :
    if (a - b) % 2 != 0 :
        print("Wrong difference!")
    else :
        draw(a, b)