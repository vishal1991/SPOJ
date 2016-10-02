i = input()
t=1
while (t<=i):
	n,st = raw_input().split()

	n = int(n)

	n = n-1

	if (n>0):
		print str(t) + ' ' + st[0:n] + st[n+1:]
	else:
		print str(t) + ' ' +  st[1:]
	t=t+1