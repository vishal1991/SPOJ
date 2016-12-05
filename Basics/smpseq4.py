line1 = input()

p = [int(x) for x in raw_input().split()]

line2 = input()

q = [int(x) for x in raw_input().split()]

x = set(p).intersection(q)

x = sorted(x)

for i in x: print i,
