import sys

lines = input()

while lines > 0:

	row, col = raw_input().split()
	row = int (row)
	col = int (col)
	for i in range(row):
		for j in range(col):
			sys.stdout.write('*' if (i ==0 or j ==0 or i == row-1 or j == col-1) else '.')
		print '\n',

	lines = lines -1 