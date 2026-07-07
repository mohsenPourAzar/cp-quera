n = int(input())

list_chap = []

for i in range(int(n)) :
    operator = input()
    s = input()
    s = list(s)
    if operator == "1" : #compress
        for i in range(len(s)) :
            counter = 1
            for j in range(i+1,len(s)) :
                if s[i] == "" :
                    continue
                if s[i] == s[j] :
                    counter += 1
                    s[j] = ""
                else :
                    break
            if counter > 1 :
                s[i] = s[i] + str(counter)
        list_chap.append("".join(s))
    elif operator == "2" : #extend
        s = list(s)
        for i in range(len(s)) :
            if s[i].isdigit() :
                for x in range(i+1,len(s)) :
                    if s[x].isdigit() :
                        s[i] = s[i] + s[x]
                        s[x] = ""
                    else :
                        break
        for i in range(len(s)) :
            if s[i].isdigit() :
                    s[i - 1] = s[i - 1] * int(s[i])
                    s[i] = ""
        list_chap.append("".join(s)) 

for x in list_chap :
    print(x)