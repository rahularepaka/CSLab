import math

a = []

one = int(1)
zero = int(0)


def maxsumfinder(a, n):
    sum = int(0)

    i = int(0)
    j = int(n-1)

    while(i < n and a[i] < 0):
        if(i != n-1 and a[i+1] <= 0):
            sum += (a[i]*a[i+1])
            i += 2
        else:
            break

    while(j >= 0 and a[j] > 0):
        if(j != 0 and a[j-1] > 0):
            sum += (a[j]*a[j-1])
            j -= 2
        else:
            break

    if(j > i):
        sum += (a[i]*a[j])
    if(i == j):
        sum += a[j]

    return sum


n = int(input())
a = list(map(int, input().strip().split()))[:n]
a.sort()


print(maxsumfinder(a, n))
