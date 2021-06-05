<<<<<<< HEAD
import sys

us = str(input().strip())

n = int(len(us))

a = []
b = []
res = []


one = int(1)
zero = int(0)

def sp1():
    for i in range(0, n):
        a.append(int(us / 10**i))


def splitter(n, user_num):
    user_num_str = str(user_num)

    for i in range(0, n, 1):
        x = int(user_num_str[i])
        a.append(x)
        x = 0


def checker(n1):
    for i in range(0, n1):
        if(a[i] % 6 == 0):
            b.append(1)


def dupliremove():
    [res.append(x) for x in a if x not in res]


def finder():
    for i in range(n):
        x = int(us[i]*one)
        if(x % 6 == (0):
            a.append(1)
        if(x != 0):
            for j in range(i+1, n):
                x = x*10 + int(us[j])
                if(x % 6 == 0):
                    a.append(1)
                

finder()
print(sum(a))
=======
import sys

us = str(input().strip())

n = int(len(us))

a = []
b = []
res = []


one = int(1)
zero = int(0)

def sp1():
    for i in range(0, n):
        a.append(int(us / 10**i))


def splitter(n, user_num):
    user_num_str = str(user_num)

    for i in range(0, n, 1):
        x = int(user_num_str[i])
        a.append(x)
        x = 0


def checker(n1):
    for i in range(0, n1):
        if(a[i] % 6 == 0):
            b.append(1)


def dupliremove():
    [res.append(x) for x in a if x not in res]


def finder():
    for i in range(n):
        x = int(us[i]*one)
        if(x % 6 == (0):
            a.append(1)
        if(x != 0):
            for j in range(i+1, n):
                x = x*10 + int(us[j])
                if(x % 6 == 0):
                    a.append(1)
                

finder()
print(sum(a))
>>>>>>> b879a55c6679597d955c3b9ccccbe5cb902bb730
