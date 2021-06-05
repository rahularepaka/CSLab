<<<<<<< HEAD
import math

user_num = int(input())


sumfind = int(0)


a = []
b = []


def splitter(n, user_num):
    user_num_str = str(user_num)

    for i in range(0, n, 1):
        x = int(user_num_str[i])
        a.append(x)
        x = 0


def das_finder():
    for i in range(0, size, 1):
        b.append(a[i]**(i+1))

    if(sum(b) == user_num):
        print(1)
    else:
        print(0)


if(user_num != 0):
    size = int(math.log10(user_num)+1)
    splitter(size, user_num)
    das_finder()

else:
    print(1)
=======
import math

user_num = int(input())


sumfind = int(0)


a = []
b = []


def splitter(n, user_num):
    user_num_str = str(user_num)

    for i in range(0, n, 1):
        x = int(user_num_str[i])
        a.append(x)
        x = 0


def das_finder():
    for i in range(0, size, 1):
        b.append(a[i]**(i+1))

    if(sum(b) == user_num):
        print(1)
    else:
        print(0)


if(user_num != 0):
    size = int(math.log10(user_num)+1)
    splitter(size, user_num)
    das_finder()

else:
    print(1)
>>>>>>> b879a55c6679597d955c3b9ccccbe5cb902bb730
