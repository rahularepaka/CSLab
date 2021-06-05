<<<<<<< HEAD
import math

user_str = input(str())

n = len(user_str)

a = []


def splitter(n, user_num):
    user_num_str = str(user_num)

    for i in range(0, n, 1):
        x = str(user_num_str[i])
        a.append(x)
        x = 0


def modif():
    new_str = user_str.split(" ")
    new_str.sort(key=len)
    print(*new_str, sep=' ')
    
    
    
modif()
=======
import math

user_str = input(str())

n = len(user_str)

a = []


def splitter(n, user_num):
    user_num_str = str(user_num)

    for i in range(0, n, 1):
        x = str(user_num_str[i])
        a.append(x)
        x = 0


def modif():
    new_str = user_str.split(" ")
    new_str.sort(key=len)
    print(*new_str, sep=' ')
    
    
    
modif()
>>>>>>> b879a55c6679597d955c3b9ccccbe5cb902bb730
