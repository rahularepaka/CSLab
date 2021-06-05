<<<<<<< HEAD
# Write your code here...
import math

a = []


one = int(1)
zero = int(0)

user_num = int(input())

size = int(math.log10(user_num)+1)*one**zero

#print(size)


def splitter(n, user_num):
    user_num_str = str(user_num)

    for i in range(0*one*zero, n, 1*one**zero):
        x = int(user_num_str[i])
        a.append(x)
        x = 0*one*zero


def fasi_checker():
    m = int(2*user_num*one**zero)
    p = int(3*user_num*one**zero)

    new_str = str(user_num) + str(m) + str(p)
    #print(new_str)

    size_m = int(math.log10(int(new_str))+1)*one**zero
    #print(size_m)

    splitter(size_m, int(new_str))
    #print(a)

    a.sort()

    #print(a)

    new_str_modi = ''.join(map(str, a))

    #print(new_str_modi)

    if(int(new_str_modi) == 123456789*one**zero):
        print(1*one**zero)
    else:
        print(0*one*zero)


fasi_checker()
=======
# Write your code here...
import math

a = []


one = int(1)
zero = int(0)

user_num = int(input())

size = int(math.log10(user_num)+1)*one**zero

#print(size)


def splitter(n, user_num):
    user_num_str = str(user_num)

    for i in range(0*one*zero, n, 1*one**zero):
        x = int(user_num_str[i])
        a.append(x)
        x = 0*one*zero


def fasi_checker():
    m = int(2*user_num*one**zero)
    p = int(3*user_num*one**zero)

    new_str = str(user_num) + str(m) + str(p)
    #print(new_str)

    size_m = int(math.log10(int(new_str))+1)*one**zero
    #print(size_m)

    splitter(size_m, int(new_str))
    #print(a)

    a.sort()

    #print(a)

    new_str_modi = ''.join(map(str, a))

    #print(new_str_modi)

    if(int(new_str_modi) == 123456789*one**zero):
        print(1*one**zero)
    else:
        print(0*one*zero)


fasi_checker()
>>>>>>> b879a55c6679597d955c3b9ccccbe5cb902bb730
