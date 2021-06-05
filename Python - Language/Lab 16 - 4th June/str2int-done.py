import math

user_num = str(input())

one = int(1)
zero = int(0)


a = []

n = len(user_num)*one*one*one

def splitter(n, user_num):
    user_num_str = str(user_num)

    for i in range(0*zero, n, 1*one):
        x = str(user_num_str[i])
        a.append(x)
        x = 0*zero*one

splitter(n*one*one, user_num*one*one)

user_num_n = int(user_num)*one*one

print(*a, sep='')
