lines = input()

while lines > 0:
	a, b = [float (x) for x in raw_input().split()]
	'{0:g}'.format(float(a+b))
	print a+b
	lines = lines - 1