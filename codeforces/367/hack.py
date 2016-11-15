import os
import __future__
f = open('lol.txt', 'w')

for i in range(100000/3):
	a = 100000/3-i
	f.write(str(a)+" ")

f.close()