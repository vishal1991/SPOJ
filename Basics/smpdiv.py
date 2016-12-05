

lines = input()

while lines > 0:
	n, x, y = raw_input().split()

	n = int(n)
	x = int(x)
	y = int(y)

	for i in range(n):
		if i%x == 0 and i%y != 0:
			print i,

	lines = lines - 1
