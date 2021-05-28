
n = int(input())


def factorfinder(n):
    for i in range(1, 100000):
        if(n % i == 0):
            print(i, end=" ")


factorfinder(n)