n = int(input())
data_list = [int(x) for x in input().split()]
data_list.append(n)
print(max(data_list))