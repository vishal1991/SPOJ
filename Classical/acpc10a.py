import sys

def next(a,b,c):
	if a==b==c == 0:
		sys.exit()
	
	x = 0

	if b-a == c-b:
		x = b-a
		return 'AP '+ str(c+x)

	if b/a == c/b:
		x = b/a
		return 'GP '+ str(c*x)

if __name__ == '__main__':
	while True:
		a,b,c = [int(x) for x in sys.stdin.readline().split()]
		print next(a,b,c)
