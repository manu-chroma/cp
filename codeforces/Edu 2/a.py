import re
line = raw_input();
field = re.split(r'(;|,|\s)\s*', line);
print field;
print '"'
#for i in range(len(field))
for i in enumerate(field):
	if field[i].isdigit():
		print field[i]
print '"\n"'

for i in enumerate(field): 
	if field[i] == ' ':
		print ";;"
	if field[i].isdigit() == False:
		print field[i]

 


