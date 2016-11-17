cord = int(raw_input())
steps = 0
steps = cord/5
rem = cord%5
if(rem!=0):
	steps+=1
print steps