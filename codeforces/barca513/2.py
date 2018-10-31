def count_sum(num):
    ans = 0
    while num > 0:
        digit = num % 10
        ans += digit
        num /= 10
        num = int(num)
        
    return ans 

num_str = input()

target_nos = int( '0' + ('9' * (len(str(num_str)) - 1)))

other_nos = int(num_str) - target_nos

ans = count_sum(target_nos) + count_sum(other_nos)
print(ans)

