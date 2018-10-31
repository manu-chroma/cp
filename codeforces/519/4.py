from difflib import SequenceMatcher
import sys


# i/o
lines = sys.stdin.readlines()

n, m = map(int, lines[0].split())
sus = []

for i in lines[1:]: 
    i = i.strip()
    sus.append(list(map(int, i.split(' '))))

# use first string as the start of matcher
# and then match against it
ans = 0
extra_len = 0
neg_counter = n + 3

if m == 1:
    c_len = len(sus[0])
    ans = int((c_len * (c_len+1)) / 2)
    print(ans)
    exit(0)

while True:

    common_string = sus[0]

    store = []

    # find similar portions
    # in all strings
    for i in range(0, m):
        match = SequenceMatcher(None, common_string, sus[i])  \
            .find_longest_match(0, len(common_string), 0, len(sus[i]))
        common_string = common_string[match.a: match.a + match.size]
        
        # store [a,b] for sus[i] in a separate array
        store += (match.b, match.size)

    # print('common string: {}'.format(common_string))
    
    if len(common_string) <= 1:
        break 

    c_len = len(common_string)
    
    # how to improve this?
    # remove the given chunk from the string
    for i in range(0, m):
        match = SequenceMatcher(None, common_string, sus[i])  \
            .find_longest_match(0, len(common_string), 0, len(sus[i]))
        
        # replace with different digit
        for j in range(match.b, match.b + match.size):
            sus[i][j] = neg_counter

        neg_counter += 1
    
    extra_len += c_len

    # print('c_len: {}'.format(c_len))
    # print('common string: {}'.format(common_string))
    ans += int((c_len * (c_len+1)) / 2)

ans += n
ans -= extra_len
print(ans)