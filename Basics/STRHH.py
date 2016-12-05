lines = input()

while lines > 0:
	sting = raw_input()
	l = len(sting)
	sting = sting[:l/2]
	print sting[0::2]
	lines = lines -1
