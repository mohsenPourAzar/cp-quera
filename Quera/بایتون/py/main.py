Q1 = []
v = 0
A = 0
B = 0
while True:
	ALL = input()
	for i in ALL:
		if '=' in i:
			if ALL[0] == 'A' :
				A = int(ALL[-1])
			v += 1
			break
	else:
		if ALL != '-----':
			Q1.append(ALL[ALL.index('(')+1:ALL.index(')')])
	
	if ALL in '-----':
		B = int(input())
		break
C = A + B
print(Q1[0])
print(C ,2)
print(v)


