a = raw_input();
b = raw_input();
a,b = list(a),list(b)
print a
print b
i = j = 0
while(i < len(a) and j < len(b)):
	while(a[i] == 0):
		i += 1
	while(b[j] == 0):
		j += 1
	if(a[i] > b[j]):
		print ">"
		exit()
	elif (a[i] == b[j]):
		if(i+1 == len(a) and j+1 == len(b)):
			print "="
		else:
			i +=1
			j +=1
	else:
		print "<" 
#while(len(a) or len(b)):
