st = ''
while (st != '.'):
	try:
		st, n = raw_input().split()
		n = int (n)
		t =''
		for i in range(n):
			t = t+st
		print t + 'printing t'
		l = len(t)
		num = len(st)

		for i in range(0,num):
			string = t[i:l] + t[0:i] 
			print string

	except:
		break