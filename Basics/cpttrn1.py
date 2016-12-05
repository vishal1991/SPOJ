import sys

lines = input()

while lines > 0:
	rows, columns = raw_input().split()

	for i in range(int(rows)):
		for j in range (int(columns)):
			sys.stdout.write ('*' if (i+j)%2==0 else '.')
		print '\n',
	lines = lines - 1