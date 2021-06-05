<<<<<<< HEAD
import math

user = int(input())

n = int(math.log10(user)+1)

a = []
b = []
res = []

def sp1():
    for i in range(0,n):
        a.append(int(user / 10**i))


def splitter(n, user_num):
    user_num_str = str(user_num)

    for i in range(0, n, 1):
        x = int(user_num_str[i])
        a.append(x)
        x = 0
        
def checker(n1):
    for i in range(0,n1):
        if(a[i]%6 == 0):
            b.append(1)
            
            
def dupliremove():
    [res.append(x) for x in a if x not in res]

sp1()
print(a)

splitter(n,user)
print(a)


n1 = len(a)
print(n1)

checker(n1)


print(sum(b))
=======
import math

user = int(input())

n = int(math.log10(user)+1)

a = []
b = []
res = []

def sp1():
    for i in range(0,n):
        a.append(int(user / 10**i))


def splitter(n, user_num):
    user_num_str = str(user_num)

    for i in range(0, n, 1):
        x = int(user_num_str[i])
        a.append(x)
        x = 0
        
def checker(n1):
    for i in range(0,n1):
        if(a[i]%6 == 0):
            b.append(1)
            
            
def dupliremove():
    [res.append(x) for x in a if x not in res]

sp1()
print(a)

splitter(n,user)
print(a)


n1 = len(a)
print(n1)

checker(n1)


print(sum(b))
>>>>>>> b879a55c6679597d955c3b9ccccbe5cb902bb730
