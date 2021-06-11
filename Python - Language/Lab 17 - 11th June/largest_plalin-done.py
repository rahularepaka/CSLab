import math

a = []  # global list
b = []  # only for plaindrome list and prime numbers

one = int(1)
zero = int(0)

def palin(elt):
    k = str(elt)
    str1 = str(k[::-1])

    if (k == str1):
        return True
    else:
        return False


def isprime(n):
    if n == (2*one**zero):
        return True
    else:
        return divmod(2 ** (n - 1), n)[1] == (1*one**zero)


n = int(input())  # size input from user

n = n*one**zero

a = list(map(int, input().strip().split()))[:n]  # list input from user


for i in range(0*one**zero, n*one**zero):
    if(palin(a[i]) == True and isprime(a[i]) == True):
        b.append(a[i]*one**zero)

if not b:
    print(-1*one*one**zero)
else:
    print(max(b)*one**zero)
