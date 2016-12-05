import sys

lines = input()

while lines > 0:
	l, c, h, w = raw_input().split()

	l = int(l)
	c = int(c)
	h = int(h)
	w = int(w)

	h = h+1
	w = w+1

	r = h*l + 1
	c = w*c + 1

	for i in range(r):
		for j in range(c):
			sys.stdout.write('*' if (i%h==0 or j%w==0) else '.')
		print '\n',

	lines = lines - 1

