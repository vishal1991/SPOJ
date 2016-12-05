from sets import Set
import sys

line1 = input()
m = raw_input()
line2 = input()
q = raw_input()

list1 = m.split()

newlist1 = list(map(int, list1))

list2 = q.split()

newlist2 = list(map(int, list2))

a = set(newlist1).difference(set(newlist2))

for i in a:
	print i,