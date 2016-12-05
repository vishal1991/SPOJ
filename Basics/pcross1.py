import sys

lines = input()

while lines > 0:

	m, n, ci, cj = [int(x) for x in raw_input().split()]

	for i in range(m):
		for j in range(n):
			if (i == ci-1 or j == cj-1):
				sys.stdout.write('*')
			else:
				sys.stdout.write('.')
		sys.stdout.write('\n')

	lines = lines - 1