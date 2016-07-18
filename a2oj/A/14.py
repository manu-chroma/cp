from sys import stdin, stdout
a = stdin.readline().rstrip()	
a = a.replace('WUB', ' ').split(' ')
s = ''
for i in range(len(a)):
	s = s+a[i]
print(s)
	
