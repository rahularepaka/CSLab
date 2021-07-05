import math

n = int(input())

length = (math.log10(n)) + 1

last = n%10

n_str = str(n)
first = int(n_str[0])

temp = first
first = last
last = temp

n_last = n%10
n_last = n/10
n_last = int(n_last)
n_last_str = str(n_last)

print(str(first)+n_last_str[1:]+str(last))