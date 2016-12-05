import sys

lines = input()

while lines > 0:
	
	l, c, h, w = [int(x) for x in raw_input().split()]

	length = w + (c*(w+1))
	width = h+ (l*(h+1))

	for i in range(length+1):
		for j in range(width+1):
			
			if (i%(h+1)==0):
				if (j%(w+1)==0):
					sys.stdout.write('+')
				else:
					sys.stdout.write('-')
			elif (j%(w+1)==0):
				sys.stdout.write('|')
			else:
				sys.stdout.write('.')
		sys.stdout.write('\n')



	lines = lines - 1