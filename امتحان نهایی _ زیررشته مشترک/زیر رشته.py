t = int(input())
strings = []
for i in range(t):
	st = input()
	strings.append(st)

#char_sets = [{*s} for s in strings]
#result_set = char_sets[0]
#for char_set in char_sets[1:]:
#    result_set.intersection_update(char_set)
#print(''.join(sorted(list(result_set))))

common = "".join(p for p,*r in zip(*strings) if all(p==c for c in r))

print(common) # ap

t = int(input())
strlist = []
for i in range(t):
	st = input()
	strlist.append(st)

for i in range(len(strlist)-1):
	com_str = ''.join(set(strlist[i]).intersection(strlist[i+1]))


print(com_str)
