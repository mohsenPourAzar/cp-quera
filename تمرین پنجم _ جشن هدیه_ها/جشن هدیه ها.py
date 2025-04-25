n = int(input())
namelist = []
for i in range(n):
    namelist.append(input())
money0 = []
money1 = []
money2 = []
for i in range(n):
	name = input()
	M,K = input().split()
	m = int(M)
	money0.append(name + ' ' + str(m))
	k = int(K)
	for i in range(k):
		gift_name = input()
		if m == 0:
			S = 0
		else:
			S = int(m / k)
		s1 = gift_name + ' ' + str(S)
		money2.append(s1)
	if k == 0:
		w = name + ' ' + str(k)
		money1.append(w)
		
	else:
		B = int(m % k)
		b1 = name + ' ' + str(B)
		money1.append(b1)
#***********************************************
lastmoney = []

for m01 in namelist:
	for m1 in money1:
		if str(m01) in str(m1[0:m1.index(' ')]):
			for m0 in money0:
				if str(m0[0:m0.index(' ')]) in str(m1[0:m1.index(' ')]):
					v = []
					for m2 in money2:
						if str(m1[0:m1.index(' ')]) in str(m2[0:m2.index(' ')]):
							c = int(m2[m2.index(' ')::])
							v.append(c)
							continue
					b = sum(v) - int(m0[m0.index(' ')::]) + int(m1[m1.index(' ')::])
					lastmoney.append(b)

#***********************************************

for n in range(n):
	print('{} {}'.format(namelist[n],lastmoney[n]))
	