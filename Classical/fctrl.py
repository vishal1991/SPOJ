lines = input()

while lines > 0:

	n = input()

	sum = 0
	c = 1

	while True:
		r = n/(5**c)
		if r == 0:
			break
		sum = sum + r
		c = c + 1

	print sum

	lines = lines - 1 