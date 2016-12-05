import sys

def feynman(n):
	if n == 0:
		sys.exit()

	total = 0
	while n>0:
		total = total + n*n
		n = n-1

	return total

if __name__ == '__main__':
	while True:
		print feynman(int(sys.stdin.readline()))