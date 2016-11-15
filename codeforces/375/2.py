a = raw_input()
import re
a = re.split('[_]', a)

for i in range(a):
	b = a.split(')')