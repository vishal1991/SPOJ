import sys

if __name__ == '__main__':
	while True:
		
		sum=0
		total = int(sys.stdin.readline())

		if total == -1:
			sys.exit()

		list = []
		for _ in range(total):
			a = int(sys.stdin.readline())
			sum = sum + a
			list.append(a)

		if sum%total == 0:
			x = sum/total
			c = 0
			for i in list:
				if i > x:
					c = c + (i-x)
			print c

		else:
			print '-1'



