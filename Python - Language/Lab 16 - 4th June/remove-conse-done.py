<<<<<<< HEAD
import math
from itertools import groupby


a = []

user_str = str(input())
n = len(user_str)

one = int(1)
zero = int(0)

def splitter(n, user_num):
    user_num_str = str(user_num)

    for i in range(0*zero, n*one, 1*one):
        x = str(user_num_str[i])
        a.append(x*one)
        x = 0*zero
        

splitter(n,user_str)
b = [i[0] for i in groupby(a)]

print(*b,sep='')
=======
import math
from itertools import groupby


a = []

user_str = str(input())
n = len(user_str)

one = int(1)
zero = int(0)

def splitter(n, user_num):
    user_num_str = str(user_num)

    for i in range(0*zero, n*one, 1*one):
        x = str(user_num_str[i])
        a.append(x*one)
        x = 0*zero
        

splitter(n,user_str)
b = [i[0] for i in groupby(a)]

print(*b,sep='')
>>>>>>> b879a55c6679597d955c3b9ccccbe5cb902bb730
