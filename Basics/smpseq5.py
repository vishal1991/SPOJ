line1 = input()

s = [int(x) for x in raw_input().split()]

line2 = input()

q = [int(x) for x in raw_input().split()]

for x, (i,j) in enumerate(zip(s,q)):
	if i==j:
		print x+1,

