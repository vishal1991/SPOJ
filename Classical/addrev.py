lines = input()

while lines > 0:

	m, n = raw_input().split()

	m = m[::-1]

	n = n[::-1]

	x = int(m) + int(n)

	x = str(x)

	x = int(x[::-1])

	print x

	lines = lines - 1