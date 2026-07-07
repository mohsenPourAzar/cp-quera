import math

Vx, Vy, Y0, h = input().split()
Vx = float(Vx)
Vy = float(Vy)
Y0 = float(Y0)
h = float(h)

delta = ((Vy**2) + (20*(Y0-h)))

if delta > 0:
	t1 = float((-Vy+math.sqrt(delta)) / -10)
	t2 = float((-Vy-math.sqrt(delta)) / -10)
	if t1 > 0 :
		R = float(t1*Vx)
		print(f'{R:.2f}')
	if t2 > 0:
		R = float(t2*Vx)
		print(f'{R:.2f}')
	if t1 < 0 and t2 < 0:
		print("impossible")
elif delta == 0:
	t = float(-Vy / -10)
	if t > 0:
		R = float(t*Vx)
		print(f'{R:.2f}')
	else:
		print("impossible")
else:
	print("impossible")