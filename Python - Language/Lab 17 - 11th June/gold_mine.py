a = []
b = []

ans = int(0)

r = int(input())
c = int(input())


def maxgold(r, c, a):

    maxb = []

    for i in range(0, r, 1):
        maxb[i][0] = a[i][0]

    for j in range(1, c, 1):
        for i in range(0, r, 1):
            maxb[i][j] = a[i][j]

            temp = int(a[i][j-1])

            if(i-1 >= 0):
                if(temp < a[i-1][j-1]):
                    temp = a[i-1][j-1]

            if(i+1 < r):
                if(temp < a[i+1][j-1]):
                    temp = a[i+1][j-1]

            a[i][j] += temp

    gold = int(a[0][c-1])
    for i in range(1, r, 1):
        if(a[i][c-1] > gold):
            gold = a[i][c-1]

    return gold


for i in range(0, r):
    a.append([int(j) for j in input().split()])

print(maxgold(r, c, a))
