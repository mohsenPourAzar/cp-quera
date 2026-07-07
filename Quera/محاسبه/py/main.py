m = 4
n = []
while m:
    data_list = [int(x) for x in input().split()]
    a= max(data_list)
    n.append(a)
    m = m-1
max_n = max(n)
max_index = n.index(max_n)
if max_index == 0:
    print(1)
elif max_index == 1:
    print(2)
elif max_index == 2:
    print(3)
else:
    print(4)
  
