import sys

def nsteps(x,y):

 	n=-1
 	if x == y or x-2 == y:
	 	if x%2 == 0:
	 		n = x+y
	 	else:
	 		n = x+y - 1
		
	if n<0:
		return 'No Number'
	else:
		return n


if __name__ == '__main__':
	lines = input()
	while lines > 0:
		x, y = [int(x) for x in raw_input().split()]
		print nsteps (x,y)
		lines = lines - 1


