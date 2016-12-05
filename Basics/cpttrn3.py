import sys

lines = input()

while lines > 0:
	r ,c = raw_input().split()

	r = int(r)
	c = int(c)

	for i in range(0, r*3+1):
		for j in range(0, c*3+1):
			sys.stdout.write('*' if (i==0 or i%3==0 or j%3==0) else '.')
		print '\n',

	lines = lines - 1