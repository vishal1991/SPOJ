lines = input()

while lines > 0:

	n = input()
	f = 1

	while n > 0:
		f = f*n
		n = n - 1

	print f

	lines = lines - 1