import sys

lines = input()

while lines > 0:

	m, n, ci, cj = [int(x) for x in raw_input().split()]

	sum = ci+ cj
	res = ci -cj

	for i in range(1, m+1):
		for j in range(1, n+1):
			if (i+j==sum or i-j==res):
				sys.stdout.write('*')
			else:
				sys.stdout.write('.')
		sys.stdout.write('\n')
		


	lines = lines - 1